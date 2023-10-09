// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IUNPROJECT_GRPCPROXY_H
#define IUNPROJECT_GRPCPROXY_H
#include "Dev/SolAR/SolARFramework/interfaces/api/geom/IUnproject.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIUnprojectService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIUnproject {

class IUnproject_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::geom::IUnproject {
  public:
    IUnproject_grpcProxy();
    ~IUnproject_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode unproject(std::vector<SolAR::datastructure::Point2Df> const& imagePoints, SolAR::datastructure::Transform3Df const& pose, SolAR::datastructure::CameraParameters const& camParams, std::vector<SolAR::datastructure::Point3Df>& worldPoints)     override;
    SolAR::FrameworkReturnCode unproject(std::vector<SolAR::datastructure::Keypoint> const& imageKeypoints, SolAR::datastructure::Transform3Df const& pose, SolAR::datastructure::CameraParameters const& camParams, std::vector<SolAR::datastructure::Point3Df>& worldPoints)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIUnproject::grpcIUnprojectService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIUnproject::IUnproject_grpcProxy>
{
  static constexpr const char * UUID = "7e71a7db-6a67-4c28-ad40-1922370fdc00";
  static constexpr const char * NAME = "IUnproject_grpcProxy";
  static constexpr const char * DESCRIPTION = "IUnproject_grpcProxy grpc client proxy component";
};


#endif