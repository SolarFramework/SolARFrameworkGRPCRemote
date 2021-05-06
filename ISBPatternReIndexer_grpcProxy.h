// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef ISBPATTERNREINDEXER_GRPCPROXY_H
#define ISBPATTERNREINDEXER_GRPCPROXY_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/features/ISBPatternReIndexer.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcISBPatternReIndexerService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyISBPatternReIndexer {

class ISBPatternReIndexer_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::features::ISBPatternReIndexer {
  public:
    ISBPatternReIndexer_grpcProxy();
    ~ISBPatternReIndexer_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode reindex(std::vector<SolAR::datastructure::Contour2Df> const& candidateContours, std::vector<SolAR::datastructure::DescriptorMatch> const& matches, std::vector<SolAR::datastructure::Point2Df>& patternPoints, std::vector<SolAR::datastructure::Point2Df>& imagePoints)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcISBPatternReIndexer::grpcISBPatternReIndexerService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyISBPatternReIndexer::ISBPatternReIndexer_grpcProxy>
{
  static constexpr const char * UUID = "41345f1e-945a-4089-8267-590251015d73";
  static constexpr const char * NAME = "ISBPatternReIndexer_grpcProxy";
  static constexpr const char * DESCRIPTION = "ISBPatternReIndexer_grpcProxy grpc client proxy component";
};


#endif