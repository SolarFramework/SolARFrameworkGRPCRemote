// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IMAPUPDATEPIPELINE_GRPCPROXY_H
#define IMAPUPDATEPIPELINE_GRPCPROXY_H
#include "/home/ccutullic/Dev/SolAR/core/SolARFramework/interfaces/api/pipeline/IMapUpdatePipeline.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIMapUpdatePipelineService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyIMapUpdatePipeline {

class IMapUpdatePipeline_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::pipeline::IMapUpdatePipeline {
  public:
    IMapUpdatePipeline_grpcProxy();
    ~IMapUpdatePipeline_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode init()     override;
    SolAR::FrameworkReturnCode start()     override;
    SolAR::FrameworkReturnCode stop()     override;
    SolAR::FrameworkReturnCode setCameraParameters(SolAR::datastructure::CameraParameters const& cameraParams)     override;
    SolAR::FrameworkReturnCode mapUpdateRequest(SRef<SolAR::datastructure::Map> const map)     override;
    SolAR::FrameworkReturnCode getMapRequest(SRef<SolAR::datastructure::Map>& map)     const     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcIMapUpdatePipeline::grpcIMapUpdatePipelineService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIMapUpdatePipeline::IMapUpdatePipeline_grpcProxy>
{
  static constexpr const char * UUID = "d9da863c-c9ff-4562-a3a2-329ac1f44008";
  static constexpr const char * NAME = "IMapUpdatePipeline_grpcProxy";
  static constexpr const char * DESCRIPTION = "IMapUpdatePipeline_grpcProxy grpc client proxy component";
};


#endif