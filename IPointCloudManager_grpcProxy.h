// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IPOINTCLOUDMANAGER_GRPCPROXY_H
#define IPOINTCLOUDMANAGER_GRPCPROXY_H
#include "/home/ccutullic/Dev/SolAR/core/SolARFramework/interfaces/api/storage/IPointCloudManager.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIPointCloudManagerService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyIPointCloudManager {

class IPointCloudManager_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::storage::IPointCloudManager {
  public:
    IPointCloudManager_grpcProxy();
    ~IPointCloudManager_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode addPoint(SRef<SolAR::datastructure::CloudPoint> const point)     override;
    SolAR::FrameworkReturnCode addPoints(std::vector<SRef<SolAR::datastructure::CloudPoint>> const& points)     override;
    SolAR::FrameworkReturnCode addPoint(SolAR::datastructure::CloudPoint const& point)     override;
    SolAR::FrameworkReturnCode addPoints(std::vector<SolAR::datastructure::CloudPoint> const& points)     override;
    SolAR::FrameworkReturnCode getPoint(uint32_t const id, SRef<SolAR::datastructure::CloudPoint>& point)     const     override;
    SolAR::FrameworkReturnCode getPoints(std::vector<uint32_t> const& ids, std::vector<SRef<SolAR::datastructure::CloudPoint>>& points)     const     override;
    SolAR::FrameworkReturnCode getAllPoints(std::vector<SRef<SolAR::datastructure::CloudPoint>>& points)     const     override;
    SolAR::FrameworkReturnCode suppressPoint(uint32_t const id)     override;
    SolAR::FrameworkReturnCode suppressPoints(std::vector<uint32_t> const& ids)     override;
    SolAR::datastructure::DescriptorType getDescriptorType()     const     override;
    SolAR::FrameworkReturnCode setDescriptorType(SolAR::datastructure::DescriptorType const& type)     override;
    bool isExistPoint(uint32_t const id)     const     override;
    int getNbPoints()     const     override;
    SolAR::FrameworkReturnCode saveToFile(std::string const& file)     const     override;
    SolAR::FrameworkReturnCode loadFromFile(std::string const& file)     override;
    SRef<SolAR::datastructure::PointCloud> const& getConstPointCloud()     const     override;
    std::unique_lock<std::mutex> getPointCloud(SRef<SolAR::datastructure::PointCloud>& pointCloud)     override;
    void setPointCloud(SRef<SolAR::datastructure::PointCloud> const pointCloud)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcIPointCloudManager::grpcIPointCloudManagerService::Stub> m_grpcStub;
    mutable     SRef<SolAR::datastructure::PointCloud> m_getConstPointCloud;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIPointCloudManager::IPointCloudManager_grpcProxy>
{
  static constexpr const char * UUID = "6aa574b9-da3a-4ecc-908b-13bf11f7db62";
  static constexpr const char * NAME = "IPointCloudManager_grpcProxy";
  static constexpr const char * DESCRIPTION = "IPointCloudManager_grpcProxy grpc client proxy component";
};


#endif