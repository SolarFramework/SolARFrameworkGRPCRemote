// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef I2DTO3DTRANSFORMDECOMPOSER_GRPCSERVER_H
#define I2DTO3DTRANSFORMDECOMPOSER_GRPCSERVER_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/solver/pose/I2Dto3DTransformDecomposer.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcI2Dto3DTransformDecomposerService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverI2Dto3DTransformDecomposer {

class I2Dto3DTransformDecomposer_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    I2Dto3DTransformDecomposer_grpcServer();
    ~I2Dto3DTransformDecomposer_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "I2Dto3DTransformDecomposer"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcI2Dto3DTransformDecomposerServiceImpl:  public ::grpcI2Dto3DTransformDecomposer::grpcI2Dto3DTransformDecomposerService::Service
    {
      public:
        grpcI2Dto3DTransformDecomposerServiceImpl() = default;
        ::grpc::Status setCameraParameters(::grpc::ServerContext* context, const ::grpcI2Dto3DTransformDecomposer::setCameraParametersRequest* request, ::google::protobuf::Empty* response) override;
        ::grpc::Status decompose(::grpc::ServerContext* context, const ::grpcI2Dto3DTransformDecomposer::decomposeRequest* request, ::grpcI2Dto3DTransformDecomposer::decomposeResponse* response) override;

        SRef<SolAR::api::solver::pose::I2Dto3DTransformDecomposer> m_xpcfComponent;

    };


  private:
    grpcI2Dto3DTransformDecomposerServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverI2Dto3DTransformDecomposer::I2Dto3DTransformDecomposer_grpcServer>
{
  static constexpr const char * UUID = "1dec2405-fb90-4c53-814f-aea416f27232";
  static constexpr const char * NAME = "I2Dto3DTransformDecomposer_grpcServer";
  static constexpr const char * DESCRIPTION = "I2Dto3DTransformDecomposer_grpcServer grpc server component";
};

#endif