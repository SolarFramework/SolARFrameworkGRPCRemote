// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IBOOTSTRAPPER_GRPCSERVER_H
#define IBOOTSTRAPPER_GRPCSERVER_H
#include "/mnt/c/Users/nduong/bcom/projects/Argo/SolARFramework/SolAR/core/SolARFramework/interfaces/api/slam/IBootstrapper.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
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
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIBootstrapperServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIBootstrapper::IBootstrapper_grpcServer>
{
  static constexpr const char * UUID = "a7509f5c-f214-408d-be3a-acb38dd8512b";
  static constexpr const char * NAME = "IBootstrapper_grpcServer";
  static constexpr const char * DESCRIPTION = "IBootstrapper_grpcServer grpc server component";
};

#endif