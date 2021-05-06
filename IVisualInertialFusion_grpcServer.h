// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IVISUALINERTIALFUSION_GRPCSERVER_H
#define IVISUALINERTIALFUSION_GRPCSERVER_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/fusion/IVisualInertialFusion.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcIVisualInertialFusionService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIVisualInertialFusion {

class IVisualInertialFusion_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IVisualInertialFusion_grpcServer();
    ~IVisualInertialFusion_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IVisualInertialFusion"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIVisualInertialFusionServiceImpl:  public ::grpcIVisualInertialFusion::grpcIVisualInertialFusionService::Service
    {
      public:
        grpcIVisualInertialFusionServiceImpl() = default;
        ::grpc::Status init(::grpc::ServerContext* context, const ::grpcIVisualInertialFusion::initRequest* request, ::google::protobuf::Empty* response) override;
        ::grpc::Status addInertialData(::grpc::ServerContext* context, const ::grpcIVisualInertialFusion::addInertialDataRequest* request, ::google::protobuf::Empty* response) override;
        ::grpc::Status addVisionData(::grpc::ServerContext* context, const ::grpcIVisualInertialFusion::addVisionDataRequest* request, ::google::protobuf::Empty* response) override;
        ::grpc::Status process(::grpc::ServerContext* context, const ::grpcIVisualInertialFusion::processRequest* request, ::grpcIVisualInertialFusion::processResponse* response) override;

        SRef<SolAR::api::fusion::IVisualInertialFusion> m_xpcfComponent;

    };


  private:
    grpcIVisualInertialFusionServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIVisualInertialFusion::IVisualInertialFusion_grpcServer>
{
  static constexpr const char * UUID = "5d283fb5-a54d-4376-ba74-36d3026f40ab";
  static constexpr const char * NAME = "IVisualInertialFusion_grpcServer";
  static constexpr const char * DESCRIPTION = "IVisualInertialFusion_grpcServer grpc server component";
};

#endif