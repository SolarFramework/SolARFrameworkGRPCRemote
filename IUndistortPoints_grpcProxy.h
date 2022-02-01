// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IUNDISTORTPOINTS_GRPCPROXY_H
#define IUNDISTORTPOINTS_GRPCPROXY_H
#include "api/geom/IUndistortPoints.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include <map>
#include "grpcIUndistortPointsService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>
#include <xpcf/remoting/GrpcHelper.h>

namespace org::bcom::xpcf::grpc::proxyIUndistortPoints {

class IUndistortPoints_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::geom::IUndistortPoints {
  public:
    IUndistortPoints_grpcProxy();
    ~IUndistortPoints_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    SolAR::FrameworkReturnCode undistort(std::vector<SolAR::datastructure::Point2Df> const& inputPoints, std::vector<SolAR::datastructure::Point2Df>& outputPoints)     override;
    SolAR::FrameworkReturnCode undistort(std::vector<SolAR::datastructure::Keypoint> const& inputKeypoints, std::vector<SolAR::datastructure::Keypoint>& outputKeypoints)     override;
    void setCameraParameters(SolAR::datastructure::CamCalibration const& intrinsicParams, SolAR::datastructure::CamDistortion const& distorsionParams)     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    xpcf::grpcCompressionInfos m_serviceCompressionInfos;
    std::map<std::string, xpcf::grpcCompressionInfos> m_methodCompressionInfosMap;
    std::vector<std::string> m_grpcProxyCompressionConfig;
    std::unique_ptr<::grpcIUndistortPoints::grpcIUndistortPointsService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIUndistortPoints::IUndistortPoints_grpcProxy>
{
  static constexpr const char * UUID = "9833188d-b7c6-4600-9032-35b0c4119eea";
  static constexpr const char * NAME = "IUndistortPoints_grpcProxy";
  static constexpr const char * DESCRIPTION = "IUndistortPoints_grpcProxy grpc client proxy component";
};


#endif