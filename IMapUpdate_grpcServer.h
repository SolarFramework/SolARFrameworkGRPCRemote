// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IMAPUPDATE_GRPCSERVER_H
#define IMAPUPDATE_GRPCSERVER_H
#include "/home/solar/Dev/SolAR/core/SolARFramework/interfaces/api/solver/map/IMapUpdate.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcIMapUpdateService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIMapUpdate {

class IMapUpdate_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IMapUpdate_grpcServer();
    ~IMapUpdate_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IMapUpdate"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIMapUpdateServiceImpl:  public ::grpcIMapUpdate::grpcIMapUpdateService::Service
    {
      public:
        grpcIMapUpdateServiceImpl() = default;
        ::grpc::Status setCameraParameters(::grpc::ServerContext* context, const ::grpcIMapUpdate::setCameraParametersRequest* request, ::google::protobuf::Empty* response) override;
        ::grpc::Status update(::grpc::ServerContext* context, const ::grpcIMapUpdate::updateRequest* request, ::grpcIMapUpdate::updateResponse* response) override;

        SRef<SolAR::api::solver::map::IMapUpdate> m_xpcfComponent;

    };


  private:
    grpcIMapUpdateServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIMapUpdate::IMapUpdate_grpcServer>
{
  static constexpr const char * UUID = "e57cf2fa-d925-4986-830f-010956e90a1f";
  static constexpr const char * NAME = "IMapUpdate_grpcServer";
  static constexpr const char * DESCRIPTION = "IMapUpdate_grpcServer grpc server component";
};

#endif