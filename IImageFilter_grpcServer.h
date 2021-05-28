// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IIMAGEFILTER_GRPCSERVER_H
#define IIMAGEFILTER_GRPCSERVER_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/image/IImageFilter.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcIImageFilterService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIImageFilter {

class IImageFilter_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IImageFilter_grpcServer();
    ~IImageFilter_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IImageFilter"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIImageFilterServiceImpl:  public ::grpcIImageFilter::grpcIImageFilterService::Service
    {
      public:
        grpcIImageFilterServiceImpl() = default;
        ::grpc::Status filter(::grpc::ServerContext* context, const ::grpcIImageFilter::filterRequest* request, ::grpcIImageFilter::filterResponse* response) override;

        SRef<SolAR::api::image::IImageFilter> m_xpcfComponent;

    };


  private:
    grpcIImageFilterServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIImageFilter::IImageFilter_grpcServer>
{
  static constexpr const char * UUID = "74a0912f-bc18-4772-84ec-b0ee3f962a53";
  static constexpr const char * NAME = "IImageFilter_grpcServer";
  static constexpr const char * DESCRIPTION = "IImageFilter_grpcServer grpc server component";
};

#endif