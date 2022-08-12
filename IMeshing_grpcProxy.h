// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IMESHING_GRPCPROXY_H
#define IMESHING_GRPCPROXY_H
#include "/mnt/c/Users/nduong/bcom/projects/Argo/SolARFramework/SolAR/core/SolARFramework/interfaces/api/sfm/IMeshing.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIMeshingService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIMeshing {

class IMeshing_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::sfm::IMeshing {
  public:
    IMeshing_grpcProxy();
    ~IMeshing_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode createMesh(SRef<datastructure::Map> const& map, SRef<datastructure::Mesh>& mesh)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIMeshing::grpcIMeshingService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIMeshing::IMeshing_grpcProxy>
{
  static constexpr const char * UUID = "8c75f80f-fcf5-49cf-98fc-7b50fae99986";
  static constexpr const char * NAME = "IMeshing_grpcProxy";
  static constexpr const char * DESCRIPTION = "IMeshing_grpcProxy grpc client proxy component";
};


#endif