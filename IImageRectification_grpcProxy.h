// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IIMAGERECTIFICATION_GRPCPROXY_H
#define IIMAGERECTIFICATION_GRPCPROXY_H
#include "/home/solar/Dev/SolAR/core/SolARFramework/interfaces/api/image/IImageRectification.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIImageRectificationService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyIImageRectification {

class IImageRectification_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::image::IImageRectification {
  public:
    IImageRectification_grpcProxy();
    ~IImageRectification_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode rectify(SRef<SolAR::datastructure::Image> image, SolAR::datastructure::CameraParameters const& camParams, SolAR::datastructure::RectificationParameters const& rectParams, SRef<SolAR::datastructure::Image>& rectifiedImage)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcIImageRectification::grpcIImageRectificationService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIImageRectification::IImageRectification_grpcProxy>
{
  static constexpr const char * UUID = "a8aafd7e-1b0e-4779-849d-845a89d4c85b";
  static constexpr const char * NAME = "IImageRectification_grpcProxy";
  static constexpr const char * DESCRIPTION = "IImageRectification_grpcProxy grpc client proxy component";
};


#endif