// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IIMAGEFILTER_GRPCPROXY_H
#define IIMAGEFILTER_GRPCPROXY_H
#include "api/image/IImageFilter.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIImageFilterService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

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
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIImageFilter::grpcIImageFilterService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIImageFilter::IImageFilter_grpcProxy>
{
  static constexpr const char * UUID = "4b446acb-eb14-4f06-952d-722dd21ee4da";
  static constexpr const char * NAME = "IImageFilter_grpcProxy";
  static constexpr const char * DESCRIPTION = "IImageFilter_grpcProxy grpc client proxy component";
};


#endif