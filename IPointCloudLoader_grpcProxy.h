// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IPOINTCLOUDLOADER_GRPCPROXY_H
#define IPOINTCLOUDLOADER_GRPCPROXY_H
#include "/home/ccutullic/Dev/SolAR/core/SolARFramework/interfaces/api/input/files/IPointCloudLoader.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIPointCloudLoaderService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyIPointCloudLoader {

class IPointCloudLoader_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::input::files::IPointCloudLoader {
  public:
    IPointCloudLoader_grpcProxy();
    ~IPointCloudLoader_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode load(std::string const& filepath, SRef<SolAR::datastructure::PointCloud>& pointCloud)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcIPointCloudLoader::grpcIPointCloudLoaderService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIPointCloudLoader::IPointCloudLoader_grpcProxy>
{
  static constexpr const char * UUID = "ba3a2f54-0f0f-41f0-baeb-4a0ce5082d8e";
  static constexpr const char * NAME = "IPointCloudLoader_grpcProxy";
  static constexpr const char * DESCRIPTION = "IPointCloudLoader_grpcProxy grpc client proxy component";
};


#endif