// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IFRONTEND_GRPCPROXY_H
#define IFRONTEND_GRPCPROXY_H
#include "api/service/IFrontEnd.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIFrontEndService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIFrontEnd {

class IFrontEnd_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::service::IFrontEnd {
  public:
    IFrontEnd_grpcProxy();
    ~IFrontEnd_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode registerClient(std::string& uuid)     override;
    SolAR::FrameworkReturnCode unregisterClient(std::string const& uuid)     override;
    SolAR::FrameworkReturnCode getAllClientsUUID(std::vector<std::string>& uuidList)     const     override;
    SolAR::FrameworkReturnCode init(std::string const& uuid)     override;
    SolAR::FrameworkReturnCode init(std::string const& uuid, SolAR::api::service::PipelineMode pipelineMode)     override;
    SolAR::FrameworkReturnCode start(std::string const& uuid)     override;
    SolAR::FrameworkReturnCode stop(std::string const& uuid)     override;
    SolAR::FrameworkReturnCode getProcessingMode(std::string const& uuid, SolAR::api::service::PipelineMode& pipelineMode)     const     override;
    SolAR::FrameworkReturnCode setCameraParameters(std::string const& uuid, SolAR::datastructure::CameraParameters const& cameraParams)     override;
    SolAR::FrameworkReturnCode setCameraParameters(std::string const& uuid, SolAR::datastructure::CameraParameters const& cameraParams1, SolAR::datastructure::CameraParameters const& cameraParams2)     override;
    SolAR::FrameworkReturnCode setRectificationParameters(std::string const& uuid, SolAR::datastructure::RectificationParameters const& rectCam1, SolAR::datastructure::RectificationParameters const& rectCam2)     override;
    SolAR::FrameworkReturnCode getCameraParameters(std::string const& uuid, SolAR::datastructure::CameraParameters& cameraParams)     const     override;
    SolAR::FrameworkReturnCode relocalizeProcessRequest(std::string const& uuid, std::vector<SRef<SolAR::datastructure::Image>> const& images, std::vector<SolAR::datastructure::Transform3Df> const& poses, bool fixedPose, SolAR::datastructure::Transform3Df const& worldTransform, std::chrono::system_clock::time_point const& timestamp, SolAR::api::service::TransformStatus& transform3DStatus, SolAR::datastructure::Transform3Df& transform3D, float_t& confidence, SolAR::api::pipeline::MappingStatus& mappingStatus, std::vector<SolAR::api::pipeline::DetectedObject>& detectedObjects)     override;
    SolAR::FrameworkReturnCode get3DTransformRequest(std::string const& uuid, SolAR::api::service::TransformStatus& transform3DStatus, SolAR::datastructure::Transform3Df& transform3D, float_t& confidence)     override;
    SolAR::FrameworkReturnCode getMappingDataRequest(std::string const& uuid, std::vector<SRef<SolAR::datastructure::CloudPoint>>& outputPointClouds, std::vector<SolAR::datastructure::Transform3Df>& keyframePoses)     const     override;
    SolAR::FrameworkReturnCode getLastPose(std::string const& uuid, SolAR::datastructure::Transform3Df& pose, SolAR::api::service::PoseType const poseType)     const     override;
    SolAR::FrameworkReturnCode getMapRequest(SRef<SolAR::datastructure::Map>& map)     const     override;
    SolAR::FrameworkReturnCode setMapRequest(SRef<SolAR::datastructure::Map> const map)     override;
    SolAR::FrameworkReturnCode resetMap()     const     override;
    SolAR::FrameworkReturnCode getPointCloudRequest(SRef<SolAR::datastructure::PointCloud>& pointCloud)     const     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIFrontEnd::grpcIFrontEndService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIFrontEnd::IFrontEnd_grpcProxy>
{
  static constexpr const char * UUID = "91a569da-5695-11ec-bf63-0242ac130002";
  static constexpr const char * NAME = "IFrontEnd_grpcProxy";
  static constexpr const char * DESCRIPTION = "IFrontEnd_grpcProxy grpc client proxy component";
};


#endif