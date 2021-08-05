// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IMAPPING_GRPCPROXY_H
#define IMAPPING_GRPCPROXY_H
#include "/home/ccutullic/Dev/SolAR/core/SolARFramework/interfaces/api/slam/IMapping.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIMappingService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyIMapping {

class IMapping_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::slam::IMapping {
  public:
    IMapping_grpcProxy();
    ~IMapping_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    void setCameraParameters(SolAR::datastructure::CamCalibration const& intrinsicParams, SolAR::datastructure::CamDistortion const& distorsionParams)     override;
    SolAR::FrameworkReturnCode process(SRef<SolAR::datastructure::Frame> const frame, SRef<SolAR::datastructure::Keyframe>& keyframe)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcIMapping::grpcIMappingService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIMapping::IMapping_grpcProxy>
{
  static constexpr const char * UUID = "5e847f05-017b-47ea-acf0-0366f8a5a958";
  static constexpr const char * NAME = "IMapping_grpcProxy";
  static constexpr const char * DESCRIPTION = "IMapping_grpcProxy grpc client proxy component";
};


#endif