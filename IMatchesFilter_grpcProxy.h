// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IMATCHESFILTER_GRPCPROXY_H
#define IMATCHESFILTER_GRPCPROXY_H
#include "Dev/SolAR/SolARFramework/interfaces/api/features/IMatchesFilter.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIMatchesFilterService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIMatchesFilter {

class IMatchesFilter_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::features::IMatchesFilter {
  public:
    IMatchesFilter_grpcProxy();
    ~IMatchesFilter_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    void filter(std::vector<SolAR::datastructure::DescriptorMatch> const& inputMatches, std::vector<SolAR::datastructure::DescriptorMatch>& outputMatches, std::vector<SolAR::datastructure::Keypoint> const& keyPoints_1, std::vector<SolAR::datastructure::Keypoint> const& keyPoints_2)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIMatchesFilter::grpcIMatchesFilterService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIMatchesFilter::IMatchesFilter_grpcProxy>
{
  static constexpr const char * UUID = "72253404-a06f-4b3f-996e-b17d5aaba9b4";
  static constexpr const char * NAME = "IMatchesFilter_grpcProxy";
  static constexpr const char * DESCRIPTION = "IMatchesFilter_grpcProxy grpc client proxy component";
};


#endif