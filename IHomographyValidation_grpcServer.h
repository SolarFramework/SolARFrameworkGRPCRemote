// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IHOMOGRAPHYVALIDATION_GRPCSERVER_H
#define IHOMOGRAPHYVALIDATION_GRPCSERVER_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/solver/pose/IHomographyValidation.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcIHomographyValidationService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIHomographyValidation {

class IHomographyValidation_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IHomographyValidation_grpcServer();
    ~IHomographyValidation_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IHomographyValidation"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIHomographyValidationServiceImpl:  public ::grpcIHomographyValidation::grpcIHomographyValidationService::Service
    {
      public:
        grpcIHomographyValidationServiceImpl() = default;
        ::grpc::Status isValid(::grpc::ServerContext* context, const ::grpcIHomographyValidation::isValidRequest* request, ::grpcIHomographyValidation::isValidResponse* response) override;

        SRef<SolAR::api::solver::pose::IHomographyValidation> m_xpcfComponent;

    };


  private:
    grpcIHomographyValidationServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIHomographyValidation::IHomographyValidation_grpcServer>
{
  static constexpr const char * UUID = "1456e9f5-5915-4f38-af5a-88f523cf2560";
  static constexpr const char * NAME = "IHomographyValidation_grpcServer";
  static constexpr const char * DESCRIPTION = "IHomographyValidation_grpcServer grpc server component";
};

#endif