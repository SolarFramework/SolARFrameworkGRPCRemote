// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IPANOPTICSEGMENTATION_GRPCSERVER_H
#define IPANOPTICSEGMENTATION_GRPCSERVER_H
#include "api/segm/IPanopticSegmentation.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIPanopticSegmentationService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIPanopticSegmentation {

class IPanopticSegmentation_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IPanopticSegmentation_grpcServer();
    ~IPanopticSegmentation_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IPanopticSegmentation"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIPanopticSegmentationServiceImpl:  public ::grpcIPanopticSegmentation::grpcIPanopticSegmentationService::Service
    {
      public:
        grpcIPanopticSegmentationServiceImpl() = default;
        ::grpc::Status segment(::grpc::ServerContext* context, const ::grpcIPanopticSegmentation::segmentRequest* request, ::grpcIPanopticSegmentation::segmentResponse* response) override;

        SRef<SolAR::api::segm::IPanopticSegmentation> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIPanopticSegmentationServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIPanopticSegmentation::IPanopticSegmentation_grpcServer>
{
  static constexpr const char * UUID = "5c3e0d59-101c-40f8-8efe-0190c4816d81";
  static constexpr const char * NAME = "IPanopticSegmentation_grpcServer";
  static constexpr const char * DESCRIPTION = "IPanopticSegmentation_grpcServer grpc server component";
};

#endif