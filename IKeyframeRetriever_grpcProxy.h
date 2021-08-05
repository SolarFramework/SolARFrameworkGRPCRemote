// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IKEYFRAMERETRIEVER_GRPCPROXY_H
#define IKEYFRAMERETRIEVER_GRPCPROXY_H
#include "/home/ccutullic/Dev/SolAR/core/SolARFramework/interfaces/api/reloc/IKeyframeRetriever.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIKeyframeRetrieverService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyIKeyframeRetriever {

class IKeyframeRetriever_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::reloc::IKeyframeRetriever {
  public:
    IKeyframeRetriever_grpcProxy();
    ~IKeyframeRetriever_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode addKeyframe(SRef<SolAR::datastructure::Keyframe> const keyframe)     override;
    SolAR::FrameworkReturnCode suppressKeyframe(uint32_t keyframe_id)     override;
    SolAR::FrameworkReturnCode retrieve(SRef<SolAR::datastructure::Frame> const frame, std::vector<uint32_t>& retKeyframes_id)     override;
    SolAR::FrameworkReturnCode retrieve(SRef<SolAR::datastructure::Frame> const frame, std::set<unsigned int> const& canKeyframes_id, std::vector<uint32_t>& retKeyframes_id)     override;
    SolAR::FrameworkReturnCode saveToFile(std::string const& file)     const     override;
    SolAR::FrameworkReturnCode loadFromFile(std::string const& file)     override;
    SolAR::FrameworkReturnCode match(SRef<SolAR::datastructure::Frame> const frame, SRef<SolAR::datastructure::Keyframe> const keyframe, std::vector<SolAR::datastructure::DescriptorMatch>& matches)     override;
    SolAR::FrameworkReturnCode match(std::vector<int> const& indexDescriptors, SRef<SolAR::datastructure::DescriptorBuffer> const descriptors, SRef<SolAR::datastructure::Keyframe> const keyframe, std::vector<SolAR::datastructure::DescriptorMatch>& matches)     override;
    SRef<SolAR::datastructure::KeyframeRetrieval> const& getConstKeyframeRetrieval()     const     override;
    std::unique_lock<std::mutex> getKeyframeRetrieval(SRef<SolAR::datastructure::KeyframeRetrieval>& keyframeRetrieval)     override;
    void setKeyframeRetrieval(SRef<SolAR::datastructure::KeyframeRetrieval> const keyframeRetrieval)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcIKeyframeRetriever::grpcIKeyframeRetrieverService::Stub> m_grpcStub;
    mutable     SRef<SolAR::datastructure::KeyframeRetrieval> m_getConstKeyframeRetrieval;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIKeyframeRetriever::IKeyframeRetriever_grpcProxy>
{
  static constexpr const char * UUID = "d2e80a19-06e9-4feb-9839-3be18150a157";
  static constexpr const char * NAME = "IKeyframeRetriever_grpcProxy";
  static constexpr const char * DESCRIPTION = "IKeyframeRetriever_grpcProxy grpc client proxy component";
};


#endif