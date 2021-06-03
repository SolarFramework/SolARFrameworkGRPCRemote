// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IBOOTSTRAPPER_GRPCSERVER_H
#define IBOOTSTRAPPER_GRPCSERVER_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/slam/IBootstrapper.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcIBootstrapperService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIBootstrapper {

class IBootstrapper_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IBootstrapper_grpcServer();
    ~IBootstrapper_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IBootstrapper"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIBootstrapperServiceImpl:  public ::grpcIBootstrapper::grpcIBootstrapperService::Service
    {
      public:
        grpcIBootstrapperServiceImpl() = default;
        ::grpc::Status setCameraParameters(::grpc::ServerContext* context, const ::grpcIBootstrapper::setCameraParametersRequest* request, ::google::protobuf::Empty* response) override;
        ::grpc::Status process(::grpc::ServerContext* context, const ::grpcIBootstrapper::processRequest* request, ::grpcIBootstrapper::processResponse* response) override;

        SRef<SolAR::api::slam::IBootstrapper> m_xpcfComponent;

    };


  private:
    grpcIBootstrapperServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIBootstrapper::IBootstrapper_grpcServer>
{
  static constexpr const char * UUID = "87ead526-d8c0-4a19-afbe-cc19e874c104";
  static constexpr const char * NAME = "IBootstrapper_grpcServer";
  static constexpr const char * DESCRIPTION = "IBootstrapper_grpcServer grpc server component";
};

#endif