// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef ILOOPCORRECTOR_GRPCSERVER_H
#define ILOOPCORRECTOR_GRPCSERVER_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/loop/ILoopCorrector.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcILoopCorrectorService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverILoopCorrector {

class ILoopCorrector_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    ILoopCorrector_grpcServer();
    ~ILoopCorrector_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "ILoopCorrector"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcILoopCorrectorServiceImpl:  public ::grpcILoopCorrector::grpcILoopCorrectorService::Service
    {
      public:
        grpcILoopCorrectorServiceImpl() = default;
        ::grpc::Status setCameraParameters(::grpc::ServerContext* context, const ::grpcILoopCorrector::setCameraParametersRequest* request, ::google::protobuf::Empty* response) override;
        ::grpc::Status correct(::grpc::ServerContext* context, const ::grpcILoopCorrector::correctRequest* request, ::grpcILoopCorrector::correctResponse* response) override;

        SRef<SolAR::api::loop::ILoopCorrector> m_xpcfComponent;

    };


  private:
    grpcILoopCorrectorServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverILoopCorrector::ILoopCorrector_grpcServer>
{
  static constexpr const char * UUID = "d638aad5-4f92-4363-b642-052143e830d5";
  static constexpr const char * NAME = "ILoopCorrector_grpcServer";
  static constexpr const char * DESCRIPTION = "ILoopCorrector_grpcServer grpc server component";
};

#endif