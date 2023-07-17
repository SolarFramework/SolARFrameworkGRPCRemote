// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef ISERVICEMANAGERPIPELINE_GRPCPROXY_H
#define ISERVICEMANAGERPIPELINE_GRPCPROXY_H
#include "api/pipeline/IServiceManagerPipeline.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIServiceManagerPipelineService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIServiceManagerPipeline {

class IServiceManagerPipeline_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::pipeline::IServiceManagerPipeline {
  public:
    IServiceManagerPipeline_grpcProxy();
    ~IServiceManagerPipeline_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode init()     override;
    SolAR::FrameworkReturnCode start()     override;
    SolAR::FrameworkReturnCode stop()     override;
    SolAR::FrameworkReturnCode registerService(SolAR::api::pipeline::ServiceType const serviceType, std::string const& serviceURL)     override;
    SolAR::FrameworkReturnCode unregisterService(SolAR::api::pipeline::ServiceType const serviceType, std::string const& serviceURL)     override;
    SolAR::FrameworkReturnCode getService(SolAR::api::pipeline::ServiceType const serviceType, std::string& serviceURL)     const     override;
    SolAR::FrameworkReturnCode getAndLockService(SolAR::api::pipeline::ServiceType const serviceType, std::string const& clientUUID, std::string& serviceURL)     override;
    SolAR::FrameworkReturnCode unlockService(SolAR::api::pipeline::ServiceType const serviceType, std::string const& clientUUID)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIServiceManagerPipeline::grpcIServiceManagerPipelineService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIServiceManagerPipeline::IServiceManagerPipeline_grpcProxy>
{
  static constexpr const char * UUID = "600ca5f4-6432-11ed-81ce-0242ac120002";
  static constexpr const char * NAME = "IServiceManagerPipeline_grpcProxy";
  static constexpr const char * DESCRIPTION = "IServiceManagerPipeline_grpcProxy grpc client proxy component";
};


#endif