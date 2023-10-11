// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IMAPUPDATE_GRPCPROXY_H
#define IMAPUPDATE_GRPCPROXY_H
#include "api/solver/map/IMapUpdate.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIMapUpdateService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIMapUpdate {

class IMapUpdate_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::solver::map::IMapUpdate {
  public:
    IMapUpdate_grpcProxy();
    ~IMapUpdate_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode update(SRef<SolAR::datastructure::Map> globalMap, std::vector<uint32_t> const& newKeyframeIds)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIMapUpdate::grpcIMapUpdateService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIMapUpdate::IMapUpdate_grpcProxy>
{
  static constexpr const char * UUID = "2c2b7702-6a34-4add-b645-547ef0185253";
  static constexpr const char * NAME = "IMapUpdate_grpcProxy";
  static constexpr const char * DESCRIPTION = "IMapUpdate_grpcProxy grpc client proxy component";
};


#endif