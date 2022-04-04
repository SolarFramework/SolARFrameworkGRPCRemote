// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IIMAGE2WORLDMAPPER_GRPCPROXY_H
#define IIMAGE2WORLDMAPPER_GRPCPROXY_H
#include "/mnt/c/Users/nduong/bcom/projects/Argo/SolARFramework/SolAR/core/SolARFramework/interfaces/api/geom/IImage2WorldMapper.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIImage2WorldMapperService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIImage2WorldMapper {

class IImage2WorldMapper_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::geom::IImage2WorldMapper {
  public:
    IImage2WorldMapper_grpcProxy();
    ~IImage2WorldMapper_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode map(std::vector<SolAR::datastructure::Point2Df> const& digitalPoints, std::vector<SolAR::datastructure::Point3Df>& worldPoints)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIImage2WorldMapper::grpcIImage2WorldMapperService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIImage2WorldMapper::IImage2WorldMapper_grpcProxy>
{
  static constexpr const char * UUID = "79e05ea9-ff48-45fd-aa04-bad8441bf8b0";
  static constexpr const char * NAME = "IImage2WorldMapper_grpcProxy";
  static constexpr const char * DESCRIPTION = "IImage2WorldMapper_grpcProxy grpc client proxy component";
};


#endif