// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef I3DPOINTSVIEWER_GRPCPROXY_H
#define I3DPOINTSVIEWER_GRPCPROXY_H
#include "/home/solar/Dev/SolAR/core/SolARFramework/interfaces/api/display/I3DPointsViewer.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcI3DPointsViewerService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyI3DPointsViewer {

class I3DPointsViewer_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::display::I3DPointsViewer {
  public:
    I3DPointsViewer_grpcProxy();
    ~I3DPointsViewer_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode display(std::vector<SRef<SolAR::datastructure::CloudPoint>> const& points, SolAR::datastructure::Transform3Df const& pose, std::vector<SolAR::datastructure::Transform3Df> const& keyframePoses, std::vector<SolAR::datastructure::Transform3Df> const& framePoses, std::vector<SRef<SolAR::datastructure::CloudPoint>> const& points2, std::vector<SolAR::datastructure::Transform3Df> const& keyframePoses2)     override;
    SolAR::FrameworkReturnCode display(SRef<SolAR::datastructure::PointCloud> const points, SolAR::datastructure::Transform3Df const& pose, std::vector<SolAR::datastructure::Transform3Df> const& keyframePoses, std::vector<SolAR::datastructure::Transform3Df> const& framePoses, SRef<SolAR::datastructure::PointCloud> const points2, std::vector<SolAR::datastructure::Transform3Df> const& keyframePoses2)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcI3DPointsViewer::grpcI3DPointsViewerService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyI3DPointsViewer::I3DPointsViewer_grpcProxy>
{
  static constexpr const char * UUID = "423cd9a6-f93a-4e1b-88f0-0762c1db5db3";
  static constexpr const char * NAME = "I3DPointsViewer_grpcProxy";
  static constexpr const char * DESCRIPTION = "I3DPointsViewer_grpcProxy grpc client proxy component";
};


#endif