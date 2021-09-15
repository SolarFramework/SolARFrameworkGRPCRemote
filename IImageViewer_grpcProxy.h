// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IIMAGEVIEWER_GRPCPROXY_H
#define IIMAGEVIEWER_GRPCPROXY_H
#include "/home/solar/Dev/SolAR/core/SolARFramework/interfaces/api/display/IImageViewer.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIImageViewerService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyIImageViewer {

class IImageViewer_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::display::IImageViewer {
  public:
    IImageViewer_grpcProxy();
    ~IImageViewer_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode display(SRef<SolAR::datastructure::Image> const img)     override;
    SolAR::FrameworkReturnCode displayKey(SRef<SolAR::datastructure::Image> const img, char& key)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcIImageViewer::grpcIImageViewerService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIImageViewer::IImageViewer_grpcProxy>
{
  static constexpr const char * UUID = "cd031471-05cb-4e17-8cac-7e84e9c96c90";
  static constexpr const char * NAME = "IImageViewer_grpcProxy";
  static constexpr const char * DESCRIPTION = "IImageViewer_grpcProxy grpc client proxy component";
};


#endif