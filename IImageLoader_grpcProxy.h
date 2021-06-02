// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IIMAGELOADER_GRPCPROXY_H
#define IIMAGELOADER_GRPCPROXY_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/image/IImageLoader.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIImageLoaderService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyIImageLoader {

class IImageLoader_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::image::IImageLoader {
  public:
    IImageLoader_grpcProxy();
    ~IImageLoader_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode getImage(SRef<SolAR::datastructure::Image>& img)     override;
    SolAR::FrameworkReturnCode reloadImage()     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcIImageLoader::grpcIImageLoaderService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIImageLoader::IImageLoader_grpcProxy>
{
  static constexpr const char * UUID = "476c4b6c-4759-4a52-ad0b-fedcc130ad7a";
  static constexpr const char * NAME = "IImageLoader_grpcProxy";
  static constexpr const char * DESCRIPTION = "IImageLoader_grpcProxy grpc client proxy component";
};


#endif