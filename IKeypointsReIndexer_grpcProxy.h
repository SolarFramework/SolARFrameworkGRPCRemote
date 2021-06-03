// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IKEYPOINTSREINDEXER_GRPCPROXY_H
#define IKEYPOINTSREINDEXER_GRPCPROXY_H
#include "/home/christophe/Dev/SolAR/core/SolARFramework/interfaces/api/features/IKeypointsReIndexer.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIKeypointsReIndexerService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyIKeypointsReIndexer {

class IKeypointsReIndexer_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::features::IKeypointsReIndexer {
  public:
    IKeypointsReIndexer_grpcProxy();
    ~IKeypointsReIndexer_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode reindex(std::vector<SolAR::datastructure::Keypoint> const& keypoints1, std::vector<SolAR::datastructure::Keypoint> const& keypoints2, std::vector<SolAR::datastructure::DescriptorMatch> const& matches, std::vector<SolAR::datastructure::Point2Df>& matchedKeypoints1, std::vector<SolAR::datastructure::Point2Df>& matchedKeypoints2)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcIKeypointsReIndexer::grpcIKeypointsReIndexerService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIKeypointsReIndexer::IKeypointsReIndexer_grpcProxy>
{
  static constexpr const char * UUID = "7ee33909-36c6-4be0-ace7-ea1352f06170";
  static constexpr const char * NAME = "IKeypointsReIndexer_grpcProxy";
  static constexpr const char * DESCRIPTION = "IKeypointsReIndexer_grpcProxy grpc client proxy component";
};


#endif