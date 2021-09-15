// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef I2DTRANSFORM_GRPCSERVER_H
#define I2DTRANSFORM_GRPCSERVER_H
#include "/home/solar/Dev/SolAR/core/SolARFramework/interfaces/api/geom/I2DTransform.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcI2DTransformService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverI2DTransform {

class I2DTransform_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    I2DTransform_grpcServer();
    ~I2DTransform_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "I2DTransform"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcI2DTransformServiceImpl:  public ::grpcI2DTransform::grpcI2DTransformService::Service
    {
      public:
        grpcI2DTransformServiceImpl() = default;
        ::grpc::Status transform(::grpc::ServerContext* context, const ::grpcI2DTransform::transformRequest* request, ::grpcI2DTransform::transformResponse* response) override;

        SRef<SolAR::api::geom::I2DTransform> m_xpcfComponent;

    };


  private:
    grpcI2DTransformServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverI2DTransform::I2DTransform_grpcServer>
{
  static constexpr const char * UUID = "e0d3b970-001f-4d5c-89b9-1dd1969cb152";
  static constexpr const char * NAME = "I2DTransform_grpcServer";
  static constexpr const char * DESCRIPTION = "I2DTransform_grpcServer grpc server component";
};

#endif