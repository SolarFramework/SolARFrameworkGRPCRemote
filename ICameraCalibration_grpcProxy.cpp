// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "ICameraCalibration_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyICameraCalibration::ICameraCalibration_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyICameraCalibration::ICameraCalibration_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyICameraCalibration {

ICameraCalibration_grpcProxy::ICameraCalibration_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<ICameraCalibration_grpcProxy>())
{
  declareInterface<SolAR::api::input::devices::ICameraCalibration>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void ICameraCalibration_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode ICameraCalibration_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcICameraCalibration::grpcICameraCalibrationService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  ICameraCalibration_grpcProxy::calibrate(std::vector<SRef<SolAR::datastructure::Image>> const& images, SolAR::datastructure::CameraParameters& camParams)
{
  ::grpc::ClientContext context;
  ::grpcICameraCalibration::calibrateRequest reqIn;
  ::grpcICameraCalibration::calibrateResponse respOut;
  reqIn.set_images(xpcf::serialize<std::vector<SRef<SolAR::datastructure::Image>>>(images));
  reqIn.set_camparams(xpcf::serialize<SolAR::datastructure::CameraParameters>(camParams));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->calibrate(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "calibrate rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICameraCalibrationService","calibrate",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  camParams = xpcf::deserialize<SolAR::datastructure::CameraParameters>(respOut.camparams());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

