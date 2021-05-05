// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IPROJECT_GRPCPROXY_H
#define IPROJECT_GRPCPROXY_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/geom/IProject.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIProjectService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyIProject {

class IProject_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::geom::IProject {
  public:
    IProject_grpcProxy();
    ~IProject_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    void setCameraParameters(SolAR::datastructure::CamCalibration const& intrinsicParams, SolAR::datastructure::CamDistortion const& distorsionParams)     override;
    SolAR::FrameworkReturnCode project(std::vector<SolAR::datastructure::Point3Df> const& inputPoints, std::vector<SolAR::datastructure::Point2Df>& imagePoints, SolAR::datastructure::Transform3Df const& pose)     override;
    SolAR::FrameworkReturnCode project(std::vector<SRef<SolAR::datastructure::CloudPoint>> const& inputPoints, std::vector<SolAR::datastructure::Point2Df>& imagePoints, SolAR::datastructure::Transform3Df const& pose)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcIProject::grpcIProjectService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIProject::IProject_grpcProxy>
{
  static constexpr const char * UUID = "da3dc412-e1c7-4ae0-be1e-d11487c3fc6f";
  static constexpr const char * NAME = "IProject_grpcProxy";
  static constexpr const char * DESCRIPTION = "IProject_grpcProxy grpc client proxy component";
};


#endif