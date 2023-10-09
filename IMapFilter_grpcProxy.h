// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IMAPFILTER_GRPCPROXY_H
#define IMAPFILTER_GRPCPROXY_H
#include "Dev/SolAR/SolARFramework/interfaces/api/solver/map/IMapFilter.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIMapFilterService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIMapFilter {

class IMapFilter_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::solver::map::IMapFilter {
  public:
    IMapFilter_grpcProxy();
    ~IMapFilter_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    void filter(SolAR::datastructure::Transform3Df const& pose1, SolAR::datastructure::Transform3Df const& pose2, std::vector<SRef<SolAR::datastructure::CloudPoint>> const& input, std::vector<SRef<SolAR::datastructure::CloudPoint>>& output)     override;
    void filter(SolAR::datastructure::Transform3Df const& pose1, SolAR::datastructure::Transform3Df const& pose2, std::vector<SRef<SolAR::datastructure::CloudPoint>> const& input, std::vector<SRef<SolAR::datastructure::CloudPoint>>& output, std::vector<int>& index)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIMapFilter::grpcIMapFilterService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIMapFilter::IMapFilter_grpcProxy>
{
  static constexpr const char * UUID = "eae4a8bc-3780-4f62-823a-b69d2b92c87e";
  static constexpr const char * NAME = "IMapFilter_grpcProxy";
  static constexpr const char * DESCRIPTION = "IMapFilter_grpcProxy grpc client proxy component";
};


#endif