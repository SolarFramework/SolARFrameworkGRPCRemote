// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef ISTRUCTUREFROMMOTION_GRPCSERVER_H
#define ISTRUCTUREFROMMOTION_GRPCSERVER_H
#include "/mnt/c/Users/nduong/bcom/projects/Argo/SolARFramework/SolAR/core/SolARFramework/interfaces/api/sfm/IStructureFromMotion.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIStructureFromMotionService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIStructureFromMotion {

class IStructureFromMotion_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IStructureFromMotion_grpcServer();
    ~IStructureFromMotion_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IStructureFromMotion"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIStructureFromMotionServiceImpl:  public ::grpcIStructureFromMotion::grpcIStructureFromMotionService::Service
    {
      public:
        grpcIStructureFromMotionServiceImpl() = default;
        ::grpc::Status createMap(::grpc::ServerContext* context, const ::grpcIStructureFromMotion::createMapRequest* request, ::grpcIStructureFromMotion::createMapResponse* response) override;

        SRef<SolAR::api::sfm::IStructureFromMotion> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIStructureFromMotionServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIStructureFromMotion::IStructureFromMotion_grpcServer>
{
  static constexpr const char * UUID = "4ff58389-21ef-4fab-b037-5937dd409c82";
  static constexpr const char * NAME = "IStructureFromMotion_grpcServer";
  static constexpr const char * DESCRIPTION = "IStructureFromMotion_grpcServer grpc server component";
};

#endif