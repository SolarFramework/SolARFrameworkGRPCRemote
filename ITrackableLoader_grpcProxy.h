// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef ITRACKABLELOADER_GRPCPROXY_H
#define ITRACKABLELOADER_GRPCPROXY_H
#include "api/input/files/ITrackableLoader.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcITrackableLoaderService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyITrackableLoader {

class ITrackableLoader_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::input::files::ITrackableLoader {
  public:
    ITrackableLoader_grpcProxy();
    ~ITrackableLoader_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode loadTrackable(SRef<SolAR::datastructure::Trackable>& trackable)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcITrackableLoader::grpcITrackableLoaderService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyITrackableLoader::ITrackableLoader_grpcProxy>
{
  static constexpr const char * UUID = "7f62f9da-c21c-44fe-aebe-fedca94f6be6";
  static constexpr const char * NAME = "ITrackableLoader_grpcProxy";
  static constexpr const char * DESCRIPTION = "ITrackableLoader_grpcProxy grpc client proxy component";
};


#endif