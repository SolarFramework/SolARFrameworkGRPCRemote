// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IPCFILTER_GRPCSERVER_H
#define IPCFILTER_GRPCSERVER_H
#include "api/pointCloud/IPCFilter.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIPCFilterService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIPCFilter {

class IPCFilter_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IPCFilter_grpcServer();
    ~IPCFilter_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IPCFilter"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIPCFilterServiceImpl:  public ::grpcIPCFilter::grpcIPCFilterService::Service
    {
      public:
        grpcIPCFilterServiceImpl() = default;
        ::grpc::Status filter(::grpc::ServerContext* context, const ::grpcIPCFilter::filterRequest* request, ::grpcIPCFilter::filterResponse* response) override;

        SRef<SolAR::api::pointCloud::IPCFilter> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIPCFilterServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIPCFilter::IPCFilter_grpcServer>
{
  static constexpr const char * UUID = "44842913-0e76-44bc-84ae-c8a0850ac97e";
  static constexpr const char * NAME = "IPCFilter_grpcServer";
  static constexpr const char * DESCRIPTION = "IPCFilter_grpcServer grpc server component";
};

#endif