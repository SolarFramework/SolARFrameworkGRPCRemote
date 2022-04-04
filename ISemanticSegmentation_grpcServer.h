// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef ISEMANTICSEGMENTATION_GRPCSERVER_H
#define ISEMANTICSEGMENTATION_GRPCSERVER_H
#include "/mnt/c/Users/nduong/bcom/projects/Argo/SolARFramework/SolAR/core/SolARFramework/interfaces/api/segm/ISemanticSegmentation.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcISemanticSegmentationService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverISemanticSegmentation {

class ISemanticSegmentation_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    ISemanticSegmentation_grpcServer();
    ~ISemanticSegmentation_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "ISemanticSegmentation"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcISemanticSegmentationServiceImpl:  public ::grpcISemanticSegmentation::grpcISemanticSegmentationService::Service
    {
      public:
        grpcISemanticSegmentationServiceImpl() = default;
        ::grpc::Status segment(::grpc::ServerContext* context, const ::grpcISemanticSegmentation::segmentRequest* request, ::grpcISemanticSegmentation::segmentResponse* response) override;

        SRef<SolAR::api::segm::ISemanticSegmentation> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcISemanticSegmentationServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverISemanticSegmentation::ISemanticSegmentation_grpcServer>
{
  static constexpr const char * UUID = "97417d56-f5ae-4a4a-b72f-aab1185f49a0";
  static constexpr const char * NAME = "ISemanticSegmentation_grpcServer";
  static constexpr const char * DESCRIPTION = "ISemanticSegmentation_grpcServer grpc server component";
};

#endif