// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IPCFILTERCENTROID_GRPCSERVER_H
#define IPCFILTERCENTROID_GRPCSERVER_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/pointCloud/IPCFilterCentroid.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcIPCFilterCentroidService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIPCFilterCentroid {

class IPCFilterCentroid_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IPCFilterCentroid_grpcServer();
    ~IPCFilterCentroid_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IPCFilterCentroid"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIPCFilterCentroidServiceImpl:  public ::grpcIPCFilterCentroid::grpcIPCFilterCentroidService::Service
    {
      public:
        grpcIPCFilterCentroidServiceImpl() = default;
        ::grpc::Status filter(::grpc::ServerContext* context, const ::grpcIPCFilterCentroid::filterRequest* request, ::grpcIPCFilterCentroid::filterResponse* response) override;

        SRef<SolAR::api::pointCloud::IPCFilterCentroid> m_xpcfComponent;

    };


  private:
    grpcIPCFilterCentroidServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIPCFilterCentroid::IPCFilterCentroid_grpcServer>
{
  static constexpr const char * UUID = "eec73ef9-a6f5-4462-8714-01b07e1f94a9";
  static constexpr const char * NAME = "IPCFilterCentroid_grpcServer";
  static constexpr const char * DESCRIPTION = "IPCFilterCentroid_grpcServer grpc server component";
};

#endif