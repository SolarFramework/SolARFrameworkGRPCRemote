// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IIMAGECONVERTOR_GRPCPROXY_H
#define IIMAGECONVERTOR_GRPCPROXY_H
#include "/home/ccutullic/Dev/SolAR/core/SolARFramework/interfaces/api/image/IImageConvertor.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIImageConvertorService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyIImageConvertor {

class IImageConvertor_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::image::IImageConvertor {
  public:
    IImageConvertor_grpcProxy();
    ~IImageConvertor_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode convert(SRef<SolAR::datastructure::Image> const imgSrc, SRef<SolAR::datastructure::Image>& imgDst)     override;
    SolAR::FrameworkReturnCode convert(SRef<SolAR::datastructure::Image> const imgSrc, SRef<SolAR::datastructure::Image>& imgDst, SolAR::datastructure::Image::ImageLayout destLayout)     override;
    SolAR::FrameworkReturnCode convertLookUpTable(SRef<SolAR::datastructure::Image> const imgSrc, SRef<SolAR::datastructure::Image>& imgDst)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcIImageConvertor::grpcIImageConvertorService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIImageConvertor::IImageConvertor_grpcProxy>
{
  static constexpr const char * UUID = "5482b0b3-e2f4-4145-bb77-a9e6efd97783";
  static constexpr const char * NAME = "IImageConvertor_grpcProxy";
  static constexpr const char * DESCRIPTION = "IImageConvertor_grpcProxy grpc client proxy component";
};


#endif