// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef ISERVICEWORLDGRAPH_GRPCPROXY_H
#define ISERVICEWORLDGRAPH_GRPCPROXY_H
#include "api/service/IServiceWorldGraph.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIServiceWorldGraphService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIServiceWorldGraph {

class IServiceWorldGraph_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::service::IServiceWorldGraph {
  public:
    IServiceWorldGraph_grpcProxy();
    ~IServiceWorldGraph_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode init()     override;
    SolAR::FrameworkReturnCode start()     override;
    SolAR::FrameworkReturnCode stop()     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIServiceWorldGraph::grpcIServiceWorldGraphService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIServiceWorldGraph::IServiceWorldGraph_grpcProxy>
{
  static constexpr const char * UUID = "0c98c9b8-cabb-4e6e-93fb-23cbbfc528e7";
  static constexpr const char * NAME = "IServiceWorldGraph_grpcProxy";
  static constexpr const char * DESCRIPTION = "IServiceWorldGraph_grpcProxy grpc client proxy component";
};


#endif