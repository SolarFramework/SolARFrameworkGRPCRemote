// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IDESCRIPTORMATCHERREGION_GRPCPROXY_H
#define IDESCRIPTORMATCHERREGION_GRPCPROXY_H
#include "Dev/SolAR/SolARFramework/interfaces/api/features/IDescriptorMatcherRegion.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIDescriptorMatcherRegionService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIDescriptorMatcherRegion {

class IDescriptorMatcherRegion_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::features::IDescriptorMatcherRegion {
  public:
    IDescriptorMatcherRegion_grpcProxy();
    ~IDescriptorMatcherRegion_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode match(SRef<SolAR::datastructure::DescriptorBuffer> const descriptors1, SRef<SolAR::datastructure::DescriptorBuffer> const descriptors2, std::vector<SolAR::datastructure::Point2Df> const& points2D1, std::vector<SolAR::datastructure::Point2Df> const& points2D2, std::vector<SolAR::datastructure::DescriptorMatch>& matches, float const radius, float const matchingDistanceMax)     override;
    SolAR::FrameworkReturnCode match(std::vector<SolAR::datastructure::Point2Df> const& points2D, std::vector<SRef<SolAR::datastructure::DescriptorBuffer>> const& descriptors, SRef<SolAR::datastructure::Frame> const frame, std::vector<SolAR::datastructure::DescriptorMatch>& matches, float const radius, float const matchingDistanceMax)     override;
    SolAR::FrameworkReturnCode match(SRef<SolAR::datastructure::Frame> const currentFrame, SRef<SolAR::datastructure::Frame> const lastFrame, std::vector<SolAR::datastructure::DescriptorMatch>& matches, float const radius, float const matchingDistanceMax)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIDescriptorMatcherRegion::grpcIDescriptorMatcherRegionService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIDescriptorMatcherRegion::IDescriptorMatcherRegion_grpcProxy>
{
  static constexpr const char * UUID = "92474130-2e1c-471c-aafe-c84c5144552f";
  static constexpr const char * NAME = "IDescriptorMatcherRegion_grpcProxy";
  static constexpr const char * DESCRIPTION = "IDescriptorMatcherRegion_grpcProxy grpc client proxy component";
};


#endif