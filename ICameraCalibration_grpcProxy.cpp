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


bool  ICameraCalibration_grpcProxy::calibrate(std::string const& inputVideo, std::string const& cailbrationFilePath)
{
  ::grpc::ClientContext context;
  ::grpcICameraCalibration::calibrate_grpc0Request reqIn;
  ::grpcICameraCalibration::calibrate_grpc0Response respOut;
  reqIn.set_inputvideo(inputVideo);
  reqIn.set_cailbrationfilepath(cailbrationFilePath);
  ::grpc::Status grpcRemoteStatus = m_grpcStub->calibrate_grpc0(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "calibrate_grpc0rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICameraCalibrationService","calibrate_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return respOut.xpcfgrpcreturnvalue();
}


bool  ICameraCalibration_grpcProxy::calibrate(int const camera_id, std::string const& cailbrationFilePath)
{
  ::grpc::ClientContext context;
  ::grpcICameraCalibration::calibrate_grpc1Request reqIn;
  ::grpcICameraCalibration::calibrate_grpc1Response respOut;
  reqIn.set_camera_id(camera_id);
  reqIn.set_cailbrationfilepath(cailbrationFilePath);
  ::grpc::Status grpcRemoteStatus = m_grpcStub->calibrate_grpc1(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "calibrate_grpc1rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICameraCalibrationService","calibrate_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return respOut.xpcfgrpcreturnvalue();
}


bool  ICameraCalibration_grpcProxy::setParameters(std::string const& config_file)
{
  ::grpc::ClientContext context;
  ::grpcICameraCalibration::setParametersRequest reqIn;
  ::grpcICameraCalibration::setParametersResponse respOut;
  reqIn.set_config_file(config_file);
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setParametersrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcICameraCalibrationService","setParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return respOut.xpcfgrpcreturnvalue();
}


}

