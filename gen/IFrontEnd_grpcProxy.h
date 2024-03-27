// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IFRONTEND_GRPCPROXY_H
#define IFRONTEND_GRPCPROXY_H
#include "/home/jroyan/Dev/SolAR-bcom/core/SolARFramework/interfaces/api/service/IFrontEnd.h"
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

    SolAR::FrameworkReturnCode registerClient(SolAR::api::service::DeviceInfo const& deviceInfo, std::string const& mapUUID, std::string& clientUUID)     override;
    SolAR::FrameworkReturnCode unregisterClient(std::string const& clientUUID)     override;
    SolAR::FrameworkReturnCode getAllClientsUUID(std::vector<std::string>& clientUUIDList)     const     override;
    SolAR::FrameworkReturnCode getDeviceInfo(std::string const& clientUUID, SolAR::api::service::DeviceInfo& deviceInfo)     const     override;
    SolAR::FrameworkReturnCode init(std::string const& clientUUID)     override;
    SolAR::FrameworkReturnCode init(std::string const& clientUUID, SolAR::api::service::PipelineMode pipelineMode)     override;
    SolAR::FrameworkReturnCode start(std::string const& clientUUID)     override;
    SolAR::FrameworkReturnCode stop(std::string const& clientUUID)     override;
    SolAR::FrameworkReturnCode getProcessingMode(std::string const& clientUUID, SolAR::api::service::PipelineMode& pipelineMode)     const     override;
    SolAR::FrameworkReturnCode setCameraParameters(std::string const& clientUUID, SolAR::datastructure::CameraParameters const& cameraParams)     override;
    SolAR::FrameworkReturnCode setCameraParameters(std::string const& clientUUID, SolAR::datastructure::CameraParameters const& cameraParams1, SolAR::datastructure::CameraParameters const& cameraParams2)     override;
    SolAR::FrameworkReturnCode setRectificationParameters(std::string const& clientUUID, SolAR::datastructure::RectificationParameters const& rectCam1, SolAR::datastructure::RectificationParameters const& rectCam2)     override;
    SolAR::FrameworkReturnCode getCameraParameters(std::string const& clientUUID, SolAR::datastructure::CameraParameters& cameraParams)     const     override;
    SolAR::FrameworkReturnCode relocalizeProcessRequest(std::string const& clientUUID, std::vector<SRef<SolAR::datastructure::Image>> const& images, std::vector<SolAR::datastructure::Transform3Df> const& poses, bool fixedPose, SolAR::datastructure::Transform3Df const& worldTransform, std::chrono::system_clock::time_point const& timestamp, SolAR::api::service::TransformStatus& transform3DStatus, SolAR::datastructure::Transform3Df& transform3D, float_t& confidence, SolAR::api::pipeline::MappingStatus& mappingStatus)     override;
    SolAR::FrameworkReturnCode relocalizeProcessRequest(std::string const& clientUUID, std::vector<SRef<SolAR::datastructure::Image>> const& images, std::vector<SolAR::datastructure::Transform3Df> const& poses, bool fixedPose, SolAR::datastructure::Transform3Df const& worldTransform, std::chrono::system_clock::time_point const& timestamp, SolAR::api::service::TransformStatus& transform3DStatus, SolAR::datastructure::Transform3Df& transform3D, float_t& confidence, SolAR::api::pipeline::MappingStatus& mappingStatus, std::vector<SolAR::datastructure::DetectedObject>& detectedObjects)     override;
    SolAR::FrameworkReturnCode get3DTransformRequest(std::string const& clientUUID, SolAR::api::service::TransformStatus& transform3DStatus, SolAR::datastructure::Transform3Df& transform3D, float_t& confidence)     override;
    SolAR::FrameworkReturnCode getMappingDataRequest(std::string const& clientUUID, std::vector<SRef<SolAR::datastructure::CloudPoint>>& outputPointClouds, std::vector<SolAR::datastructure::Transform3Df>& keyframePoses)     const     override;
    SolAR::FrameworkReturnCode getLastPose(std::string const& clientUUID, SolAR::datastructure::Transform3Df& pose, SolAR::api::service::PoseType const poseType)     const     override;
    SolAR::FrameworkReturnCode createMap(std::string const& mapUUID)     override;
    SolAR::FrameworkReturnCode deleteMap(std::string const& mapUUID)     override;
    SolAR::FrameworkReturnCode getAllMapsUUID(std::vector<std::string>& mapUUIDList)     const     override;
    SolAR::FrameworkReturnCode getClientMapUUID(std::string const& clientUUID, std::string& mapUUID)     const     override;
    SolAR::FrameworkReturnCode getMapRequest(std::string const& mapUUID, SRef<SolAR::datastructure::Map>& mapDatastructure)     const     override;
    SolAR::FrameworkReturnCode setMapRequest(std::string const& mapUUID, SRef<SolAR::datastructure::Map> const mapDatastructure)     override;
    SolAR::FrameworkReturnCode getPointCloudRequest(std::string const& mapUUID, SRef<SolAR::datastructure::PointCloud>& pointCloud)     const     override;


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