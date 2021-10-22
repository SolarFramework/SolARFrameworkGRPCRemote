// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef ILOOPCLOSUREDETECTOR_GRPCPROXY_H
#define ILOOPCLOSUREDETECTOR_GRPCPROXY_H
#include "api/loop/ILoopClosureDetector.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcILoopClosureDetectorService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyILoopClosureDetector {

class ILoopClosureDetector_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::loop::ILoopClosureDetector {
  public:
    ILoopClosureDetector_grpcProxy();
    ~ILoopClosureDetector_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    void setCameraParameters(SolAR::datastructure::CamCalibration const& intrinsicParams, SolAR::datastructure::CamDistortion const& distortionParams)     override;
    SolAR::FrameworkReturnCode detect(SRef<SolAR::datastructure::Keyframe> const queryKeyframe, SRef<SolAR::datastructure::Keyframe>& detectedLoopKeyframe, SolAR::datastructure::Transform3Df& sim3Transform, std::vector<std::pair<uint32_t,uint32_t>>& duplicatedPointsIndices)     const     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcILoopClosureDetector::grpcILoopClosureDetectorService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyILoopClosureDetector::ILoopClosureDetector_grpcProxy>
{
  static constexpr const char * UUID = "ee57ff66-30d0-11ec-8d3d-0242ac130003";
  static constexpr const char * NAME = "ILoopClosureDetector_grpcProxy";
  static constexpr const char * DESCRIPTION = "ILoopClosureDetector_grpcProxy grpc client proxy component";
};


#endif