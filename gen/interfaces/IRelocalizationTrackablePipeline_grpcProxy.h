// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IRELOCALIZATIONTRACKABLEPIPELINE_GRPCPROXY_H
#define IRELOCALIZATIONTRACKABLEPIPELINE_GRPCPROXY_H
#include "api/pipeline/IRelocalizationTrackablePipeline.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIRelocalizationTrackablePipelineService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIRelocalizationTrackablePipeline {

class IRelocalizationTrackablePipeline_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::pipeline::IRelocalizationTrackablePipeline {
  public:
    IRelocalizationTrackablePipeline_grpcProxy();
    ~IRelocalizationTrackablePipeline_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode init()     override;
    SolAR::FrameworkReturnCode start()     override;
    SolAR::FrameworkReturnCode stop()     override;
    SolAR::FrameworkReturnCode init(std::string const& clientUUID)     override;
    SolAR::FrameworkReturnCode init(std::string const& clientUUID, std::string const& mapupdateServiceURL)     override;
    SolAR::FrameworkReturnCode start(std::string const& clientUUID)     override;
    SolAR::FrameworkReturnCode stop(std::string const& clientUUID)     override;
    SolAR::FrameworkReturnCode setCameraParameters(std::string const& clientUUID, SolAR::datastructure::CameraParameters const& cameraParams)     override;
    SolAR::FrameworkReturnCode getCameraParameters(std::string const& clientUUID, SolAR::datastructure::CameraParameters& cameraParams)     const     override;
    SolAR::FrameworkReturnCode relocalizeProcessRequest(std::string const& clientUUID, SRef<SolAR::datastructure::Image> const image, SolAR::datastructure::Transform3Df& pose, float_t& confidence, SolAR::datastructure::Transform3Df const& poseCoarse)     override;
    SolAR::FrameworkReturnCode relocalizeProcessRequest(std::string const& clientUUID, SRef<SolAR::datastructure::Image> const image, std::vector<SRef<SolAR::datastructure::CloudPoint>>& currPointCloud, SolAR::datastructure::Transform3Df& pose, float_t& confidence, SolAR::datastructure::Transform3Df const& poseCoarse)     override;
    SolAR::FrameworkReturnCode relocalizeProcessRequest(std::string const& clientUUID, SRef<SolAR::datastructure::Image> const image, SolAR::datastructure::Transform3Df& pose, float_t& confidence, std::vector<SolAR::datastructure::DetectedObject>& detectedObjects, SolAR::datastructure::Transform3Df const& poseCoarse)     override;
    SolAR::FrameworkReturnCode getMapRequest(std::string const& clientUUID, SRef<SolAR::datastructure::Map>& map)     const     override;
    SolAR::FrameworkReturnCode init(std::string const& clientUUID, std::vector<SRef<SolAR::datastructure::Trackable>> const& trackableObjects)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIRelocalizationTrackablePipeline::grpcIRelocalizationTrackablePipelineService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIRelocalizationTrackablePipeline::IRelocalizationTrackablePipeline_grpcProxy>
{
  static constexpr const char * UUID = "76636689-a511-4fee-8c51-bf951147d513";
  static constexpr const char * NAME = "IRelocalizationTrackablePipeline_grpcProxy";
  static constexpr const char * DESCRIPTION = "IRelocalizationTrackablePipeline_grpcProxy grpc client proxy component";
};


#endif