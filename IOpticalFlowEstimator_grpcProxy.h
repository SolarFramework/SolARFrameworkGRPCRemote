// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IOPTICALFLOWESTIMATOR_GRPCPROXY_H
#define IOPTICALFLOWESTIMATOR_GRPCPROXY_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/tracking/IOpticalFlowEstimator.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIOpticalFlowEstimatorService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyIOpticalFlowEstimator {

class IOpticalFlowEstimator_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::tracking::IOpticalFlowEstimator {
  public:
    IOpticalFlowEstimator_grpcProxy();
    ~IOpticalFlowEstimator_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode estimate(SRef<SolAR::datastructure::Image> const previousImage, SRef<SolAR::datastructure::Image> const currentImage, std::vector<SolAR::datastructure::Keypoint> const& pointsToTrack, std::vector<SolAR::datastructure::Point2Df>& trackedPoints, std::vector<unsigned char>& status, std::vector<float>& error)     override;
    SolAR::FrameworkReturnCode estimate(SRef<SolAR::datastructure::Image> const previousImage, SRef<SolAR::datastructure::Image> const currentImage, std::vector<SolAR::datastructure::Point2Df> const& pointsToTrack, std::vector<SolAR::datastructure::Point2Df>& trackedPoints, std::vector<unsigned char>& status, std::vector<float>& error)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcIOpticalFlowEstimator::grpcIOpticalFlowEstimatorService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIOpticalFlowEstimator::IOpticalFlowEstimator_grpcProxy>
{
  static constexpr const char * UUID = "4743918a-a887-4de9-9afd-d1fe1f3be3a6";
  static constexpr const char * NAME = "IOpticalFlowEstimator_grpcProxy";
  static constexpr const char * DESCRIPTION = "IOpticalFlowEstimator_grpcProxy grpc client proxy component";
};


#endif