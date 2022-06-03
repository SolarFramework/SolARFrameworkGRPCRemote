// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IRELOCALIZER_GRPCPROXY_H
#define IRELOCALIZER_GRPCPROXY_H
#include "api/reloc/IRelocalizer.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIRelocalizerService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIRelocalizer {

class IRelocalizer_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::reloc::IRelocalizer {
  public:
    IRelocalizer_grpcProxy();
    ~IRelocalizer_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode addKeyframe(SRef<SolAR::datastructure::Keyframe> const keyframe)     override;
    SolAR::FrameworkReturnCode relocalize(SRef<SolAR::datastructure::Frame> const frame, SolAR::datastructure::Transform3Df& pose)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIRelocalizer::grpcIRelocalizerService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIRelocalizer::IRelocalizer_grpcProxy>
{
  static constexpr const char * UUID = "fcbc25a8-d706-4a80-9d18-820bebbe45d6";
  static constexpr const char * NAME = "IRelocalizer_grpcProxy";
  static constexpr const char * DESCRIPTION = "IRelocalizer_grpcProxy grpc client proxy component";
};


#endif