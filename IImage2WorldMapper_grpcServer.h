// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IIMAGE2WORLDMAPPER_GRPCSERVER_H
#define IIMAGE2WORLDMAPPER_GRPCSERVER_H
#include "/home/solar/Dev/SolAR/core/SolARFramework/interfaces/api/geom/IImage2WorldMapper.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcIImage2WorldMapperService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIImage2WorldMapper {

class IImage2WorldMapper_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IImage2WorldMapper_grpcServer();
    ~IImage2WorldMapper_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IImage2WorldMapper"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIImage2WorldMapperServiceImpl:  public ::grpcIImage2WorldMapper::grpcIImage2WorldMapperService::Service
    {
      public:
        grpcIImage2WorldMapperServiceImpl() = default;
        ::grpc::Status map(::grpc::ServerContext* context, const ::grpcIImage2WorldMapper::mapRequest* request, ::grpcIImage2WorldMapper::mapResponse* response) override;

        SRef<SolAR::api::geom::IImage2WorldMapper> m_xpcfComponent;

    };


  private:
    grpcIImage2WorldMapperServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIImage2WorldMapper::IImage2WorldMapper_grpcServer>
{
  static constexpr const char * UUID = "2dcd37ad-0c08-4793-b249-b0dd56b5bf12";
  static constexpr const char * NAME = "IImage2WorldMapper_grpcServer";
  static constexpr const char * DESCRIPTION = "IImage2WorldMapper_grpcServer grpc server component";
};

#endif