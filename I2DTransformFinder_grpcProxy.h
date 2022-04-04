// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef I2DTRANSFORMFINDER_GRPCPROXY_H
#define I2DTRANSFORMFINDER_GRPCPROXY_H
#include "/mnt/c/Users/nduong/bcom/projects/Argo/SolARFramework/SolAR/core/SolARFramework/interfaces/api/solver/pose/I2DTransformFinder.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcI2DTransformFinderService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyI2DTransformFinder {

class I2DTransformFinder_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::solver::pose::I2DTransformFinder {
  public:
    I2DTransformFinder_grpcProxy();
    ~I2DTransformFinder_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::api::solver::pose::Transform2DFinder::RetCode find(std::vector<SolAR::datastructure::Point2Df> const& srcPoints, std::vector<SolAR::datastructure::Point2Df> const& dstPoints, SolAR::datastructure::Transform2Df& fundamental)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcI2DTransformFinder::grpcI2DTransformFinderService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyI2DTransformFinder::I2DTransformFinder_grpcProxy>
{
  static constexpr const char * UUID = "bb9d839b-4304-44f3-ac09-b6d965e65b6e";
  static constexpr const char * NAME = "I2DTransformFinder_grpcProxy";
  static constexpr const char * DESCRIPTION = "I2DTransformFinder_grpcProxy grpc client proxy component";
};


#endif