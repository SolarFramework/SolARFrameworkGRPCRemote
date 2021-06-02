// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef I2DTO3DTRANSFORMDECOMPOSERVALIDATION_GRPCPROXY_H
#define I2DTO3DTRANSFORMDECOMPOSERVALIDATION_GRPCPROXY_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/solver/pose/I2Dto3DTransformDecomposerValidation.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcI2Dto3DTransformDecomposerValidationService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyI2Dto3DTransformDecomposerValidation {

class I2Dto3DTransformDecomposerValidation_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::solver::pose::I2Dto3DTransformDecomposerValidation {
  public:
    I2Dto3DTransformDecomposerValidation_grpcProxy();
    ~I2Dto3DTransformDecomposerValidation_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    void testMethod()     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcI2Dto3DTransformDecomposerValidation::grpcI2Dto3DTransformDecomposerValidationService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyI2Dto3DTransformDecomposerValidation::I2Dto3DTransformDecomposerValidation_grpcProxy>
{
  static constexpr const char * UUID = "0ccb2b0a-0642-44ee-a84a-4546336cd823";
  static constexpr const char * NAME = "I2Dto3DTransformDecomposerValidation_grpcProxy";
  static constexpr const char * DESCRIPTION = "I2Dto3DTransformDecomposerValidation_grpcProxy grpc client proxy component";
};


#endif