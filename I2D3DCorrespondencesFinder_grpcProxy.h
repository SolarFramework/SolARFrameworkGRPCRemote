// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef I2D3DCORRESPONDENCESFINDER_GRPCPROXY_H
#define I2D3DCORRESPONDENCESFINDER_GRPCPROXY_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/solver/pose/I2D3DCorrespondencesFinder.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcI2D3DCorrespondencesFinderService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyI2D3DCorrespondencesFinder {

class I2D3DCorrespondencesFinder_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::solver::pose::I2D3DCorrespondencesFinder {
  public:
    I2D3DCorrespondencesFinder_grpcProxy();
    ~I2D3DCorrespondencesFinder_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode find(SRef<SolAR::datastructure::Frame> const lastFrame, SRef<SolAR::datastructure::Frame> const currentFrame, std::vector<SolAR::datastructure::DescriptorMatch> const& current_matches, std::vector<SolAR::datastructure::Point3Df>& shared_3dpoint, std::vector<SolAR::datastructure::Point2Df>& shared_2dpoint, std::vector<std::pair<uint32_t,SRef<SolAR::datastructure::CloudPoint>>>& corres2D3D, std::vector<SolAR::datastructure::DescriptorMatch>& found_matches, std::vector<SolAR::datastructure::DescriptorMatch>& remaining_matches)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcI2D3DCorrespondencesFinder::grpcI2D3DCorrespondencesFinderService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyI2D3DCorrespondencesFinder::I2D3DCorrespondencesFinder_grpcProxy>
{
  static constexpr const char * UUID = "9840f407-3762-485f-bff4-e26fbad7e7a2";
  static constexpr const char * NAME = "I2D3DCorrespondencesFinder_grpcProxy";
  static constexpr const char * DESCRIPTION = "I2D3DCorrespondencesFinder_grpcProxy grpc client proxy component";
};


#endif