// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef I3D3DCORRESPONDENCESFINDER_GRPCPROXY_H
#define I3D3DCORRESPONDENCESFINDER_GRPCPROXY_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/solver/pose/I3D3DCorrespondencesFinder.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcI3D3DCorrespondencesFinderService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyI3D3DCorrespondencesFinder {

class I3D3DCorrespondencesFinder_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::solver::pose::I3D3DCorrespondencesFinder {
  public:
    I3D3DCorrespondencesFinder_grpcProxy();
    ~I3D3DCorrespondencesFinder_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode find(SRef<SolAR::datastructure::Keyframe> const firstKeyframe, SRef<SolAR::datastructure::Keyframe> const secondKeyframe, std::vector<SolAR::datastructure::DescriptorMatch> const& current_matches, std::vector<SRef<SolAR::datastructure::CloudPoint>>& firstCloudPoints, std::vector<SRef<SolAR::datastructure::CloudPoint>>& secondCloudPoints, std::vector<SolAR::datastructure::DescriptorMatch>& found_matches, std::vector<SolAR::datastructure::DescriptorMatch>& remaining_matches)     override;
    SolAR::FrameworkReturnCode find(SRef<SolAR::datastructure::Keyframe> const firstKeyframe, SRef<SolAR::datastructure::Keyframe> const secondKeyframe, std::vector<SolAR::datastructure::DescriptorMatch> const& current_matches, std::vector<uint32_t>& firstCloudPointsIndices, std::vector<uint32_t>& secondCloudPointsIndices, std::vector<SolAR::datastructure::DescriptorMatch>& found_matches)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcI3D3DCorrespondencesFinder::grpcI3D3DCorrespondencesFinderService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyI3D3DCorrespondencesFinder::I3D3DCorrespondencesFinder_grpcProxy>
{
  static constexpr const char * UUID = "5ca3c70e-5d05-4d6c-a9c6-5a25daf21940";
  static constexpr const char * NAME = "I3D3DCorrespondencesFinder_grpcProxy";
  static constexpr const char * DESCRIPTION = "I3D3DCorrespondencesFinder_grpcProxy grpc client proxy component";
};


#endif