// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef I2DTRANSFORMFINDER_GRPCPROXY_H
#define I2DTRANSFORMFINDER_GRPCPROXY_H
#include "/home/ccutullic/Dev/SolAR/core/SolARFramework/interfaces/api/solver/pose/I2DTransformFinder.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcI2DTransformFinderService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

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
    std::unique_ptr<::grpcI2DTransformFinder::grpcI2DTransformFinderService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyI2DTransformFinder::I2DTransformFinder_grpcProxy>
{
  static constexpr const char * UUID = "92cf96f7-3e36-4ac9-bca6-9b351c2b621f";
  static constexpr const char * NAME = "I2DTransformFinder_grpcProxy";
  static constexpr const char * DESCRIPTION = "I2DTransformFinder_grpcProxy grpc client proxy component";
};


#endif