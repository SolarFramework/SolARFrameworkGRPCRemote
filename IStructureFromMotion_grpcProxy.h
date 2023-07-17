// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef ISTRUCTUREFROMMOTION_GRPCPROXY_H
#define ISTRUCTUREFROMMOTION_GRPCPROXY_H
#include "/mnt/c/Users/nduong/bcom/projects/Argo/SolARFramework/SolAR/core/SolARFramework/interfaces/api/sfm/IStructureFromMotion.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIStructureFromMotionService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIStructureFromMotion {

class IStructureFromMotion_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::sfm::IStructureFromMotion {
  public:
    IStructureFromMotion_grpcProxy();
    ~IStructureFromMotion_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode createMap(std::vector<SRef<datastructure::Image>>& images, SRef<datastructure::Map>& map)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIStructureFromMotion::grpcIStructureFromMotionService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIStructureFromMotion::IStructureFromMotion_grpcProxy>
{
  static constexpr const char * UUID = "462b56fd-1bc6-409b-846e-3154d7142851";
  static constexpr const char * NAME = "IStructureFromMotion_grpcProxy";
  static constexpr const char * DESCRIPTION = "IStructureFromMotion_grpcProxy grpc client proxy component";
};


#endif