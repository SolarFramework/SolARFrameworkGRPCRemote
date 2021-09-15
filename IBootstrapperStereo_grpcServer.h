// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IBOOTSTRAPPERSTEREO_GRPCSERVER_H
#define IBOOTSTRAPPERSTEREO_GRPCSERVER_H
#include "/home/solar/Dev/SolAR/core/SolARFramework/interfaces/api/slam/IBootstrapperStereo.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcIBootstrapperStereoService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIBootstrapperStereo {

class IBootstrapperStereo_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IBootstrapperStereo_grpcServer();
    ~IBootstrapperStereo_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IBootstrapperStereo"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIBootstrapperStereoServiceImpl:  public ::grpcIBootstrapperStereo::grpcIBootstrapperStereoService::Service
    {
      public:
        grpcIBootstrapperStereoServiceImpl() = default;
        ::grpc::Status setCameraParameters(::grpc::ServerContext* context, const ::grpcIBootstrapperStereo::setCameraParametersRequest* request, ::google::protobuf::Empty* response) override;
        ::grpc::Status process(::grpc::ServerContext* context, const ::grpcIBootstrapperStereo::processRequest* request, ::grpcIBootstrapperStereo::processResponse* response) override;

        SRef<SolAR::api::slam::IBootstrapperStereo> m_xpcfComponent;

    };


  private:
    grpcIBootstrapperStereoServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIBootstrapperStereo::IBootstrapperStereo_grpcServer>
{
  static constexpr const char * UUID = "9f165acd-3c82-4fa5-82fa-84e1045a6bb7";
  static constexpr const char * NAME = "IBootstrapperStereo_grpcServer";
  static constexpr const char * DESCRIPTION = "IBootstrapperStereo_grpcServer grpc server component";
};

#endif