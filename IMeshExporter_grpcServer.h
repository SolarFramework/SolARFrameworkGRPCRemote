// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IMESHEXPORTER_GRPCSERVER_H
#define IMESHEXPORTER_GRPCSERVER_H
#include "api/output/files/IMeshExporter.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIMeshExporterService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIMeshExporter {

class IMeshExporter_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IMeshExporter_grpcServer();
    ~IMeshExporter_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IMeshExporter"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIMeshExporterServiceImpl:  public ::grpcIMeshExporter::grpcIMeshExporterService::Service
    {
      public:
        grpcIMeshExporterServiceImpl() = default;
        ::grpc::Status exportMesh(::grpc::ServerContext* context, const ::grpcIMeshExporter::exportMeshRequest* request, ::grpcIMeshExporter::exportMeshResponse* response) override;

        SRef<SolAR::api::output::files::IMeshExporter> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIMeshExporterServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIMeshExporter::IMeshExporter_grpcServer>
{
  static constexpr const char * UUID = "14cbf040-462d-11ed-b878-0242ac120002";
  static constexpr const char * NAME = "IMeshExporter_grpcServer";
  static constexpr const char * DESCRIPTION = "IMeshExporter_grpcServer grpc server component";
};

#endif