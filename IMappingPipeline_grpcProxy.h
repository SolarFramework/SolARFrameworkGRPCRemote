// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IMAPPINGPIPELINE_GRPCPROXY_H
#define IMAPPINGPIPELINE_GRPCPROXY_H
#include "/home/solar/Dev/SolAR/core/SolARFramework/interfaces/api/pipeline/IMappingPipeline.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIMappingPipelineService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyIMappingPipeline {

class IMappingPipeline_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::pipeline::IMappingPipeline {
  public:
    IMappingPipeline_grpcProxy();
    ~IMappingPipeline_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode init()     override;
    SolAR::FrameworkReturnCode start()     override;
    SolAR::FrameworkReturnCode stop()     override;
    SolAR::FrameworkReturnCode setCameraParameters(SolAR::datastructure::CameraParameters const& cameraParams)     override;
    SolAR::FrameworkReturnCode mappingProcessRequest(SRef<SolAR::datastructure::Image> const image, SolAR::datastructure::Transform3Df const& pose)     override;
    SolAR::FrameworkReturnCode getDataForVisualization(std::vector<SRef<SolAR::datastructure::CloudPoint>>& outputPointClouds, std::vector<SolAR::datastructure::Transform3Df>& keyframePoses)     const     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcIMappingPipeline::grpcIMappingPipelineService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIMappingPipeline::IMappingPipeline_grpcProxy>
{
  static constexpr const char * UUID = "110a089c-0bb1-488e-b24b-c1b96bc9df3b";
  static constexpr const char * NAME = "IMappingPipeline_grpcProxy";
  static constexpr const char * DESCRIPTION = "IMappingPipeline_grpcProxy grpc client proxy component";
};


#endif