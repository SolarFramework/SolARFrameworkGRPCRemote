// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef ISBPATTERNREINDEXER_GRPCPROXY_H
#define ISBPATTERNREINDEXER_GRPCPROXY_H
#include "Dev/SolAR/SolARFramework/interfaces/api/features/ISBPatternReIndexer.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcISBPatternReIndexerService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

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
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcISBPatternReIndexer::grpcISBPatternReIndexerService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyISBPatternReIndexer::ISBPatternReIndexer_grpcProxy>
{
  static constexpr const char * UUID = "f6633107-382c-44d1-bbee-e3223946f608";
  static constexpr const char * NAME = "ISBPatternReIndexer_grpcProxy";
  static constexpr const char * DESCRIPTION = "ISBPatternReIndexer_grpcProxy grpc client proxy component";
};


#endif