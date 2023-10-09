// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IWORLDGRAPHLOADER_GRPCPROXY_H
#define IWORLDGRAPHLOADER_GRPCPROXY_H
#include "Dev/SolAR/SolARFramework/interfaces/api/input/files/IWorldGraphLoader.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIWorldGraphLoaderService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIWorldGraphLoader {

class IWorldGraphLoader_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::input::files::IWorldGraphLoader {
  public:
    IWorldGraphLoader_grpcProxy();
    ~IWorldGraphLoader_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode load(std::vector<SRef<SolAR::datastructure::Trackable>>& trackables)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIWorldGraphLoader::grpcIWorldGraphLoaderService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIWorldGraphLoader::IWorldGraphLoader_grpcProxy>
{
  static constexpr const char * UUID = "1dd71248-747b-4a90-b2c6-7811aed57ba0";
  static constexpr const char * NAME = "IWorldGraphLoader_grpcProxy";
  static constexpr const char * DESCRIPTION = "IWorldGraphLoader_grpcProxy grpc client proxy component";
};


#endif