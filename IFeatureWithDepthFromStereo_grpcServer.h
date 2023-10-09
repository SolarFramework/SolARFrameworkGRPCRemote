// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IFEATUREWITHDEPTHFROMSTEREO_GRPCSERVER_H
#define IFEATUREWITHDEPTHFROMSTEREO_GRPCSERVER_H
#include "Dev/SolAR/SolARFramework/interfaces/api/features/IFeatureWithDepthFromStereo.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIFeatureWithDepthFromStereoService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIFeatureWithDepthFromStereo {

class IFeatureWithDepthFromStereo_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IFeatureWithDepthFromStereo_grpcServer();
    ~IFeatureWithDepthFromStereo_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IFeatureWithDepthFromStereo"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIFeatureWithDepthFromStereoServiceImpl:  public ::grpcIFeatureWithDepthFromStereo::grpcIFeatureWithDepthFromStereoService::Service
    {
      public:
        grpcIFeatureWithDepthFromStereoServiceImpl() = default;
        ::grpc::Status setRectificationParameters(::grpc::ServerContext* context, const ::grpcIFeatureWithDepthFromStereo::setRectificationParametersRequest* request, ::google::protobuf::Empty* response) override;
        ::grpc::Status compute(::grpc::ServerContext* context, const ::grpcIFeatureWithDepthFromStereo::computeRequest* request, ::grpcIFeatureWithDepthFromStereo::computeResponse* response) override;

        SRef<SolAR::api::features::IFeatureWithDepthFromStereo> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIFeatureWithDepthFromStereoServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIFeatureWithDepthFromStereo::IFeatureWithDepthFromStereo_grpcServer>
{
  static constexpr const char * UUID = "a5a81922-7bac-44b1-a561-9c7b83a07589";
  static constexpr const char * NAME = "IFeatureWithDepthFromStereo_grpcServer";
  static constexpr const char * DESCRIPTION = "IFeatureWithDepthFromStereo_grpcServer grpc server component";
};

#endif