// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IDESCRIPTORSEXTRACTORSBPATTERN_GRPCPROXY_H
#define IDESCRIPTORSEXTRACTORSBPATTERN_GRPCPROXY_H
#include "/home/solar/Dev/SolAR/core/SolARFramework/interfaces/api/features/IDescriptorsExtractorSBPattern.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIDescriptorsExtractorSBPatternService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyIDescriptorsExtractorSBPattern {

class IDescriptorsExtractorSBPattern_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::features::IDescriptorsExtractorSBPattern {
  public:
    IDescriptorsExtractorSBPattern_grpcProxy();
    ~IDescriptorsExtractorSBPattern_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode extract(std::vector<SRef<SolAR::datastructure::Image>> const& images, std::vector<SolAR::datastructure::Contour2Df> const& inContours, SRef<SolAR::datastructure::DescriptorBuffer>& descriptors, std::vector<SolAR::datastructure::Contour2Df>& outContours)     override;
    SolAR::FrameworkReturnCode extract(SolAR::datastructure::SquaredBinaryPattern const& pattern, SRef<SolAR::datastructure::DescriptorBuffer>& descriptorParam)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcIDescriptorsExtractorSBPattern::grpcIDescriptorsExtractorSBPatternService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIDescriptorsExtractorSBPattern::IDescriptorsExtractorSBPattern_grpcProxy>
{
  static constexpr const char * UUID = "c2a230ae-6fb0-4e30-b06c-05c29c6feb9b";
  static constexpr const char * NAME = "IDescriptorsExtractorSBPattern_grpcProxy";
  static constexpr const char * DESCRIPTION = "IDescriptorsExtractorSBPattern_grpcProxy grpc client proxy component";
};


#endif