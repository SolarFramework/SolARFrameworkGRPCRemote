// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IMESHLOADER_GRPCPROXY_H
#define IMESHLOADER_GRPCPROXY_H
#include "Dev/SolAR/SolARFramework/interfaces/api/input/files/IMeshLoader.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIMeshLoaderService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIMeshLoader {

class IMeshLoader_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::input::files::IMeshLoader {
  public:
    IMeshLoader_grpcProxy();
    ~IMeshLoader_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode load(SRef<SolAR::datastructure::Mesh>& Mesh)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIMeshLoader::grpcIMeshLoaderService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIMeshLoader::IMeshLoader_grpcProxy>
{
  static constexpr const char * UUID = "5580de7a-462d-11ed-b878-0242ac120002";
  static constexpr const char * NAME = "IMeshLoader_grpcProxy";
  static constexpr const char * DESCRIPTION = "IMeshLoader_grpcProxy grpc client proxy component";
};


#endif