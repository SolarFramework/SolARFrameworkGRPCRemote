// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef ICORNERREFINEMENT_GRPCPROXY_H
#define ICORNERREFINEMENT_GRPCPROXY_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/features/ICornerRefinement.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcICornerRefinementService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyICornerRefinement {

class ICornerRefinement_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::features::ICornerRefinement {
  public:
    ICornerRefinement_grpcProxy();
    ~ICornerRefinement_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    void refine(SRef<SolAR::datastructure::Image> const image, std::vector<SolAR::datastructure::Point2Df>& corners)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcICornerRefinement::grpcICornerRefinementService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyICornerRefinement::ICornerRefinement_grpcProxy>
{
  static constexpr const char * UUID = "dcda104f-0730-4869-90cc-e57dd6c31e85";
  static constexpr const char * NAME = "ICornerRefinement_grpcProxy";
  static constexpr const char * DESCRIPTION = "ICornerRefinement_grpcProxy grpc client proxy component";
};


#endif