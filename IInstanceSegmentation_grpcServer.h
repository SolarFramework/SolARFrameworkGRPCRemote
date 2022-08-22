// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IINSTANCESEGMENTATION_GRPCSERVER_H
#define IINSTANCESEGMENTATION_GRPCSERVER_H
#include "api/segm/IInstanceSegmentation.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIInstanceSegmentationService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIInstanceSegmentation {

class IInstanceSegmentation_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IInstanceSegmentation_grpcServer();
    ~IInstanceSegmentation_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IInstanceSegmentation"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIInstanceSegmentationServiceImpl:  public ::grpcIInstanceSegmentation::grpcIInstanceSegmentationService::Service
    {
      public:
        grpcIInstanceSegmentationServiceImpl() = default;
        ::grpc::Status segment(::grpc::ServerContext* context, const ::grpcIInstanceSegmentation::segmentRequest* request, ::grpcIInstanceSegmentation::segmentResponse* response) override;

        SRef<SolAR::api::segm::IInstanceSegmentation> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIInstanceSegmentationServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIInstanceSegmentation::IInstanceSegmentation_grpcServer>
{
  static constexpr const char * UUID = "e85b2140-3cdd-422c-9ca9-b98c99237abd";
  static constexpr const char * NAME = "IInstanceSegmentation_grpcServer";
  static constexpr const char * DESCRIPTION = "IInstanceSegmentation_grpcServer grpc server component";
};

#endif