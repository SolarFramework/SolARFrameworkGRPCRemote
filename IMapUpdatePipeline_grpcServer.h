// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IMAPUPDATEPIPELINE_GRPCSERVER_H
#define IMAPUPDATEPIPELINE_GRPCSERVER_H
#include "/home/ccutullic/Dev/SolAR/core/SolARFramework/interfaces/api/pipeline/IMapUpdatePipeline.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcIMapUpdatePipelineService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIMapUpdatePipeline {

class IMapUpdatePipeline_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IMapUpdatePipeline_grpcServer();
    ~IMapUpdatePipeline_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IMapUpdatePipeline"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIMapUpdatePipelineServiceImpl:  public ::grpcIMapUpdatePipeline::grpcIMapUpdatePipelineService::Service
    {
      public:
        grpcIMapUpdatePipelineServiceImpl() = default;
        ::grpc::Status init(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIMapUpdatePipeline::initResponse* response) override;
        ::grpc::Status start(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIMapUpdatePipeline::startResponse* response) override;
        ::grpc::Status stop(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIMapUpdatePipeline::stopResponse* response) override;
        ::grpc::Status setCameraParameters(::grpc::ServerContext* context, const ::grpcIMapUpdatePipeline::setCameraParametersRequest* request, ::grpcIMapUpdatePipeline::setCameraParametersResponse* response) override;
        ::grpc::Status mapUpdateRequest(::grpc::ServerContext* context, const ::grpcIMapUpdatePipeline::mapUpdateRequestRequest* request, ::grpcIMapUpdatePipeline::mapUpdateRequestResponse* response) override;
        ::grpc::Status getMapRequest(::grpc::ServerContext* context, const ::grpcIMapUpdatePipeline::getMapRequestRequest* request, ::grpcIMapUpdatePipeline::getMapRequestResponse* response) override;

        SRef<SolAR::api::pipeline::IMapUpdatePipeline> m_xpcfComponent;

    };


  private:
    grpcIMapUpdatePipelineServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIMapUpdatePipeline::IMapUpdatePipeline_grpcServer>
{
  static constexpr const char * UUID = "82f9fdff-06ee-471f-a260-b7f4ac414627";
  static constexpr const char * NAME = "IMapUpdatePipeline_grpcServer";
  static constexpr const char * DESCRIPTION = "IMapUpdatePipeline_grpcServer grpc server component";
};

#endif