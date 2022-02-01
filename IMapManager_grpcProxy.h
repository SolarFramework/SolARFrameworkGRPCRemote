// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IMAPMANAGER_GRPCPROXY_H
#define IMAPMANAGER_GRPCPROXY_H
#include "api/storage/IMapManager.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIMapManagerService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

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
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIMapManager::grpcIMapManagerService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIMapManager::IMapManager_grpcProxy>
{
  static constexpr const char * UUID = "9c68f766-3b6f-427f-91d3-1e5126d27326";
  static constexpr const char * NAME = "IMapManager_grpcProxy";
  static constexpr const char * DESCRIPTION = "IMapManager_grpcProxy grpc client proxy component";
};


#endif