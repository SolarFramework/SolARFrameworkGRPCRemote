// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef I2DTRANSFORM_GRPCPROXY_H
#define I2DTRANSFORM_GRPCPROXY_H
#include "/home/ccutullic/Dev/SolAR/core/SolARFramework/interfaces/api/geom/I2DTransform.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcI2DTransformService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyI2DTransform {

class I2DTransform_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::geom::I2DTransform {
  public:
    I2DTransform_grpcProxy();
    ~I2DTransform_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode transform(std::vector<SolAR::datastructure::Point2Df> const& inputPoints, SolAR::datastructure::Transform2Df const& transformation, std::vector<SolAR::datastructure::Point2Df>& outputPoints)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcI2DTransform::grpcI2DTransformService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyI2DTransform::I2DTransform_grpcProxy>
{
  static constexpr const char * UUID = "2e9a7449-af74-48b0-a85a-f76c5491dd72";
  static constexpr const char * NAME = "I2DTransform_grpcProxy";
  static constexpr const char * DESCRIPTION = "I2DTransform_grpcProxy grpc client proxy component";
};


#endif