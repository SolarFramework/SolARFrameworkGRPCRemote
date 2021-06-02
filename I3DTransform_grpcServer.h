// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef I3DTRANSFORM_GRPCSERVER_H
#define I3DTRANSFORM_GRPCSERVER_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/geom/I3DTransform.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcI3DTransformService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverI3DTransform {

class I3DTransform_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    I3DTransform_grpcServer();
    ~I3DTransform_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "I3DTransform"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcI3DTransformServiceImpl:  public ::grpcI3DTransform::grpcI3DTransformService::Service
    {
      public:
        grpcI3DTransformServiceImpl() = default;
        ::grpc::Status transform(::grpc::ServerContext* context, const ::grpcI3DTransform::transformRequest* request, ::grpcI3DTransform::transformResponse* response) override;
        ::grpc::Status transformInPlace_grpc0(::grpc::ServerContext* context, const ::grpcI3DTransform::transformInPlace_grpc0Request* request, ::grpcI3DTransform::transformInPlace_grpc0Response* response) override;
        ::grpc::Status transformInPlace_grpc1(::grpc::ServerContext* context, const ::grpcI3DTransform::transformInPlace_grpc1Request* request, ::grpcI3DTransform::transformInPlace_grpc1Response* response) override;
        ::grpc::Status transformInPlace_grpc2(::grpc::ServerContext* context, const ::grpcI3DTransform::transformInPlace_grpc2Request* request, ::grpcI3DTransform::transformInPlace_grpc2Response* response) override;
        ::grpc::Status transformInPlace_grpc3(::grpc::ServerContext* context, const ::grpcI3DTransform::transformInPlace_grpc3Request* request, ::grpcI3DTransform::transformInPlace_grpc3Response* response) override;
        ::grpc::Status transformInPlace_grpc4(::grpc::ServerContext* context, const ::grpcI3DTransform::transformInPlace_grpc4Request* request, ::grpcI3DTransform::transformInPlace_grpc4Response* response) override;

        SRef<SolAR::api::geom::I3DTransform> m_xpcfComponent;

    };


  private:
    grpcI3DTransformServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverI3DTransform::I3DTransform_grpcServer>
{
  static constexpr const char * UUID = "74a8a24b-74b0-446f-af75-ee046d8637b2";
  static constexpr const char * NAME = "I3DTransform_grpcServer";
  static constexpr const char * DESCRIPTION = "I3DTransform_grpcServer grpc server component";
};

#endif