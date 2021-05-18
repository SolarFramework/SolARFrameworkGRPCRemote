// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IKEYFRAMESMANAGER_GRPCSERVER_H
#define IKEYFRAMESMANAGER_GRPCSERVER_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/storage/IKeyframesManager.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcIKeyframesManagerService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIKeyframesManager {

class IKeyframesManager_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IKeyframesManager_grpcServer();
    ~IKeyframesManager_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IKeyframesManager"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIKeyframesManagerServiceImpl:  public ::grpcIKeyframesManager::grpcIKeyframesManagerService::Service
    {
      public:
        grpcIKeyframesManagerServiceImpl() = default;
        ::grpc::Status addKeyframe_grpc0(::grpc::ServerContext* context, const ::grpcIKeyframesManager::addKeyframe_grpc0Request* request, ::grpcIKeyframesManager::addKeyframe_grpc0Response* response) override;
        ::grpc::Status addKeyframe_grpc1(::grpc::ServerContext* context, const ::grpcIKeyframesManager::addKeyframe_grpc1Request* request, ::grpcIKeyframesManager::addKeyframe_grpc1Response* response) override;
        ::grpc::Status getKeyframe(::grpc::ServerContext* context, const ::grpcIKeyframesManager::getKeyframeRequest* request, ::grpcIKeyframesManager::getKeyframeResponse* response) override;
        ::grpc::Status getKeyframes(::grpc::ServerContext* context, const ::grpcIKeyframesManager::getKeyframesRequest* request, ::grpcIKeyframesManager::getKeyframesResponse* response) override;
        ::grpc::Status getAllKeyframes(::grpc::ServerContext* context, const ::grpcIKeyframesManager::getAllKeyframesRequest* request, ::grpcIKeyframesManager::getAllKeyframesResponse* response) override;
        ::grpc::Status suppressKeyframe(::grpc::ServerContext* context, const ::grpcIKeyframesManager::suppressKeyframeRequest* request, ::grpcIKeyframesManager::suppressKeyframeResponse* response) override;
        ::grpc::Status getDescriptorType(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIKeyframesManager::getDescriptorTypeResponse* response) override;
        ::grpc::Status setDescriptorType(::grpc::ServerContext* context, const ::grpcIKeyframesManager::setDescriptorTypeRequest* request, ::grpcIKeyframesManager::setDescriptorTypeResponse* response) override;
        ::grpc::Status isExistKeyframe(::grpc::ServerContext* context, const ::grpcIKeyframesManager::isExistKeyframeRequest* request, ::grpcIKeyframesManager::isExistKeyframeResponse* response) override;
        ::grpc::Status getNbKeyframes(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIKeyframesManager::getNbKeyframesResponse* response) override;
        ::grpc::Status saveToFile(::grpc::ServerContext* context, const ::grpcIKeyframesManager::saveToFileRequest* request, ::grpcIKeyframesManager::saveToFileResponse* response) override;
        ::grpc::Status loadFromFile(::grpc::ServerContext* context, const ::grpcIKeyframesManager::loadFromFileRequest* request, ::grpcIKeyframesManager::loadFromFileResponse* response) override;

        SRef<SolAR::api::storage::IKeyframesManager> m_xpcfComponent;

    };


  private:
    grpcIKeyframesManagerServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIKeyframesManager::IKeyframesManager_grpcServer>
{
  static constexpr const char * UUID = "5a910f63-32fe-467f-8b4f-a7842aacdd12";
  static constexpr const char * NAME = "IKeyframesManager_grpcServer";
  static constexpr const char * DESCRIPTION = "IKeyframesManager_grpcServer grpc server component";
};

#endif