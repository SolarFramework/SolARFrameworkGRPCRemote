// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef ILOOPCORRECTOR_GRPCPROXY_H
#define ILOOPCORRECTOR_GRPCPROXY_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/loop/ILoopCorrector.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcILoopCorrectorService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyILoopCorrector {

class ILoopCorrector_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::loop::ILoopCorrector {
  public:
    ILoopCorrector_grpcProxy();
    ~ILoopCorrector_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    void setCameraParameters(SolAR::datastructure::CamCalibration const& intrinsicParams, SolAR::datastructure::CamDistortion const& distortionParams)     override;
    SolAR::FrameworkReturnCode correct(SRef<SolAR::datastructure::Keyframe> const queryKeyframe, SRef<SolAR::datastructure::Keyframe> const detectedLoopKeyframe, SolAR::datastructure::Transform3Df const& S_wl_wc, std::vector<std::pair<uint32_t,uint32_t>> const& duplicatedPointsIndices)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcILoopCorrector::grpcILoopCorrectorService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyILoopCorrector::ILoopCorrector_grpcProxy>
{
  static constexpr const char * UUID = "4da59c8e-d935-4573-b9c5-ffc1d6bd62b7";
  static constexpr const char * NAME = "ILoopCorrector_grpcProxy";
  static constexpr const char * DESCRIPTION = "ILoopCorrector_grpcProxy grpc client proxy component";
};


#endif