// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IHOMOGRAPHYVALIDATION_GRPCPROXY_H
#define IHOMOGRAPHYVALIDATION_GRPCPROXY_H
#include "/mnt/c/Users/nduong/bcom/projects/Argo/SolARFramework/SolAR/core/SolARFramework/interfaces/api/solver/pose/IHomographyValidation.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIHomographyValidationService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIHomographyValidation {

class IHomographyValidation_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::solver::pose::IHomographyValidation {
  public:
    IHomographyValidation_grpcProxy();
    ~IHomographyValidation_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    bool isValid(std::vector<SolAR::datastructure::Point2Df> const& ref2DSquaredMarkerCorners, std::vector<SolAR::datastructure::Point2Df> const& projected2DSquaredMarkerCorners)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIHomographyValidation::grpcIHomographyValidationService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIHomographyValidation::IHomographyValidation_grpcProxy>
{
  static constexpr const char * UUID = "55221e5e-67cc-487c-a277-1d56e3637e42";
  static constexpr const char * NAME = "IHomographyValidation_grpcProxy";
  static constexpr const char * DESCRIPTION = "IHomographyValidation_grpcProxy grpc client proxy component";
};


#endif