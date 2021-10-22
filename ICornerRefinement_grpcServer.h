// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef ICORNERREFINEMENT_GRPCSERVER_H
#define ICORNERREFINEMENT_GRPCSERVER_H
#include "api/features/ICornerRefinement.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcICornerRefinementService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverICornerRefinement {

class ICornerRefinement_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    ICornerRefinement_grpcServer();
    ~ICornerRefinement_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "ICornerRefinement"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcICornerRefinementServiceImpl:  public ::grpcICornerRefinement::grpcICornerRefinementService::Service
    {
      public:
        grpcICornerRefinementServiceImpl() = default;
        ::grpc::Status refine(::grpc::ServerContext* context, const ::grpcICornerRefinement::refineRequest* request, ::grpcICornerRefinement::refineResponse* response) override;

        SRef<SolAR::api::features::ICornerRefinement> m_xpcfComponent;

    };


  private:
    grpcICornerRefinementServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverICornerRefinement::ICornerRefinement_grpcServer>
{
  static constexpr const char * UUID = "c730d426-c7ee-41ec-acae-31bc0a98329c";
  static constexpr const char * NAME = "ICornerRefinement_grpcServer";
  static constexpr const char * DESCRIPTION = "ICornerRefinement_grpcServer grpc server component";
};

#endif