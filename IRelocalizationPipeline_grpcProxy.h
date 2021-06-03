// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IRELOCALIZATIONPIPELINE_GRPCPROXY_H
#define IRELOCALIZATIONPIPELINE_GRPCPROXY_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/pipeline/IRelocalizationPipeline.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIRelocalizationPipelineService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyIRelocalizationPipeline {

class IRelocalizationPipeline_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::pipeline::IRelocalizationPipeline {
  public:
    IRelocalizationPipeline_grpcProxy();
    ~IRelocalizationPipeline_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode init()     override;
    SolAR::FrameworkReturnCode start()     override;
    SolAR::FrameworkReturnCode stop()     override;
    SolAR::FrameworkReturnCode setCameraParameters(SolAR::datastructure::CameraParameters const& cameraParams)     override;
    SolAR::FrameworkReturnCode getCameraParameters(SolAR::datastructure::CameraParameters& cameraParams)     const     override;
    SolAR::FrameworkReturnCode relocalizeProcessRequest(SRef<SolAR::datastructure::Image> const image, SolAR::datastructure::Transform3Df& pose, float_t& confidence)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcIRelocalizationPipeline::grpcIRelocalizationPipelineService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIRelocalizationPipeline::IRelocalizationPipeline_grpcProxy>
{
  static constexpr const char * UUID = "597d510d-452a-4da2-9c3a-8d4b8d15c584";
  static constexpr const char * NAME = "IRelocalizationPipeline_grpcProxy";
  static constexpr const char * DESCRIPTION = "IRelocalizationPipeline_grpcProxy grpc client proxy component";
};


#endif