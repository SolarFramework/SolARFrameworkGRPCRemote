// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IPOINTCLOUDEXPORTER_GRPCSERVER_H
#define IPOINTCLOUDEXPORTER_GRPCSERVER_H
#include "api/output/files/IPointCloudExporter.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIPointCloudExporterService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIPointCloudExporter {

class IPointCloudExporter_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IPointCloudExporter_grpcServer();
    ~IPointCloudExporter_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IPointCloudExporter"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIPointCloudExporterServiceImpl:  public ::grpcIPointCloudExporter::grpcIPointCloudExporterService::Service
    {
      public:
        grpcIPointCloudExporterServiceImpl() = default;
        ::grpc::Status exportPointCloud(::grpc::ServerContext* context, const ::grpcIPointCloudExporter::exportPointCloudRequest* request, ::grpcIPointCloudExporter::exportPointCloudResponse* response) override;

        SRef<SolAR::api::output::files::IPointCloudExporter> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIPointCloudExporterServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIPointCloudExporter::IPointCloudExporter_grpcServer>
{
  static constexpr const char * UUID = "858c7124-238c-11ed-861d-0242ac120002";
  static constexpr const char * NAME = "IPointCloudExporter_grpcServer";
  static constexpr const char * DESCRIPTION = "IPointCloudExporter_grpcServer grpc server component";
};

#endif