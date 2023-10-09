// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef ILOOPCORRECTOR_GRPCPROXY_H
#define ILOOPCORRECTOR_GRPCPROXY_H
#include "api/loop/ILoopCorrector.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcILoopCorrectorService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyILoopCorrector {

class ILoopCorrector_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::loop::ILoopCorrector {
  public:
    ILoopCorrector_grpcProxy();
    ~ILoopCorrector_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode correct(SRef<SolAR::datastructure::Keyframe> const queryKeyframe, SRef<SolAR::datastructure::Keyframe> const detectedLoopKeyframe, SolAR::datastructure::Transform3Df const& S_wl_wc, std::vector<std::pair<uint32_t,uint32_t>> const& duplicatedPointsIndices, std::vector<uint32_t>& correctedKeyframeIds)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcILoopCorrector::grpcILoopCorrectorService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyILoopCorrector::ILoopCorrector_grpcProxy>
{
  static constexpr const char * UUID = "51f449f8-c9df-4c3a-ac57-7ca95debfdbc";
  static constexpr const char * NAME = "ILoopCorrector_grpcProxy";
  static constexpr const char * DESCRIPTION = "ILoopCorrector_grpcProxy grpc client proxy component";
};


#endif