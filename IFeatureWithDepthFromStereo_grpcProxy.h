// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IFEATUREWITHDEPTHFROMSTEREO_GRPCPROXY_H
#define IFEATUREWITHDEPTHFROMSTEREO_GRPCPROXY_H
#include "/home/solar/Dev/SolAR/core/SolARFramework/interfaces/api/features/IFeatureWithDepthFromStereo.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIFeatureWithDepthFromStereoService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyIFeatureWithDepthFromStereo {

class IFeatureWithDepthFromStereo_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::features::IFeatureWithDepthFromStereo {
  public:
    IFeatureWithDepthFromStereo_grpcProxy();
    ~IFeatureWithDepthFromStereo_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    void setRectificationParameters(SolAR::datastructure::CameraParameters const& camParams1, SolAR::datastructure::CameraParameters const& camParams2, SolAR::datastructure::RectificationParameters const& rectParams1, SolAR::datastructure::RectificationParameters const& rectParams2)     override;
    SolAR::FrameworkReturnCode compute(SRef<SolAR::datastructure::Image> image1, SRef<SolAR::datastructure::Image> image2, SRef<SolAR::datastructure::Frame>& frame1, SRef<SolAR::datastructure::Frame>& frame2)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcIFeatureWithDepthFromStereo::grpcIFeatureWithDepthFromStereoService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIFeatureWithDepthFromStereo::IFeatureWithDepthFromStereo_grpcProxy>
{
  static constexpr const char * UUID = "e5c18ce7-5216-4eb7-8585-b3983bef0e75";
  static constexpr const char * NAME = "IFeatureWithDepthFromStereo_grpcProxy";
  static constexpr const char * DESCRIPTION = "IFeatureWithDepthFromStereo_grpcProxy grpc client proxy component";
};


#endif