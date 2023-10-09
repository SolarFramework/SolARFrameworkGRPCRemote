// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IPANOPTICSEGMENTATION_GRPCPROXY_H
#define IPANOPTICSEGMENTATION_GRPCPROXY_H
#include "Dev/SolAR/SolARFramework/interfaces/api/segm/IPanopticSegmentation.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIPanopticSegmentationService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIPanopticSegmentation {

class IPanopticSegmentation_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::segm::IPanopticSegmentation {
  public:
    IPanopticSegmentation_grpcProxy();
    ~IPanopticSegmentation_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode segment(SRef<SolAR::datastructure::Image> const image, SRef<SolAR::datastructure::Image>& labelMap, std::vector<SolAR::datastructure::Rectanglei>& boxes, std::vector<std::pair<uint32_t,uint32_t>>& classObjectIds, std::vector<float>& scores)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIPanopticSegmentation::grpcIPanopticSegmentationService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIPanopticSegmentation::IPanopticSegmentation_grpcProxy>
{
  static constexpr const char * UUID = "26e61305-b483-487a-8701-4a9612af5db6";
  static constexpr const char * NAME = "IPanopticSegmentation_grpcProxy";
  static constexpr const char * DESCRIPTION = "IPanopticSegmentation_grpcProxy grpc client proxy component";
};


#endif