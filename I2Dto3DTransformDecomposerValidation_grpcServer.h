// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef I2DTO3DTRANSFORMDECOMPOSERVALIDATION_GRPCSERVER_H
#define I2DTO3DTRANSFORMDECOMPOSERVALIDATION_GRPCSERVER_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/solver/pose/I2Dto3DTransformDecomposerValidation.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcI2Dto3DTransformDecomposerValidationService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverI2Dto3DTransformDecomposerValidation {

class I2Dto3DTransformDecomposerValidation_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    I2Dto3DTransformDecomposerValidation_grpcServer();
    ~I2Dto3DTransformDecomposerValidation_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "I2Dto3DTransformDecomposerValidation"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcI2Dto3DTransformDecomposerValidationServiceImpl:  public ::grpcI2Dto3DTransformDecomposerValidation::grpcI2Dto3DTransformDecomposerValidationService::Service
    {
      public:
        grpcI2Dto3DTransformDecomposerValidationServiceImpl() = default;
        ::grpc::Status testMethod(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::google::protobuf::Empty* response) override;

        SRef<SolAR::api::solver::pose::I2Dto3DTransformDecomposerValidation> m_xpcfComponent;

    };


  private:
    grpcI2Dto3DTransformDecomposerValidationServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverI2Dto3DTransformDecomposerValidation::I2Dto3DTransformDecomposerValidation_grpcServer>
{
  static constexpr const char * UUID = "3c56196c-1cc1-4b75-8854-d717a93a259e";
  static constexpr const char * NAME = "I2Dto3DTransformDecomposerValidation_grpcServer";
  static constexpr const char * DESCRIPTION = "I2Dto3DTransformDecomposerValidation_grpcServer grpc server component";
};

#endif