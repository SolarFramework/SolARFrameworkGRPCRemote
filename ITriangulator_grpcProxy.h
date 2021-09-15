// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef ITRIANGULATOR_GRPCPROXY_H
#define ITRIANGULATOR_GRPCPROXY_H
#include "/home/solar/Dev/SolAR/core/SolARFramework/interfaces/api/solver/map/ITriangulator.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcITriangulatorService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyITriangulator {

class ITriangulator_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::solver::map::ITriangulator {
  public:
    ITriangulator_grpcProxy();
    ~ITriangulator_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    void setCameraParameters(SolAR::datastructure::CamCalibration const& intrinsicParams, SolAR::datastructure::CamDistortion const& distorsionParams)     override;
    double triangulate(std::vector<SolAR::datastructure::Point2Df> const& pointsView1, std::vector<SolAR::datastructure::Point2Df> const& pointView2, std::vector<SolAR::datastructure::DescriptorMatch> const& matches, std::pair<uint32_t,uint32_t> const& working_views, SolAR::datastructure::Transform3Df const& poseView1, SolAR::datastructure::Transform3Df const& poseView2, std::vector<SRef<SolAR::datastructure::CloudPoint>>& pcloud)     override;
    double triangulate(std::vector<SolAR::datastructure::Keypoint> const& keypointsView1, std::vector<SolAR::datastructure::Keypoint> const& keypointsView2, std::vector<SolAR::datastructure::DescriptorMatch> const& matches, std::pair<uint32_t,uint32_t> const& working_views, SolAR::datastructure::Transform3Df const& poseView1, SolAR::datastructure::Transform3Df const& poseView2, std::vector<SRef<SolAR::datastructure::CloudPoint>>& pcloud)     override;
    double triangulate(std::vector<SolAR::datastructure::Keypoint> const& keypointsView1, std::vector<SolAR::datastructure::Keypoint> const& keypointsView2, SRef<SolAR::datastructure::DescriptorBuffer> const& descriptor1, SRef<SolAR::datastructure::DescriptorBuffer> const& descriptor2, std::vector<SolAR::datastructure::DescriptorMatch> const& matches, std::pair<uint32_t,uint32_t> const& working_views, SolAR::datastructure::Transform3Df const& poseView1, SolAR::datastructure::Transform3Df const& poseView2, std::vector<SRef<SolAR::datastructure::CloudPoint>>& pcloud)     override;
    double triangulate(SRef<SolAR::datastructure::Frame> frame1, SRef<SolAR::datastructure::Frame> frame2, std::vector<SolAR::datastructure::DescriptorMatch> const& matches, std::pair<uint32_t,uint32_t> const& working_views, std::vector<SRef<SolAR::datastructure::CloudPoint>>& pcloud, bool const& onlyDepth)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcITriangulator::grpcITriangulatorService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyITriangulator::ITriangulator_grpcProxy>
{
  static constexpr const char * UUID = "28ca63ea-fb82-469a-806d-dd497dcc6511";
  static constexpr const char * NAME = "ITriangulator_grpcProxy";
  static constexpr const char * DESCRIPTION = "ITriangulator_grpcProxy grpc client proxy component";
};


#endif