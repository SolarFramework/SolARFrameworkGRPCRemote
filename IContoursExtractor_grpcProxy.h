// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef ICONTOURSEXTRACTOR_GRPCPROXY_H
#define ICONTOURSEXTRACTOR_GRPCPROXY_H
#include "Dev/SolAR/SolARFramework/interfaces/api/features/IContoursExtractor.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIContoursExtractorService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIContoursExtractor {

class IContoursExtractor_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::features::IContoursExtractor {
  public:
    IContoursExtractor_grpcProxy();
    ~IContoursExtractor_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode extract(SRef<SolAR::datastructure::Image> const inputImg, std::vector<SolAR::datastructure::Contour2Df>& contours)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIContoursExtractor::grpcIContoursExtractorService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIContoursExtractor::IContoursExtractor_grpcProxy>
{
  static constexpr const char * UUID = "892788ad-8366-4d79-aec8-92aa4ed34665";
  static constexpr const char * NAME = "IContoursExtractor_grpcProxy";
  static constexpr const char * DESCRIPTION = "IContoursExtractor_grpcProxy grpc client proxy component";
};


#endif