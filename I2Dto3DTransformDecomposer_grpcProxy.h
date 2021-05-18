// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef I2DTO3DTRANSFORMDECOMPOSER_GRPCPROXY_H
#define I2DTO3DTRANSFORMDECOMPOSER_GRPCPROXY_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/solver/pose/I2Dto3DTransformDecomposer.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcI2Dto3DTransformDecomposerService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyI2Dto3DTransformDecomposer {

class I2Dto3DTransformDecomposer_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::solver::pose::I2Dto3DTransformDecomposer {
  public:
    I2Dto3DTransformDecomposer_grpcProxy();
    ~I2Dto3DTransformDecomposer_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    void setCameraParameters(SolAR::datastructure::CamCalibration const& intrinsicParams, SolAR::datastructure::CamDistortion const& distorsionParams)     override;
    bool decompose(SolAR::datastructure::Transform2Df const& F, std::vector<SolAR::datastructure::Transform3Df>& decomposedPoses)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcI2Dto3DTransformDecomposer::grpcI2Dto3DTransformDecomposerService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyI2Dto3DTransformDecomposer::I2Dto3DTransformDecomposer_grpcProxy>
{
  static constexpr const char * UUID = "1947bad5-c100-446d-828b-fe0d6392df96";
  static constexpr const char * NAME = "I2Dto3DTransformDecomposer_grpcProxy";
  static constexpr const char * DESCRIPTION = "I2Dto3DTransformDecomposer_grpcProxy grpc client proxy component";
};


#endif