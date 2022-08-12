// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IMULTITRACKABLESPOSE_GRPCPROXY_H
#define IMULTITRACKABLESPOSE_GRPCPROXY_H
#include "api/solver/pose/IMultiTrackablesPose.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIMultiTrackablesPoseService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIMultiTrackablesPose {

class IMultiTrackablesPose_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::solver::pose::IMultiTrackablesPose {
  public:
    IMultiTrackablesPose_grpcProxy();
    ~IMultiTrackablesPose_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode setTrackables(std::vector<SRef<SolAR::datastructure::Trackable>> const trackables)     override;
    SolAR::FrameworkReturnCode estimate(SRef<SolAR::datastructure::Image> const image, SolAR::datastructure::CameraParameters const& camParams, SolAR::datastructure::Transform3Df& pose)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIMultiTrackablesPose::grpcIMultiTrackablesPoseService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIMultiTrackablesPose::IMultiTrackablesPose_grpcProxy>
{
  static constexpr const char * UUID = "cf2959b3-cc73-46fa-8082-0809a3a2dcd3";
  static constexpr const char * NAME = "IMultiTrackablesPose_grpcProxy";
  static constexpr const char * DESCRIPTION = "IMultiTrackablesPose_grpcProxy grpc client proxy component";
};


#endif