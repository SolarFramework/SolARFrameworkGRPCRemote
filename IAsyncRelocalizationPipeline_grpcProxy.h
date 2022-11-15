// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IASYNCRELOCALIZATIONPIPELINE_GRPCPROXY_H
#define IASYNCRELOCALIZATIONPIPELINE_GRPCPROXY_H
#include "api/pipeline/IAsyncRelocalizationPipeline.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIAsyncRelocalizationPipelineService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIAsyncRelocalizationPipeline {

class IAsyncRelocalizationPipeline_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::pipeline::IAsyncRelocalizationPipeline {
  public:
    IAsyncRelocalizationPipeline_grpcProxy();
    ~IAsyncRelocalizationPipeline_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode init()     override;
    SolAR::FrameworkReturnCode start()     override;
    SolAR::FrameworkReturnCode stop()     override;
    SolAR::FrameworkReturnCode registerClient(std::string& uuid)     override;
    SolAR::FrameworkReturnCode unregisterClient(std::string const uuid)     override;
    SolAR::FrameworkReturnCode init(std::string const uuid)     override;
    SolAR::FrameworkReturnCode init(std::string const uuid, SolAR::api::pipeline::PipelineMode pipelineMode)     override;
    SolAR::FrameworkReturnCode start(std::string const uuid)     override;
    SolAR::FrameworkReturnCode stop(std::string const uuid)     override;
    SolAR::FrameworkReturnCode getProcessingMode(std::string const uuid, SolAR::api::pipeline::PipelineMode& pipelineMode)     const     override;
    SolAR::FrameworkReturnCode setCameraParameters(std::string const uuid, SolAR::datastructure::CameraParameters const& cameraParams)     override;
    SolAR::FrameworkReturnCode setCameraParameters(std::string const uuid, SolAR::datastructure::CameraParameters const& cameraParams1, SolAR::datastructure::CameraParameters const& cameraParams2)     override;
    SolAR::FrameworkReturnCode setRectificationParameters(std::string const uuid, SolAR::datastructure::RectificationParameters const& rectCam1, SolAR::datastructure::RectificationParameters const& rectCam2)     override;
    SolAR::FrameworkReturnCode getCameraParameters(std::string const uuid, SolAR::datastructure::CameraParameters& cameraParams)     const     override;
    SolAR::FrameworkReturnCode relocalizeProcessRequest(std::string const uuid, std::vector<SRef<SolAR::datastructure::Image>> const& images, std::vector<SolAR::datastructure::Transform3Df> const& poses, std::chrono::system_clock::time_point const& timestamp, SolAR::api::pipeline::TransformStatus& transform3DStatus, SolAR::datastructure::Transform3Df& transform3D, float_t& confidence, SolAR::api::pipeline::MappingStatus& mappingStatus)     override;
    SolAR::FrameworkReturnCode get3DTransformRequest(std::string const uuid, SolAR::api::pipeline::TransformStatus& transform3DStatus, SolAR::datastructure::Transform3Df& transform3D, float_t& confidence)     override;
    SolAR::FrameworkReturnCode getLastPose(std::string const uuid, SolAR::datastructure::Transform3Df& pose, SolAR::api::pipeline::PoseType const poseType)     const     override;
    SolAR::FrameworkReturnCode getMapRequest(std::string const uuid, SRef<SolAR::datastructure::Map>& map)     const     override;
    SolAR::FrameworkReturnCode resetMap(std::string const uuid)     const     override;
    SolAR::FrameworkReturnCode getPointCloudRequest(std::string const uuid, SRef<SolAR::datastructure::PointCloud>& pointCloud)     const     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIAsyncRelocalizationPipeline::grpcIAsyncRelocalizationPipelineService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIAsyncRelocalizationPipeline::IAsyncRelocalizationPipeline_grpcProxy>
{
  static constexpr const char * UUID = "91a569da-5695-11ec-bf63-0242ac130002";
  static constexpr const char * NAME = "IAsyncRelocalizationPipeline_grpcProxy";
  static constexpr const char * DESCRIPTION = "IAsyncRelocalizationPipeline_grpcProxy grpc client proxy component";
};


#endif
