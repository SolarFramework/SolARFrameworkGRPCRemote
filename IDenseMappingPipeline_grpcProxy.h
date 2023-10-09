// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IDENSEMAPPINGPIPELINE_GRPCPROXY_H
#define IDENSEMAPPINGPIPELINE_GRPCPROXY_H
#include "Dev/SolAR/SolARFramework/interfaces/api/pipeline/IDenseMappingPipeline.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIDenseMappingPipelineService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIDenseMappingPipeline {

class IDenseMappingPipeline_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::pipeline::IDenseMappingPipeline {
  public:
    IDenseMappingPipeline_grpcProxy();
    ~IDenseMappingPipeline_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode init()     override;
    SolAR::FrameworkReturnCode start()     override;
    SolAR::FrameworkReturnCode stop()     override;
    SolAR::FrameworkReturnCode denseMappingProcessRequest(SRef<SolAR::datastructure::Map> const& sparseMap, bool const createMesh)     override;
    SolAR::FrameworkReturnCode getPointCloud(SRef<SolAR::datastructure::PointCloud>& outputPointCloud, SolAR::api::pipeline::DenseMappingStatus& status)     const     override;
    SolAR::FrameworkReturnCode getMesh(SRef<SolAR::datastructure::Mesh>& outputMesh, SolAR::api::pipeline::DenseMappingStatus& status)     const     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIDenseMappingPipeline::grpcIDenseMappingPipelineService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIDenseMappingPipeline::IDenseMappingPipeline_grpcProxy>
{
  static constexpr const char * UUID = "54fc1ed0-480b-11ed-b878-0242ac120002";
  static constexpr const char * NAME = "IDenseMappingPipeline_grpcProxy";
  static constexpr const char * DESCRIPTION = "IDenseMappingPipeline_grpcProxy grpc client proxy component";
};


#endif