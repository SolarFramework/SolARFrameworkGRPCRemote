// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IMAPPROCESSINGPIPELINE_GRPCPROXY_H
#define IMAPPROCESSINGPIPELINE_GRPCPROXY_H
#include "api/pipeline/IMapProcessingPipeline.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIMapProcessingPipelineService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIMapProcessingPipeline {

class IMapProcessingPipeline_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::pipeline::IMapProcessingPipeline {
  public:
    IMapProcessingPipeline_grpcProxy();
    ~IMapProcessingPipeline_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode init()     override;
    SolAR::FrameworkReturnCode start()     override;
    SolAR::FrameworkReturnCode stop()     override;
    SolAR::FrameworkReturnCode setMapToProcess(SRef<SolAR::datastructure::Map> const map)     override;
    SolAR::FrameworkReturnCode getStatus(SolAR::api::pipeline::MapProcessingStatus& status, float& progress)     const     override;
    SolAR::FrameworkReturnCode getProcessingData(std::vector<SRef<SolAR::datastructure::CloudPoint>>& pointCloud, std::vector<SolAR::datastructure::Transform3Df>& keyframePoses)     const     override;
    SolAR::FrameworkReturnCode getProcessedMap(SRef<SolAR::datastructure::Map>& map)     const     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIMapProcessingPipeline::grpcIMapProcessingPipelineService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIMapProcessingPipeline::IMapProcessingPipeline_grpcProxy>
{
  static constexpr const char * UUID = "3e0afc52-5d71-411a-9e5b-bb73ced1cad0";
  static constexpr const char * NAME = "IMapProcessingPipeline_grpcProxy";
  static constexpr const char * DESCRIPTION = "IMapProcessingPipeline_grpcProxy grpc client proxy component";
};


#endif