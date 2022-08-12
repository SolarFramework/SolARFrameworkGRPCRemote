// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IMULTIVIEWSTEREO_GRPCSERVER_H
#define IMULTIVIEWSTEREO_GRPCSERVER_H
#include "/mnt/c/Users/nduong/bcom/projects/Argo/SolARFramework/SolAR/core/SolARFramework/interfaces/api/sfm/IMultiViewStereo.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIMultiViewStereoService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIMultiViewStereo {

class IMultiViewStereo_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IMultiViewStereo_grpcServer();
    ~IMultiViewStereo_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IMultiViewStereo"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIMultiViewStereoServiceImpl:  public ::grpcIMultiViewStereo::grpcIMultiViewStereoService::Service
    {
      public:
        grpcIMultiViewStereoServiceImpl() = default;
        ::grpc::Status createDenseMap(::grpc::ServerContext* context, const ::grpcIMultiViewStereo::createDenseMapRequest* request, ::grpcIMultiViewStereo::createDenseMapResponse* response) override;

        SRef<SolAR::api::sfm::IMultiViewStereo> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIMultiViewStereoServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIMultiViewStereo::IMultiViewStereo_grpcServer>
{
  static constexpr const char * UUID = "eb53e85f-9f72-48a3-aff7-3daf90ce3476";
  static constexpr const char * NAME = "IMultiViewStereo_grpcServer";
  static constexpr const char * DESCRIPTION = "IMultiViewStereo_grpcServer grpc server component";
};

#endif