// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IMAPPING_GRPCSERVER_H
#define IMAPPING_GRPCSERVER_H
#include "api/slam/IMapping.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcIMappingService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIMapping {

class IMapping_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IMapping_grpcServer();
    ~IMapping_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IMapping"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIMappingServiceImpl:  public ::grpcIMapping::grpcIMappingService::Service
    {
      public:
        grpcIMappingServiceImpl() = default;
        ::grpc::Status setCameraParameters(::grpc::ServerContext* context, const ::grpcIMapping::setCameraParametersRequest* request, ::google::protobuf::Empty* response) override;
        ::grpc::Status process(::grpc::ServerContext* context, const ::grpcIMapping::processRequest* request, ::grpcIMapping::processResponse* response) override;

        SRef<SolAR::api::slam::IMapping> m_xpcfComponent;

    };


  private:
    grpcIMappingServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIMapping::IMapping_grpcServer>
{
  static constexpr const char * UUID = "352d5136-b5eb-4ee6-bfbd-012cb23e935d";
  static constexpr const char * NAME = "IMapping_grpcServer";
  static constexpr const char * DESCRIPTION = "IMapping_grpcServer grpc server component";
};

#endif