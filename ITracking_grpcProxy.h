// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef ITRACKING_GRPCPROXY_H
#define ITRACKING_GRPCPROXY_H
#include "api/slam/ITracking.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcITrackingService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyITracking {

class ITracking_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::slam::ITracking {
  public:
    ITracking_grpcProxy();
    ~ITracking_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    void setCameraParameters(SolAR::datastructure::CamCalibration const& intrinsicParams, SolAR::datastructure::CamDistortion const& distorsionParams)     override;
    void setNewKeyframe(SRef<SolAR::datastructure::Keyframe> const newKeyframe)     override;
    bool checkNeedNewKeyframe()     override;
    SolAR::FrameworkReturnCode process(SRef<SolAR::datastructure::Frame> const frame, SRef<SolAR::datastructure::Image>& displayImage)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcITracking::grpcITrackingService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyITracking::ITracking_grpcProxy>
{
  static constexpr const char * UUID = "064ae968-4fc7-448b-a485-468a112e4fa3";
  static constexpr const char * NAME = "ITracking_grpcProxy";
  static constexpr const char * DESCRIPTION = "ITracking_grpcProxy grpc client proxy component";
};


#endif