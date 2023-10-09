// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IINSTANCESEGMENTATION_GRPCPROXY_H
#define IINSTANCESEGMENTATION_GRPCPROXY_H
#include "Dev/SolAR/SolARFramework/interfaces/api/segm/IInstanceSegmentation.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIInstanceSegmentationService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIInstanceSegmentation {

class IInstanceSegmentation_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::segm::IInstanceSegmentation {
  public:
    IInstanceSegmentation_grpcProxy();
    ~IInstanceSegmentation_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode segment(SRef<SolAR::datastructure::Image> const image, std::vector<SolAR::datastructure::Rectanglei>& boxes, std::vector<SRef<SolAR::datastructure::Image>>& masks, std::vector<uint32_t>& classIds, std::vector<float>& scores)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIInstanceSegmentation::grpcIInstanceSegmentationService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIInstanceSegmentation::IInstanceSegmentation_grpcProxy>
{
  static constexpr const char * UUID = "e75921b5-8b50-44a9-a488-edf1608c8f3e";
  static constexpr const char * NAME = "IInstanceSegmentation_grpcProxy";
  static constexpr const char * DESCRIPTION = "IInstanceSegmentation_grpcProxy grpc client proxy component";
};


#endif