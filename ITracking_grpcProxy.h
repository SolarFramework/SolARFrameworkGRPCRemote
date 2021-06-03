// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef ITRACKING_GRPCPROXY_H
#define ITRACKING_GRPCPROXY_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/slam/ITracking.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcITrackingService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyITracking {

class ITracking_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::slam::ITracking {
  public:
    ITracking_grpcProxy();
    ~ITracking_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    void setCameraParameters(SolAR::datastructure::CamCalibration const& intrinsicParams, SolAR::datastructure::CamDistortion const& distorsionParams)     override;
    void updateReferenceKeyframe(SRef<SolAR::datastructure::Keyframe> const refKeyframe)     override;
    SolAR::FrameworkReturnCode process(SRef<SolAR::datastructure::Frame> const frame, SRef<SolAR::datastructure::Image>& displayImage)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcITracking::grpcITrackingService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyITracking::ITracking_grpcProxy>
{
  static constexpr const char * UUID = "6d26be79-9f48-42e9-a0d8-442203e8ea17";
  static constexpr const char * NAME = "ITracking_grpcProxy";
  static constexpr const char * DESCRIPTION = "ITracking_grpcProxy grpc client proxy component";
};


#endif