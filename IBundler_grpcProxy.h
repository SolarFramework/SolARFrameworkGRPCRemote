// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IBUNDLER_GRPCPROXY_H
#define IBUNDLER_GRPCPROXY_H
#include "api/solver/map/IBundler.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIBundlerService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIBundler {

class IBundler_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::solver::map::IBundler {
  public:
    IBundler_grpcProxy();
    ~IBundler_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode setMap(SRef<SolAR::datastructure::Map> const map)     override;
    double bundleAdjustment(SolAR::datastructure::CamCalibration& K, SolAR::datastructure::CamDistortion& D, std::vector<uint32_t> const& selectKeyframes)     override;
    double optimizeSim3(SolAR::datastructure::CamCalibration& K1, SolAR::datastructure::CamCalibration& K2, SRef<SolAR::datastructure::Keyframe> const& keyframe1, SRef<SolAR::datastructure::Keyframe> const& keyframe2, std::vector<SolAR::datastructure::DescriptorMatch> const& matches, std::vector<SolAR::datastructure::Point3Df> const& pts3D1, std::vector<SolAR::datastructure::Point3Df> const& pts3D2, SolAR::datastructure::Transform3Df& pose)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIBundler::grpcIBundlerService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIBundler::IBundler_grpcProxy>
{
  static constexpr const char * UUID = "258dfecc-850e-4ec7-9b25-77c5bca8694a";
  static constexpr const char * NAME = "IBundler_grpcProxy";
  static constexpr const char * DESCRIPTION = "IBundler_grpcProxy grpc client proxy component";
};


#endif