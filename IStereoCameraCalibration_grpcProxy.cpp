// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IStereoCameraCalibration_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIStereoCameraCalibration::IStereoCameraCalibration_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIStereoCameraCalibration::IStereoCameraCalibration_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIStereoCameraCalibration {

IStereoCameraCalibration_grpcProxy::IStereoCameraCalibration_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IStereoCameraCalibration_grpcProxy>())
{
  declareInterface<SolAR::api::input::devices::IStereoCameraCalibration>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IStereoCameraCalibration_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IStereoCameraCalibration_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIStereoCameraCalibration::grpcIStereoCameraCalibrationService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IStereoCameraCalibration_grpcProxy::calibrate(std::vector<SRef<SolAR::datastructure::Image>> const& images1, std::vector<SRef<SolAR::datastructure::Image>> const& images2, SolAR::datastructure::CameraParameters const& camParams1, SolAR::datastructure::CameraParameters const& camParams2, SolAR::datastructure::Transform3Df& transformation, SolAR::datastructure::RectificationParameters& rectParams1, SolAR::datastructure::RectificationParameters& rectParams2)
{
  ::grpc::ClientContext context;
  ::grpcIStereoCameraCalibration::calibrateRequest reqIn;
  ::grpcIStereoCameraCalibration::calibrateResponse respOut;
  reqIn.set_images1(xpcf::serialize<std::vector<SRef<SolAR::datastructure::Image>>>(images1));
  reqIn.set_images2(xpcf::serialize<std::vector<SRef<SolAR::datastructure::Image>>>(images2));
  reqIn.set_camparams1(xpcf::serialize<SolAR::datastructure::CameraParameters>(camParams1));
  reqIn.set_camparams2(xpcf::serialize<SolAR::datastructure::CameraParameters>(camParams2));
  reqIn.set_transformation(xpcf::serialize<SolAR::datastructure::Transform3Df>(transformation));
  reqIn.set_rectparams1(xpcf::serialize<SolAR::datastructure::RectificationParameters>(rectParams1));
  reqIn.set_rectparams2(xpcf::serialize<SolAR::datastructure::RectificationParameters>(rectParams2));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->calibrate(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "calibrate rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIStereoCameraCalibrationService","calibrate",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  transformation = xpcf::deserialize<SolAR::datastructure::Transform3Df>(respOut.transformation());
  rectParams1 = xpcf::deserialize<SolAR::datastructure::RectificationParameters>(respOut.rectparams1());
  rectParams2 = xpcf::deserialize<SolAR::datastructure::RectificationParameters>(respOut.rectparams2());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

