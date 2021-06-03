// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IUNPROJECT_GRPCPROXY_H
#define IUNPROJECT_GRPCPROXY_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/geom/IUnproject.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIUnprojectService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyIUnproject {

class IUnproject_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::geom::IUnproject {
  public:
    IUnproject_grpcProxy();
    ~IUnproject_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    void setCameraParameters(SolAR::datastructure::CamCalibration const& intrinsicParams, SolAR::datastructure::CamDistortion const& distorsionParams)     override;
    SolAR::FrameworkReturnCode unproject(std::vector<SolAR::datastructure::Point2Df> const& imagePoints, std::vector<SolAR::datastructure::Point3Df>& worldPoints, SolAR::datastructure::Transform3Df const& pose)     override;
    SolAR::FrameworkReturnCode unproject(std::vector<SolAR::datastructure::Keypoint> const& imageKeypoints, std::vector<SolAR::datastructure::Point3Df>& worldPoints, SolAR::datastructure::Transform3Df const& pose)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcIUnproject::grpcIUnprojectService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIUnproject::IUnproject_grpcProxy>
{
  static constexpr const char * UUID = "1aa49c3c-7f9e-416a-a880-37221247fc99";
  static constexpr const char * NAME = "IUnproject_grpcProxy";
  static constexpr const char * DESCRIPTION = "IUnproject_grpcProxy grpc client proxy component";
};


#endif