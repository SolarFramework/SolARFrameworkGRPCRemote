// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef I2DTO3DTRANSFORMDECOMPOSERVALIDATION_GRPCPROXY_H
#define I2DTO3DTRANSFORMDECOMPOSERVALIDATION_GRPCPROXY_H
#include "/mnt/c/Users/nduong/bcom/projects/Argo/SolARFramework/SolAR/core/SolARFramework/interfaces/api/solver/pose/I2Dto3DTransformDecomposerValidation.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcI2Dto3DTransformDecomposerValidationService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

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
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcI2Dto3DTransformDecomposerValidation::grpcI2Dto3DTransformDecomposerValidationService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyI2Dto3DTransformDecomposerValidation::I2Dto3DTransformDecomposerValidation_grpcProxy>
{
  static constexpr const char * UUID = "21d1a9c4-c018-4b9a-99b8-68055b82c869";
  static constexpr const char * NAME = "I2Dto3DTransformDecomposerValidation_grpcProxy";
  static constexpr const char * DESCRIPTION = "I2Dto3DTransformDecomposerValidation_grpcProxy grpc client proxy component";
};


#endif