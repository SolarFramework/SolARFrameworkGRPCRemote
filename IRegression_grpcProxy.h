// GRPC Proxy Class Header generated with xpcf_grpc_gen


#ifndef IREGRESSION_GRPCPROXY_H
#define IREGRESSION_GRPCPROXY_H
#include "api/reloc/IRegression.h"
#include <xpcf/component/ConfigurableBase.h>
#include <memory>
#include <string>
#include "grpcIRegressionService.grpc.pb.h"
#include <grpc/grpc.h>
#include <grpc++/channel.h>

namespace org::bcom::xpcf::grpc::proxyIRegression {

class IRegression_grpcProxy:  public org::bcom::xpcf::ConfigurableBase, virtual public SolAR::api::reloc::IRegression {
  public:
    IRegression_grpcProxy();
    ~IRegression_grpcProxy() override = default;
    void unloadComponent () override final;
    org::bcom::xpcf::XPCFErrorCode onConfigured() override;

    void setCameraParameters(SolAR::datastructure::CamCalibration const& intrinsicParams, SolAR::datastructure::CamDistortion const& distorsionParams)     override;
    SolAR::FrameworkReturnCode add(std::vector<SRef<SolAR::datastructure::DescriptorBuffer>> const& descriptors, std::vector<SolAR::datastructure::Point3Df> const& points3D)     override;
    SolAR::FrameworkReturnCode regress(SRef<SolAR::datastructure::Frame> const& frame, std::vector<SolAR::datastructure::Point2Df>& points2D, std::vector<SolAR::datastructure::Point3Df>& points3D)     override;
    SolAR::FrameworkReturnCode update(std::vector<bool>& inliers, SolAR::datastructure::Transform3Df& cameraPose)     override;
    SolAR::FrameworkReturnCode loadModel()     override;
    std::vector<int> getTrainingStatus()     override;
    int getNumActiveLeaves()     override;
    int getNumPassiveLeaves()     override;


  private:
    std::string m_channelUrl;
    uint32_t m_channelCredentials;
    std::shared_ptr<::grpc::Channel> m_channel;
    std::unique_ptr<::grpcIRegression::grpcIRegressionService::Stub> m_grpcStub;

};

}


template <> struct org::bcom::xpcf::ComponentTraits<org::bcom::xpcf::grpc::proxyIRegression::IRegression_grpcProxy>
{
  static constexpr const char * UUID = "8dc16e57-5f95-474b-8ff8-bb7570e02230";
  static constexpr const char * NAME = "IRegression_grpcProxy";
  static constexpr const char * DESCRIPTION = "IRegression_grpcProxy grpc client proxy component";
};


#endif