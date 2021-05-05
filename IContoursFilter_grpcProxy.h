// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef ICONTOURSFILTER_GRPCPROXY_H
#define ICONTOURSFILTER_GRPCPROXY_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/features/IContoursFilter.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIContoursFilterService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyIContoursFilter {

class IContoursFilter_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::features::IContoursFilter {
  public:
    IContoursFilter_grpcProxy();
    ~IContoursFilter_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode filter(std::vector<SolAR::datastructure::Contour2Df> const& inContours, std::vector<SolAR::datastructure::Contour2Df>& outContours)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcIContoursFilter::grpcIContoursFilterService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIContoursFilter::IContoursFilter_grpcProxy>
{
  static constexpr const char * UUID = "9cb93a3a-b62b-4788-90f2-ec84c73a4922";
  static constexpr const char * NAME = "IContoursFilter_grpcProxy";
  static constexpr const char * DESCRIPTION = "IContoursFilter_grpcProxy grpc client proxy component";
};


#endif