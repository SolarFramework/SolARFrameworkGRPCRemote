// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IDESCRIPTORMATCHER_GRPCPROXY_H
#define IDESCRIPTORMATCHER_GRPCPROXY_H
#include "/home/solar/Dev/SolAR/core/SolARFramework/interfaces/api/features/IDescriptorMatcher.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIDescriptorMatcherService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyIDescriptorMatcher {

class IDescriptorMatcher_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::features::IDescriptorMatcher {
  public:
    IDescriptorMatcher_grpcProxy();
    ~IDescriptorMatcher_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode match(SRef<SolAR::datastructure::DescriptorBuffer> const descriptors1, SRef<SolAR::datastructure::DescriptorBuffer> const descriptors2, std::vector<SolAR::datastructure::DescriptorMatch>& matches)     override;
    SolAR::FrameworkReturnCode match(SRef<SolAR::datastructure::DescriptorBuffer> const descriptors1, std::vector<SRef<SolAR::datastructure::DescriptorBuffer>> const& descriptors2, std::vector<SolAR::datastructure::DescriptorMatch>& matches)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcIDescriptorMatcher::grpcIDescriptorMatcherService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIDescriptorMatcher::IDescriptorMatcher_grpcProxy>
{
  static constexpr const char * UUID = "ed165360-7bcd-4b02-9eaf-75182dad8a92";
  static constexpr const char * NAME = "IDescriptorMatcher_grpcProxy";
  static constexpr const char * DESCRIPTION = "IDescriptorMatcher_grpcProxy grpc client proxy component";
};


#endif