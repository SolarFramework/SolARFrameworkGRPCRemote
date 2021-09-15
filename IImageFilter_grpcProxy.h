// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IIMAGEFILTER_GRPCPROXY_H
#define IIMAGEFILTER_GRPCPROXY_H
#include "/home/solar/Dev/SolAR/core/SolARFramework/interfaces/api/image/IImageFilter.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIImageFilterService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyIImageFilter {

class IImageFilter_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::image::IImageFilter {
  public:
    IImageFilter_grpcProxy();
    ~IImageFilter_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode filter(SRef<SolAR::datastructure::Image> const input, SRef<SolAR::datastructure::Image>& output)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcIImageFilter::grpcIImageFilterService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIImageFilter::IImageFilter_grpcProxy>
{
  static constexpr const char * UUID = "77943853-dc6d-404d-a4bb-f000ce15b910";
  static constexpr const char * NAME = "IImageFilter_grpcProxy";
  static constexpr const char * DESCRIPTION = "IImageFilter_grpcProxy grpc client proxy component";
};


#endif