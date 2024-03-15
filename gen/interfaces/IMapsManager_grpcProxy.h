// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IMAPSMANAGER_GRPCPROXY_H
#define IMAPSMANAGER_GRPCPROXY_H
#include "api/service/IMapsManager.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIMapsManagerService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIMapsManager {

class IMapsManager_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::service::IMapsManager {
  public:
    IMapsManager_grpcProxy();
    ~IMapsManager_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode createMap(std::string const& mapUUID)     override;
    SolAR::FrameworkReturnCode deleteMap(std::string const& mapUUID)     override;
    SolAR::FrameworkReturnCode getAllMaps(std::vector<std::string>& mapUUIDList)     const     override;
    SolAR::FrameworkReturnCode registerMapUpdateService(std::string const& serviceURL)     override;
    SolAR::FrameworkReturnCode unregisterMapUpdateService(std::string const& serviceURL)     override;
    SolAR::FrameworkReturnCode increaseMapClients(std::string const& mapUUID, std::string& serviceURL)     override;
    SolAR::FrameworkReturnCode decreaseMapClients(std::string const& mapUUID)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIMapsManager::grpcIMapsManagerService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIMapsManager::IMapsManager_grpcProxy>
{
  static constexpr const char * UUID = "4863f2d1-023c-4095-8842-e6083e6ec54a";
  static constexpr const char * NAME = "IMapsManager_grpcProxy";
  static constexpr const char * DESCRIPTION = "IMapsManager_grpcProxy grpc client proxy component";
};


#endif