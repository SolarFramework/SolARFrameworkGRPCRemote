// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef ITRACKABLEPOSE_GRPCPROXY_H
#define ITRACKABLEPOSE_GRPCPROXY_H
#include "/mnt/c/Users/nduong/bcom/projects/Argo/SolARFramework/SolAR/core/SolARFramework/interfaces/api/solver/pose/ITrackablePose.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcITrackablePoseService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyITrackablePose {

class ITrackablePose_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::solver::pose::ITrackablePose {
  public:
    ITrackablePose_grpcProxy();
    ~ITrackablePose_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    void setCameraParameters(SolAR::datastructure::CamCalibration const& intrinsicParams, SolAR::datastructure::CamDistortion const& distorsionParams)     override;
    SolAR::FrameworkReturnCode setTrackable(SRef<SolAR::datastructure::Trackable> const trackable)     override;
    SolAR::FrameworkReturnCode estimate(SRef<SolAR::datastructure::Image> const image, SolAR::datastructure::Transform3Df& pose)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcITrackablePose::grpcITrackablePoseService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyITrackablePose::ITrackablePose_grpcProxy>
{
  static constexpr const char * UUID = "ad79b898-f2b0-446f-835e-7daf3458fe50";
  static constexpr const char * NAME = "ITrackablePose_grpcProxy";
  static constexpr const char * DESCRIPTION = "ITrackablePose_grpcProxy grpc client proxy component";
};


#endif