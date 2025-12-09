// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IIMAGESEGMENTATIONPIPELINE_GRPCPROXY_H
#define IIMAGESEGMENTATIONPIPELINE_GRPCPROXY_H
#include "api/pipeline/IImageSegmentationPipeline.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIImageSegmentationPipelineService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIImageSegmentationPipeline {

class IImageSegmentationPipeline_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::pipeline::IImageSegmentationPipeline {
  public:
    IImageSegmentationPipeline_grpcProxy();
    ~IImageSegmentationPipeline_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode init()     override;
    SolAR::FrameworkReturnCode start()     override;
    SolAR::FrameworkReturnCode stop()     override;
    SolAR::FrameworkReturnCode segment(SRef<SolAR::datastructure::Image> image)     override;
    SolAR::FrameworkReturnCode segment(std::vector<SRef<SolAR::datastructure::Image>> const& images, bool temporalConsistency)     override;
    SolAR::FrameworkReturnCode getStatus(SolAR::api::pipeline::IImageSegmentationPipeline::Status& status, float& progress)     const     override;
    SolAR::FrameworkReturnCode getOutputMask(SRef<SolAR::datastructure::Mask2DCollection>& mask)     const     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIImageSegmentationPipeline::grpcIImageSegmentationPipelineService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIImageSegmentationPipeline::IImageSegmentationPipeline_grpcProxy>
{
  static constexpr const char * UUID = "2215b6ef-e6fa-455c-84c6-820d95630eb5";
  static constexpr const char * NAME = "IImageSegmentationPipeline_grpcProxy";
  static constexpr const char * DESCRIPTION = "IImageSegmentationPipeline_grpcProxy grpc client proxy component";
};


#endif