// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IDESCRIPTORSEXTRACTOR_GRPCPROXY_H
#define IDESCRIPTORSEXTRACTOR_GRPCPROXY_H
#include "/home/solar/Dev/SolAR/core/SolARFramework/interfaces/api/features/IDescriptorsExtractor.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIDescriptorsExtractorService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyIDescriptorsExtractor {

class IDescriptorsExtractor_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::features::IDescriptorsExtractor {
  public:
    IDescriptorsExtractor_grpcProxy();
    ~IDescriptorsExtractor_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    std::string getTypeString()     override;
    void extract(SRef<SolAR::datastructure::Image> const image, std::vector<SolAR::datastructure::Keypoint> const& keypoints, SRef<SolAR::datastructure::DescriptorBuffer>& descriptors)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcIDescriptorsExtractor::grpcIDescriptorsExtractorService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIDescriptorsExtractor::IDescriptorsExtractor_grpcProxy>
{
  static constexpr const char * UUID = "79b1a2c4-639c-42ef-832f-130cf6131271";
  static constexpr const char * NAME = "IDescriptorsExtractor_grpcProxy";
  static constexpr const char * DESCRIPTION = "IDescriptorsExtractor_grpcProxy grpc client proxy component";
};


#endif