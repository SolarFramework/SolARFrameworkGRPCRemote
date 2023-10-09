// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IIMAGERECTIFICATION_GRPCPROXY_H
#define IIMAGERECTIFICATION_GRPCPROXY_H
#include "Dev/SolAR/SolARFramework/interfaces/api/image/IImageRectification.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIImageRectificationService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

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
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIImageRectification::grpcIImageRectificationService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIImageRectification::IImageRectification_grpcProxy>
{
  static constexpr const char * UUID = "9f68e2e0-33a6-4ce5-9b6e-bbe8088f9bc5";
  static constexpr const char * NAME = "IImageRectification_grpcProxy";
  static constexpr const char * DESCRIPTION = "IImageRectification_grpcProxy grpc client proxy component";
};


#endif