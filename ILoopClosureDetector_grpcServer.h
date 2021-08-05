// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef ILOOPCLOSUREDETECTOR_GRPCSERVER_H
#define ILOOPCLOSUREDETECTOR_GRPCSERVER_H
#include "/home/ccutullic/Dev/SolAR/core/SolARFramework/interfaces/api/loop/ILoopClosureDetector.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcILoopClosureDetectorService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverILoopClosureDetector {

class ILoopClosureDetector_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    ILoopClosureDetector_grpcServer();
    ~ILoopClosureDetector_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "ILoopClosureDetector"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcILoopClosureDetectorServiceImpl:  public ::grpcILoopClosureDetector::grpcILoopClosureDetectorService::Service
    {
      public:
        grpcILoopClosureDetectorServiceImpl() = default;
        ::grpc::Status setCameraParameters(::grpc::ServerContext* context, const ::grpcILoopClosureDetector::setCameraParametersRequest* request, ::google::protobuf::Empty* response) override;
        ::grpc::Status detect(::grpc::ServerContext* context, const ::grpcILoopClosureDetector::detectRequest* request, ::grpcILoopClosureDetector::detectResponse* response) override;

        SRef<SolAR::api::loop::ILoopClosureDetector> m_xpcfComponent;

    };


  private:
    grpcILoopClosureDetectorServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverILoopClosureDetector::ILoopClosureDetector_grpcServer>
{
  static constexpr const char * UUID = "ab6941d7-4838-48e9-a540-14cfaa021df3";
  static constexpr const char * NAME = "ILoopClosureDetector_grpcServer";
  static constexpr const char * DESCRIPTION = "ILoopClosureDetector_grpcServer grpc server component";
};

#endif