// GRPC Server Class Header generated with xpcf_grpc_gen

#ifndef IPOINTCLOUDMANAGER_GRPCSERVER_H
#define IPOINTCLOUDMANAGER_GRPCSERVER_H
#include "/home/solar/Dev/SolAR/core/SolARFramework/interfaces/api/storage/IPointCloudManager.h"
#include <xpcf/component/ConfigurableBase.h>
#include <xpcf/remoting/IGrpcService.h>
#include "grpcIPointCloudManagerService.grpc.pb.h"
#include <grpc/grpc.h>

namespace org::bcom::xpcf::grpc::serverIPointCloudManager {

class IPointCloudManager_grpcServer:  public org::bcom::xpcf::ConfigurableBase, virtual public org::bcom::xpcf::IGrpcService
{
  public:
    IPointCloudManager_grpcServer();
    ~IPointCloudManager_grpcServer() override = default;
    ::grpc::Service * getService() override;
    const char * getServiceName() override { return "IPointCloudManager"; }
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    class grpcIPointCloudManagerServiceImpl:  public ::grpcIPointCloudManager::grpcIPointCloudManagerService::Service
    {
      public:
        grpcIPointCloudManagerServiceImpl() = default;
        ::grpc::Status addPoint_grpc0(::grpc::ServerContext* context, const ::grpcIPointCloudManager::addPoint_grpc0Request* request, ::grpcIPointCloudManager::addPoint_grpc0Response* response) override;
        ::grpc::Status addPoints_grpc0(::grpc::ServerContext* context, const ::grpcIPointCloudManager::addPoints_grpc0Request* request, ::grpcIPointCloudManager::addPoints_grpc0Response* response) override;
        ::grpc::Status addPoint_grpc1(::grpc::ServerContext* context, const ::grpcIPointCloudManager::addPoint_grpc1Request* request, ::grpcIPointCloudManager::addPoint_grpc1Response* response) override;
        ::grpc::Status addPoints_grpc1(::grpc::ServerContext* context, const ::grpcIPointCloudManager::addPoints_grpc1Request* request, ::grpcIPointCloudManager::addPoints_grpc1Response* response) override;
        ::grpc::Status getPoint(::grpc::ServerContext* context, const ::grpcIPointCloudManager::getPointRequest* request, ::grpcIPointCloudManager::getPointResponse* response) override;
        ::grpc::Status getPoints(::grpc::ServerContext* context, const ::grpcIPointCloudManager::getPointsRequest* request, ::grpcIPointCloudManager::getPointsResponse* response) override;
        ::grpc::Status getAllPoints(::grpc::ServerContext* context, const ::grpcIPointCloudManager::getAllPointsRequest* request, ::grpcIPointCloudManager::getAllPointsResponse* response) override;
        ::grpc::Status suppressPoint(::grpc::ServerContext* context, const ::grpcIPointCloudManager::suppressPointRequest* request, ::grpcIPointCloudManager::suppressPointResponse* response) override;
        ::grpc::Status suppressPoints(::grpc::ServerContext* context, const ::grpcIPointCloudManager::suppressPointsRequest* request, ::grpcIPointCloudManager::suppressPointsResponse* response) override;
        ::grpc::Status getDescriptorType(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIPointCloudManager::getDescriptorTypeResponse* response) override;
        ::grpc::Status setDescriptorType(::grpc::ServerContext* context, const ::grpcIPointCloudManager::setDescriptorTypeRequest* request, ::grpcIPointCloudManager::setDescriptorTypeResponse* response) override;
        ::grpc::Status isExistPoint(::grpc::ServerContext* context, const ::grpcIPointCloudManager::isExistPointRequest* request, ::grpcIPointCloudManager::isExistPointResponse* response) override;
        ::grpc::Status getNbPoints(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIPointCloudManager::getNbPointsResponse* response) override;
        ::grpc::Status saveToFile(::grpc::ServerContext* context, const ::grpcIPointCloudManager::saveToFileRequest* request, ::grpcIPointCloudManager::saveToFileResponse* response) override;
        ::grpc::Status loadFromFile(::grpc::ServerContext* context, const ::grpcIPointCloudManager::loadFromFileRequest* request, ::grpcIPointCloudManager::loadFromFileResponse* response) override;
        ::grpc::Status getConstPointCloud(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::grpcIPointCloudManager::getConstPointCloudResponse* response) override;
        ::grpc::Status getPointCloud(::grpc::ServerContext* context, const ::grpcIPointCloudManager::getPointCloudRequest* request, ::grpcIPointCloudManager::getPointCloudResponse* response) override;
        ::grpc::Status setPointCloud(::grpc::ServerContext* context, const ::grpcIPointCloudManager::setPointCloudRequest* request, ::google::protobuf::Empty* response) override;

        SRef<SolAR::api::storage::IPointCloudManager> m_xpcfComponent;

    };


  private:
    grpcIPointCloudManagerServiceImpl m_grpcService;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::serverIPointCloudManager::IPointCloudManager_grpcServer>
{
  static constexpr const char * UUID = "3c2ddd1a-8e68-4b01-ae63-ec33666be9d1";
  static constexpr const char * NAME = "IPointCloudManager_grpcServer";
  static constexpr const char * DESCRIPTION = "IPointCloudManager_grpcServer grpc server component";
};

#endif