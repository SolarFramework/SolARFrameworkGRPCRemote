// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IBUNDLER_GRPCSERVER_H
#define IBUNDLER_GRPCSERVER_H
#include "api/solver/map/IBundler.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcIBundlerService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIBundler {

class IBundler_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IBundler_grpcServer();
    ~IBundler_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IBundler"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIBundlerServiceImpl:  public ::grpcIBundler::grpcIBundlerService::Service
    {
      public:
        grpcIBundlerServiceImpl() = default;
        ::grpc::Status setMap(::grpc::ServerContext* context, const ::grpcIBundler::setMapRequest* request, ::grpcIBundler::setMapResponse* response) override;
        ::grpc::Status bundleAdjustment(::grpc::ServerContext* context, const ::grpcIBundler::bundleAdjustmentRequest* request, ::grpcIBundler::bundleAdjustmentResponse* response) override;
        ::grpc::Status optimizeSim3(::grpc::ServerContext* context, const ::grpcIBundler::optimizeSim3Request* request, ::grpcIBundler::optimizeSim3Response* response) override;

        SRef<SolAR::api::solver::map::IBundler> m_xpcfComponent;

    };


  private:
    grpcIBundlerServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIBundler::IBundler_grpcServer>
{
  static constexpr const char * UUID = "96d272a9-fbc8-4a77-83ad-63edd60a8065";
  static constexpr const char * NAME = "IBundler_grpcServer";
  static constexpr const char * DESCRIPTION = "IBundler_grpcServer grpc server component";
};

#endif