// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IIMAGEMATCHER_GRPCPROXY_H
#define IIMAGEMATCHER_GRPCPROXY_H
#include "/home/solar/Dev/SolAR/core/SolARFramework/interfaces/api/features/IImageMatcher.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIImageMatcherService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyIImageMatcher {

class IImageMatcher_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::features::IImageMatcher {
  public:
    IImageMatcher_grpcProxy();
    ~IImageMatcher_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode match(SRef<SolAR::datastructure::Image> const image1, SRef<SolAR::datastructure::Image> const image2, std::vector<SolAR::datastructure::Keypoint>& keypoints1, std::vector<SolAR::datastructure::Keypoint>& keypoints2, SRef<SolAR::datastructure::DescriptorBuffer> descriptors1, SRef<SolAR::datastructure::DescriptorBuffer> descriptors2, std::vector<SolAR::datastructure::DescriptorMatch>& matches)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcIImageMatcher::grpcIImageMatcherService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIImageMatcher::IImageMatcher_grpcProxy>
{
  static constexpr const char * UUID = "0fcb5bf1-7251-4c7d-a3cc-3da7b4c306f4";
  static constexpr const char * NAME = "IImageMatcher_grpcProxy";
  static constexpr const char * DESCRIPTION = "IImageMatcher_grpcProxy grpc client proxy component";
};


#endif