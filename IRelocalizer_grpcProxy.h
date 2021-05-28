// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IRELOCALIZER_GRPCPROXY_H
#define IRELOCALIZER_GRPCPROXY_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/reloc/IRelocalizer.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIRelocalizerService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

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
    std::unique_ptr<::grpcIRelocalizer::grpcIRelocalizerService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIRelocalizer::IRelocalizer_grpcProxy>
{
  static constexpr const char * UUID = "cec3c0b4-c640-4ea6-bc87-37619d3a4199";
  static constexpr const char * NAME = "IRelocalizer_grpcProxy";
  static constexpr const char * DESCRIPTION = "IRelocalizer_grpcProxy grpc client proxy component";
};


#endif