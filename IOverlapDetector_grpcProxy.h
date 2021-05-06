// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IOVERLAPDETECTOR_GRPCPROXY_H
#define IOVERLAPDETECTOR_GRPCPROXY_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/loop/IOverlapDetector.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIOverlapDetectorService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyIOverlapDetector {

class IOverlapDetector_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::loop::IOverlapDetector {
  public:
    IOverlapDetector_grpcProxy();
    ~IOverlapDetector_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    void setCameraParameters(SolAR::datastructure::CamCalibration const& intrinsicParams, SolAR::datastructure::CamDistortion const& distortionParams)     override;
    SolAR::FrameworkReturnCode detect(SRef<SolAR::api::solver::map::IMapper> const globalMap, SRef<SolAR::api::solver::map::IMapper> const floatingMap, SolAR::datastructure::Transform3Df& sim3Transform, std::vector<std::pair<uint32_t,uint32_t>>& cpOverlapIndices)     const     override;
    SolAR::FrameworkReturnCode detect(SRef<SolAR::api::solver::map::IMapper> const globalMap, SRef<SolAR::api::solver::map::IMapper> const floatingMap, std::vector<SolAR::datastructure::Transform3Df>& sim3Transform, std::vector<std::pair<uint32_t,uint32_t>>& overlapIndices, std::vector<double>& scores)     const     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcIOverlapDetector::grpcIOverlapDetectorService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIOverlapDetector::IOverlapDetector_grpcProxy>
{
  static constexpr const char * UUID = "6a21545a-93c8-4025-8119-82a07efee091";
  static constexpr const char * NAME = "IOverlapDetector_grpcProxy";
  static constexpr const char * DESCRIPTION = "IOverlapDetector_grpcProxy grpc client proxy component";
};


#endif