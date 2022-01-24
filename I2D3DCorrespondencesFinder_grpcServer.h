// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef I2D3DCORRESPONDENCESFINDER_GRPCSERVER_H
#define I2D3DCORRESPONDENCESFINDER_GRPCSERVER_H
#include "api/solver/pose/I2D3DCorrespondencesFinder.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcI2D3DCorrespondencesFinderService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverI2D3DCorrespondencesFinder {

class I2D3DCorrespondencesFinder_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    I2D3DCorrespondencesFinder_grpcServer();
    ~I2D3DCorrespondencesFinder_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "I2D3DCorrespondencesFinder"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcI2D3DCorrespondencesFinderServiceImpl:  public ::grpcI2D3DCorrespondencesFinder::grpcI2D3DCorrespondencesFinderService::Service
    {
      public:
        grpcI2D3DCorrespondencesFinderServiceImpl() = default;
        ::grpc::Status find(::grpc::ServerContext* context, const ::grpcI2D3DCorrespondencesFinder::findRequest* request, ::grpcI2D3DCorrespondencesFinder::findResponse* response) override;

        SRef<SolAR::api::solver::pose::I2D3DCorrespondencesFinder> m_xpcfComponent;

    };


  private:
    grpcI2D3DCorrespondencesFinderServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverI2D3DCorrespondencesFinder::I2D3DCorrespondencesFinder_grpcServer>
{
  static constexpr const char * UUID = "c459012f-0923-400c-9340-b91b1525a7bb";
  static constexpr const char * NAME = "I2D3DCorrespondencesFinder_grpcServer";
  static constexpr const char * DESCRIPTION = "I2D3DCorrespondencesFinder_grpcServer grpc server component";
};

#endif