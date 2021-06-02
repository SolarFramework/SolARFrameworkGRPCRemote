// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IMAPFILTER_GRPCPROXY_H
#define IMAPFILTER_GRPCPROXY_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/solver/map/IMapFilter.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIMapFilterService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

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
    std::unique_ptr<::grpcIMapFilter::grpcIMapFilterService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIMapFilter::IMapFilter_grpcProxy>
{
  static constexpr const char * UUID = "06dd7c8b-d479-450e-bcbe-9ecf7e35f83a";
  static constexpr const char * NAME = "IMapFilter_grpcProxy";
  static constexpr const char * DESCRIPTION = "IMapFilter_grpcProxy grpc client proxy component";
};


#endif