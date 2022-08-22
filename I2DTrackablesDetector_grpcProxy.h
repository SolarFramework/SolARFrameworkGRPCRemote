// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef I2DTRACKABLESDETECTOR_GRPCPROXY_H
#define I2DTRACKABLESDETECTOR_GRPCPROXY_H
#include "api/features/I2DTrackablesDetector.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcI2DTrackablesDetectorService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyI2DTrackablesDetector {

class I2DTrackablesDetector_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::features::I2DTrackablesDetector {
  public:
    I2DTrackablesDetector_grpcProxy();
    ~I2DTrackablesDetector_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode setTrackables(std::vector<SRef<SolAR::datastructure::Trackable>> const trackables)     override;
    SolAR::FrameworkReturnCode detect(SRef<SolAR::datastructure::Image> const image, std::vector<std::vector<SolAR::datastructure::Point2Df>>& corners)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcI2DTrackablesDetector::grpcI2DTrackablesDetectorService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyI2DTrackablesDetector::I2DTrackablesDetector_grpcProxy>
{
  static constexpr const char * UUID = "b62759a5-069a-40b0-846e-71f6adc9cb5e";
  static constexpr const char * NAME = "I2DTrackablesDetector_grpcProxy";
  static constexpr const char * DESCRIPTION = "I2DTrackablesDetector_grpcProxy grpc client proxy component";
};


#endif