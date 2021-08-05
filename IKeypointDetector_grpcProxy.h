// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IKEYPOINTDETECTOR_GRPCPROXY_H
#define IKEYPOINTDETECTOR_GRPCPROXY_H
#include "/home/ccutullic/Dev/SolAR/core/SolARFramework/interfaces/api/features/IKeypointDetector.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIKeypointDetectorService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyIKeypointDetector {

class IKeypointDetector_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::features::IKeypointDetector {
  public:
    IKeypointDetector_grpcProxy();
    ~IKeypointDetector_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    void setType(SolAR::api::features::IKeypointDetector::KeypointDetectorType type)     override;
    SolAR::api::features::IKeypointDetector::KeypointDetectorType getType()     override;
    void detect(SRef<SolAR::datastructure::Image> const image, std::vector<SolAR::datastructure::Keypoint>& keypoints)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcIKeypointDetector::grpcIKeypointDetectorService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIKeypointDetector::IKeypointDetector_grpcProxy>
{
  static constexpr const char * UUID = "25098a22-91d4-41be-961d-b6afe2a96f75";
  static constexpr const char * NAME = "IKeypointDetector_grpcProxy";
  static constexpr const char * DESCRIPTION = "IKeypointDetector_grpcProxy grpc client proxy component";
};


#endif