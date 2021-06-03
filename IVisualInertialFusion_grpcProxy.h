// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IVISUALINERTIALFUSION_GRPCPROXY_H
#define IVISUALINERTIALFUSION_GRPCPROXY_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/fusion/IVisualInertialFusion.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIVisualInertialFusionService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyIVisualInertialFusion {

class IVisualInertialFusion_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::fusion::IVisualInertialFusion {
  public:
    IVisualInertialFusion_grpcProxy();
    ~IVisualInertialFusion_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    void init(SolAR::api::fusion::VisionData const& initialVisionData)     override;
    void addInertialData(SolAR::api::fusion::InertialData const& inertialData)     override;
    void addVisionData(SolAR::api::fusion::VisionData const& visionData)     override;
    SolAR::FrameworkReturnCode process(SolAR::datastructure::Transform3Df& outputData)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcIVisualInertialFusion::grpcIVisualInertialFusionService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIVisualInertialFusion::IVisualInertialFusion_grpcProxy>
{
  static constexpr const char * UUID = "e90fc4aa-9c5b-4c70-851c-53ed8e63fa08";
  static constexpr const char * NAME = "IVisualInertialFusion_grpcProxy";
  static constexpr const char * DESCRIPTION = "IVisualInertialFusion_grpcProxy grpc client proxy component";
};


#endif