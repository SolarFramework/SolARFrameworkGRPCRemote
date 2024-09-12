// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IWORLDGRAPHMANAGER_GRPCPROXY_H
#define IWORLDGRAPHMANAGER_GRPCPROXY_H
#include "api/storage/IWorldGraphManager.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIWorldGraphManagerService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIWorldGraphManager {

class IWorldGraphManager_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::storage::IWorldGraphManager {
  public:
    IWorldGraphManager_grpcProxy();
    ~IWorldGraphManager_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode getRelocalizationInformation(std::vector<std::tuple<org::bcom::xpcf::uuids::uuid,bool>> const& uuids, std::string const& token, std::vector<datastructure::StorageCapabilities> const& capability, std::vector<datastructure::RelocalizationInformation>& relocalizationInformation)     override;
    SolAR::FrameworkReturnCode getWorldElement(org::bcom::xpcf::uuids::uuid const& worldElementId, SRef<datastructure::StorageWorldElement>& worldElement)     override;
    SolAR::FrameworkReturnCode getWorldElements(std::vector<SRef<datastructure::StorageWorldElement>>& vector)     override;
    SolAR::FrameworkReturnCode getWorldElementByKeyValue(std::string const& key, std::string const& value, std::vector<SRef<datastructure::StorageWorldElement>>& vector)     override;
    SolAR::FrameworkReturnCode getWorldElementByKey(std::string const& key, std::vector<SRef<datastructure::StorageWorldElement>>& vector)     override;
    SolAR::FrameworkReturnCode addTrackable(org::bcom::xpcf::uuids::uuid& id, SRef<datastructure::StorageTrackable> trackable)     override;
    SolAR::FrameworkReturnCode getTrackable(org::bcom::xpcf::uuids::uuid const& trackableId, SRef<datastructure::StorageTrackable>& trackable)     override;
    SolAR::FrameworkReturnCode removeTrackable(org::bcom::xpcf::uuids::uuid const& trackableId)     override;
    SolAR::FrameworkReturnCode getTrackables(std::vector<SRef<datastructure::StorageTrackable>>& vector)     override;
    SolAR::FrameworkReturnCode modifyTrackable(org::bcom::xpcf::uuids::uuid& id, SRef<datastructure::StorageTrackable> trackable)     override;
    SolAR::FrameworkReturnCode addWorldAnchor(org::bcom::xpcf::uuids::uuid& id, SRef<datastructure::StorageWorldAnchor> worldAnchor)     override;
    SolAR::FrameworkReturnCode getWorldAnchor(org::bcom::xpcf::uuids::uuid const& worldAnchorId, SRef<datastructure::StorageWorldAnchor>& worldAnchor)     override;
    SolAR::FrameworkReturnCode removeWorldAnchor(org::bcom::xpcf::uuids::uuid const& worldAnchorId)     override;
    SolAR::FrameworkReturnCode getWorldAnchors(std::vector<SRef<datastructure::StorageWorldAnchor>>& vector)     override;
    SolAR::FrameworkReturnCode modifyWorldAnchor(org::bcom::xpcf::uuids::uuid& id, SRef<datastructure::StorageWorldAnchor> worldAnchor)     override;
    SolAR::FrameworkReturnCode addWorldLink(org::bcom::xpcf::uuids::uuid& id, SRef<datastructure::StorageWorldLink> worldLink)     override;
    SolAR::FrameworkReturnCode getWorldLink(org::bcom::xpcf::uuids::uuid const& parentId, org::bcom::xpcf::uuids::uuid const& childId, SRef<datastructure::StorageWorldLink>& worldLink)     override;
    SolAR::FrameworkReturnCode getWorldLink(org::bcom::xpcf::uuids::uuid const& linkId, SRef<datastructure::StorageWorldLink>& worldLink)     override;
    SolAR::FrameworkReturnCode removeWorldLink(org::bcom::xpcf::uuids::uuid const& parentId, org::bcom::xpcf::uuids::uuid const& childId)     override;
    SolAR::FrameworkReturnCode removeWorldLink(org::bcom::xpcf::uuids::uuid const& linkId)     override;
    SolAR::FrameworkReturnCode getWorldLinks(std::vector<SRef<datastructure::StorageWorldLink>>& vector)     override;
    SolAR::FrameworkReturnCode modifyWorldLink(org::bcom::xpcf::uuids::uuid& id, SRef<datastructure::StorageWorldLink> worldLink)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIWorldGraphManager::grpcIWorldGraphManagerService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIWorldGraphManager::IWorldGraphManager_grpcProxy>
{
  static constexpr const char * UUID = "ef8cd8bc-bc17-418b-b14c-756e7bd908c2";
  static constexpr const char * NAME = "IWorldGraphManager_grpcProxy";
  static constexpr const char * DESCRIPTION = "IWorldGraphManager_grpcProxy grpc client proxy component";
};


#endif