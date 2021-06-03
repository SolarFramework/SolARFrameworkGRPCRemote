// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IMAPUPDATE_GRPCPROXY_H
#define IMAPUPDATE_GRPCPROXY_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/solver/map/IMapUpdate.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIMapUpdateService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyIMapUpdate {

class IMapUpdate_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::solver::map::IMapUpdate {
  public:
    IMapUpdate_grpcProxy();
    ~IMapUpdate_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    void setCameraParameters(SolAR::datastructure::CamCalibration const& intrinsicParams, SolAR::datastructure::CamDistortion const& distortionParams)     override;
    SolAR::FrameworkReturnCode update(SRef<SolAR::datastructure::Map> globalMap, std::vector<uint32_t> const& newKeyframeIds)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcIMapUpdate::grpcIMapUpdateService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIMapUpdate::IMapUpdate_grpcProxy>
{
  static constexpr const char * UUID = "7d3416a9-268d-420d-8e3c-abc4b07e63dd";
  static constexpr const char * NAME = "IMapUpdate_grpcProxy";
  static constexpr const char * DESCRIPTION = "IMapUpdate_grpcProxy grpc client proxy component";
};


#endif