// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef ISEMANTICSEGMENTATION_GRPCPROXY_H
#define ISEMANTICSEGMENTATION_GRPCPROXY_H
#include "Dev/SolAR/SolARFramework/interfaces/api/segm/ISemanticSegmentation.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcISemanticSegmentationService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyISemanticSegmentation {

class ISemanticSegmentation_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::segm::ISemanticSegmentation {
  public:
    ISemanticSegmentation_grpcProxy();
    ~ISemanticSegmentation_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode segment(SRef<SolAR::datastructure::Image> const image, SRef<SolAR::datastructure::Image>& mask)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcISemanticSegmentation::grpcISemanticSegmentationService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyISemanticSegmentation::ISemanticSegmentation_grpcProxy>
{
  static constexpr const char * UUID = "fb4b42d6-95a9-48a4-a86f-2c588b964f73";
  static constexpr const char * NAME = "ISemanticSegmentation_grpcProxy";
  static constexpr const char * DESCRIPTION = "ISemanticSegmentation_grpcProxy grpc client proxy component";
};


#endif