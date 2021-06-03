// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IMAPMANAGER_GRPCPROXY_H
#define IMAPMANAGER_GRPCPROXY_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/storage/IMapManager.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIMapManagerService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyIMapManager {

class IMapManager_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::storage::IMapManager {
  public:
    IMapManager_grpcProxy();
    ~IMapManager_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode setMap(SRef<SolAR::datastructure::Map> const map)     override;
    SolAR::FrameworkReturnCode getMap(SRef<SolAR::datastructure::Map>& map)     override;
    SolAR::FrameworkReturnCode getLocalPointCloud(SRef<SolAR::datastructure::Keyframe> const keyframe, float const minWeightNeighbor, std::vector<SRef<SolAR::datastructure::CloudPoint>>& localPointCloud)     const     override;
    SolAR::FrameworkReturnCode addCloudPoint(SRef<SolAR::datastructure::CloudPoint> const cloudPoint)     override;
    SolAR::FrameworkReturnCode removeCloudPoint(SRef<SolAR::datastructure::CloudPoint> const cloudPoint)     override;
    SolAR::FrameworkReturnCode addKeyframe(SRef<SolAR::datastructure::Keyframe> const keyframe)     override;
    SolAR::FrameworkReturnCode removeKeyframe(SRef<SolAR::datastructure::Keyframe> const keyframe)     override;
    int pointCloudPruning(std::vector<SRef<SolAR::datastructure::CloudPoint>> const& cloudPoints)     override;
    int keyframePruning(std::vector<SRef<SolAR::datastructure::Keyframe>> const& keyframes)     override;
    SolAR::FrameworkReturnCode saveToFile()     const     override;
    SolAR::FrameworkReturnCode loadFromFile()     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcIMapManager::grpcIMapManagerService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIMapManager::IMapManager_grpcProxy>
{
  static constexpr const char * UUID = "6c20cf82-1d86-4dea-ae16-e8f2d345cec2";
  static constexpr const char * NAME = "IMapManager_grpcProxy";
  static constexpr const char * DESCRIPTION = "IMapManager_grpcProxy grpc client proxy component";
};


#endif