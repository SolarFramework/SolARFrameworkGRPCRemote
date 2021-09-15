// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef I3DTRANSFORM_GRPCPROXY_H
#define I3DTRANSFORM_GRPCPROXY_H
#include "/home/solar/Dev/SolAR/core/SolARFramework/interfaces/api/geom/I3DTransform.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcI3DTransformService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyI3DTransform {

class I3DTransform_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::geom::I3DTransform {
  public:
    I3DTransform_grpcProxy();
    ~I3DTransform_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode transform(std::vector<SolAR::datastructure::Point3Df> const& inputPoints, SolAR::datastructure::Transform3Df const& transformation, std::vector<SolAR::datastructure::Point3Df>& outputPoints)     override;
    SolAR::FrameworkReturnCode transformInPlace(SolAR::datastructure::Transform3Df const& transformation, SRef<SolAR::datastructure::Map> map)     override;
    SolAR::FrameworkReturnCode transformInPlace(SolAR::datastructure::Transform3Df const& transformation, std::vector<SRef<SolAR::datastructure::CloudPoint>>& pointCloud)     override;
    SolAR::FrameworkReturnCode transformInPlace(SolAR::datastructure::Transform3Df const& transformation, std::vector<SRef<SolAR::datastructure::Keyframe>>& keyframes)     override;
    SolAR::FrameworkReturnCode transformInPlace(SolAR::datastructure::Transform3Df const& transformation, SRef<SolAR::datastructure::PointCloud> pointCloud)     override;
    SolAR::FrameworkReturnCode transformInPlace(SolAR::datastructure::Transform3Df const& transformation, SRef<SolAR::datastructure::KeyframeCollection> keyframeCollection)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcI3DTransform::grpcI3DTransformService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyI3DTransform::I3DTransform_grpcProxy>
{
  static constexpr const char * UUID = "11c38e22-3e2d-4b14-b3fe-b3e7585b1a1a";
  static constexpr const char * NAME = "I3DTransform_grpcProxy";
  static constexpr const char * DESCRIPTION = "I3DTransform_grpcProxy grpc client proxy component";
};


#endif