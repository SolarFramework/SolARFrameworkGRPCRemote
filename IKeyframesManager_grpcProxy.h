// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IKEYFRAMESMANAGER_GRPCPROXY_H
#define IKEYFRAMESMANAGER_GRPCPROXY_H
#include "/home/ccutullic/Dev/SolAR/core/SolARFramework/interfaces/api/storage/IKeyframesManager.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIKeyframesManagerService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyIKeyframesManager {

class IKeyframesManager_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::storage::IKeyframesManager {
  public:
    IKeyframesManager_grpcProxy();
    ~IKeyframesManager_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode addKeyframe(SRef<SolAR::datastructure::Keyframe> const keyframe)     override;
    SolAR::FrameworkReturnCode addKeyframe(SolAR::datastructure::Keyframe const& keyframe)     override;
    SolAR::FrameworkReturnCode getKeyframe(uint32_t const id, SRef<SolAR::datastructure::Keyframe>& keyframe)     const     override;
    SolAR::FrameworkReturnCode getKeyframes(std::vector<uint32_t> const& ids, std::vector<SRef<SolAR::datastructure::Keyframe>>& keyframes)     const     override;
    SolAR::FrameworkReturnCode getAllKeyframes(std::vector<SRef<SolAR::datastructure::Keyframe>>& keyframes)     const     override;
    SolAR::FrameworkReturnCode suppressKeyframe(uint32_t const id)     override;
    SolAR::datastructure::DescriptorType getDescriptorType()     const     override;
    SolAR::FrameworkReturnCode setDescriptorType(SolAR::datastructure::DescriptorType const& type)     override;
    bool isExistKeyframe(uint32_t const id)     const     override;
    int getNbKeyframes()     const     override;
    SolAR::FrameworkReturnCode saveToFile(std::string const& file)     const     override;
    SolAR::FrameworkReturnCode loadFromFile(std::string const& file)     override;
    SRef<SolAR::datastructure::KeyframeCollection> const& getConstKeyframeCollection()     const     override;
    std::unique_lock<std::mutex> getKeyframeCollection(SRef<SolAR::datastructure::KeyframeCollection>& keyframeCollection)     override;
    void setKeyframeCollection(SRef<SolAR::datastructure::KeyframeCollection> const keyframeCollection)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcIKeyframesManager::grpcIKeyframesManagerService::Stub> m_grpcStub;
    mutable     SRef<SolAR::datastructure::KeyframeCollection> m_getConstKeyframeCollection;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIKeyframesManager::IKeyframesManager_grpcProxy>
{
  static constexpr const char * UUID = "749d310f-bcfd-474a-b60d-8dfcbcf24b72";
  static constexpr const char * NAME = "IKeyframesManager_grpcProxy";
  static constexpr const char * DESCRIPTION = "IKeyframesManager_grpcProxy grpc client proxy component";
};


#endif