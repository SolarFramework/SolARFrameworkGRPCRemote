// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef I2DTO3DTRANSFORMDECOMPOSERVALIDATION_GRPCSERVER_H
#define I2DTO3DTRANSFORMDECOMPOSERVALIDATION_GRPCSERVER_H
#include "Dev/SolAR/SolARFramework/interfaces/api/solver/pose/I2Dto3DTransformDecomposerValidation.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
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
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcI2Dto3DTransformDecomposerValidationServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverI2Dto3DTransformDecomposerValidation::I2Dto3DTransformDecomposerValidation_grpcServer>
{
  static constexpr const char * UUID = "447acd52-ad9f-4338-aff1-f61084bd0621";
  static constexpr const char * NAME = "I2Dto3DTransformDecomposerValidation_grpcServer";
  static constexpr const char * DESCRIPTION = "I2Dto3DTransformDecomposerValidation_grpcServer grpc server component";
};

#endif