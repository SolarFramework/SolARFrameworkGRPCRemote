// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IKEYPOINTDETECTORREGION_GRPCPROXY_H
#define IKEYPOINTDETECTORREGION_GRPCPROXY_H
#include "api/features/IKeypointDetectorRegion.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIKeypointDetectorRegionService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIKeypointDetectorRegion {

class IKeypointDetectorRegion_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::features::IKeypointDetectorRegion {
  public:
    IKeypointDetectorRegion_grpcProxy();
    ~IKeypointDetectorRegion_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    void setType(SolAR::api::features::IKeypointDetector::KeypointDetectorType type)     override;
    SolAR::api::features::IKeypointDetector::KeypointDetectorType getType()     override;
    void detect(SRef<SolAR::datastructure::Image> const image, std::vector<SolAR::datastructure::Point2Df> const& contours, std::vector<SolAR::datastructure::Keypoint>& keypoints)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIKeypointDetectorRegion::grpcIKeypointDetectorRegionService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIKeypointDetectorRegion::IKeypointDetectorRegion_grpcProxy>
{
  static constexpr const char * UUID = "984ae965-bc03-42d4-8acd-7dcb4e9ac4aa";
  static constexpr const char * NAME = "IKeypointDetectorRegion_grpcProxy";
  static constexpr const char * DESCRIPTION = "IKeypointDetectorRegion_grpcProxy grpc client proxy component";
};


#endif