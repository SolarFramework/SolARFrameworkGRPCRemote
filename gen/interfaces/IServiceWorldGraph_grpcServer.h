// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef ISERVICEWORLDGRAPH_GRPCSERVER_H
#define ISERVICEWORLDGRAPH_GRPCSERVER_H
#include "api/service/IServiceWorldGraph.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include <xpcf/remoting/GrpcHelper.h>
#include "grpcIServiceWorldGraphService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIServiceWorldGraph {

class IServiceWorldGraph_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IServiceWorldGraph_grpcServer();
    ~IServiceWorldGraph_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IServiceWorldGraph"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIServiceWorldGraphServiceImpl:  public ::grpcIServiceWorldGraph::grpcIServiceWorldGraphService::Service
    {
      public:
        grpcIServiceWorldGraphServiceImpl() = default;
        ::grpc::Status init(::grpc::ServerContext* context, const ::grpcIServiceWorldGraph::initRequest* request, ::grpcIServiceWorldGraph::initResponse* response) override;
        ::grpc::Status start(::grpc::ServerContext* context, const ::grpcIServiceWorldGraph::startRequest* request, ::grpcIServiceWorldGraph::startResponse* response) override;
        ::grpc::Status stop(::grpc::ServerContext* context, const ::grpcIServiceWorldGraph::stopRequest* request, ::grpcIServiceWorldGraph::stopResponse* response) override;

        SRef<SolAR::api::service::IServiceWorldGraph> m_xpcfComponent;
        xpcf::grpcServerCompressionInfos m_serviceCompressionInfos;
        std::map<std::string, xpcf::grpcServerCompressionInfos> m_methodCompressionInfosMap;

    };


  private:
    grpcIServiceWorldGraphServiceImpl m_grpcService;
    std::vector<std::string> m_grpcServerCompressionConfig;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIServiceWorldGraph::IServiceWorldGraph_grpcServer>
{
  static constexpr const char * UUID = "af057b41-75fa-4db3-a502-55b6ffba0962";
  static constexpr const char * NAME = "IServiceWorldGraph_grpcServer";
  static constexpr const char * DESCRIPTION = "IServiceWorldGraph_grpcServer grpc server component";
};

#endif