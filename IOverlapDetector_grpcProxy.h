// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IOVERLAPDETECTOR_GRPCPROXY_H
#define IOVERLAPDETECTOR_GRPCPROXY_H
#include "Dev/SolAR/SolARFramework/interfaces/api/loop/IOverlapDetector.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIOverlapDetectorService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIOverlapDetector {

class IOverlapDetector_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::loop::IOverlapDetector {
  public:
    IOverlapDetector_grpcProxy();
    ~IOverlapDetector_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode detect(SRef<SolAR::datastructure::Map> const globalMap, SRef<SolAR::datastructure::Map> const floatingMap, SolAR::datastructure::Transform3Df& sim3Transform, std::vector<std::pair<uint32_t,uint32_t>>& cpOverlapIndices)     const     override;
    SolAR::FrameworkReturnCode detect(SRef<SolAR::datastructure::Map> const globalMap, SRef<SolAR::datastructure::Map> const floatingMap, std::vector<SolAR::datastructure::Transform3Df>& sim3Transform, std::vector<std::pair<uint32_t,uint32_t>>& overlapIndices, std::vector<double>& scores)     const     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIOverlapDetector::grpcIOverlapDetectorService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIOverlapDetector::IOverlapDetector_grpcProxy>
{
  static constexpr const char * UUID = "ccc5e7f8-2f9c-4b2f-a7f1-f151a9aa2191";
  static constexpr const char * NAME = "IOverlapDetector_grpcProxy";
  static constexpr const char * DESCRIPTION = "IOverlapDetector_grpcProxy grpc client proxy component";
};


#endif