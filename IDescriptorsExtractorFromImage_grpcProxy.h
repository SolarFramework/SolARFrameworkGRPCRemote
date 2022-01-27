// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IDESCRIPTORSEXTRACTORFROMIMAGE_GRPCPROXY_H
#define IDESCRIPTORSEXTRACTORFROMIMAGE_GRPCPROXY_H
#include "api/features/IDescriptorsExtractorFromImage.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIDescriptorsExtractorFromImageService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIDescriptorsExtractorFromImage {

class IDescriptorsExtractorFromImage_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::features::IDescriptorsExtractorFromImage {
  public:
    IDescriptorsExtractorFromImage_grpcProxy();
    ~IDescriptorsExtractorFromImage_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    std::string getTypeString()     override;
    SolAR::FrameworkReturnCode extract(SRef<SolAR::datastructure::Image> const image, std::vector<SolAR::datastructure::Keypoint>& keypoints, SRef<SolAR::datastructure::DescriptorBuffer>& descriptors)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIDescriptorsExtractorFromImage::grpcIDescriptorsExtractorFromImageService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIDescriptorsExtractorFromImage::IDescriptorsExtractorFromImage_grpcProxy>
{
  static constexpr const char * UUID = "6ed44a98-6743-414e-84de-970fab9b3507";
  static constexpr const char * NAME = "IDescriptorsExtractorFromImage_grpcProxy";
  static constexpr const char * DESCRIPTION = "IDescriptorsExtractorFromImage_grpcProxy grpc client proxy component";
};


#endif