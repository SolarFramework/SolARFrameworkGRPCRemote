// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef ITRACKABLEPOSE_GRPCPROXY_H
#define ITRACKABLEPOSE_GRPCPROXY_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/solver/pose/ITrackablePose.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcITrackablePoseService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

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
    std::unique_ptr<::grpcITrackablePose::grpcITrackablePoseService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyITrackablePose::ITrackablePose_grpcProxy>
{
  static constexpr const char * UUID = "0ad0649a-e911-4b69-a01e-08d03685bf52";
  static constexpr const char * NAME = "ITrackablePose_grpcProxy";
  static constexpr const char * DESCRIPTION = "ITrackablePose_grpcProxy grpc client proxy component";
};


#endif