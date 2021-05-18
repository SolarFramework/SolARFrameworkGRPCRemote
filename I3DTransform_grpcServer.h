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

        SRef<SolAR::api::geom::I3DTransform> m_xpcfComponent;

    };


  private:
    grpcI3DTransformServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverI3DTransform::I3DTransform_grpcServer>
{
  static constexpr const char * UUID = "fa927ed9-8572-4e4f-86ad-d46ec10e7800";
  static constexpr const char * NAME = "I3DTransform_grpcServer";
  static constexpr const char * DESCRIPTION = "I3DTransform_grpcServer grpc server component";
};

#endif