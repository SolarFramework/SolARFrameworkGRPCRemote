// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef ITRACKABLELOADER_GRPCSERVER_H
#define ITRACKABLELOADER_GRPCSERVER_H
#include "/home/ccutullic/Dev/SolAR/core/SolARFramework/interfaces/api/input/files/ITrackableLoader.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcITrackableLoaderService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverITrackableLoader {

class ITrackableLoader_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    ITrackableLoader_grpcServer();
    ~ITrackableLoader_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "ITrackableLoader"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcITrackableLoaderServiceImpl:  public ::grpcITrackableLoader::grpcITrackableLoaderService::Service
    {
      public:
        grpcITrackableLoaderServiceImpl() = default;
        ::grpc::Status loadTrackable(::grpc::ServerContext* context, const ::grpcITrackableLoader::loadTrackableRequest* request, ::grpcITrackableLoader::loadTrackableResponse* response) override;

        SRef<SolAR::api::input::files::ITrackableLoader> m_xpcfComponent;

    };


  private:
    grpcITrackableLoaderServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverITrackableLoader::ITrackableLoader_grpcServer>
{
  static constexpr const char * UUID = "c599f8bb-00a3-4423-a90d-6c9d078efc20";
  static constexpr const char * NAME = "ITrackableLoader_grpcServer";
  static constexpr const char * DESCRIPTION = "ITrackableLoader_grpcServer grpc server component";
};

#endif