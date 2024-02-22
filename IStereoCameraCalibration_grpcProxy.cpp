// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IStereoCameraCalibration_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIStereoCameraCalibration::IStereoCameraCalibration_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIStereoCameraCalibration::IStereoCameraCalibration_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIStereoCameraCalibration {

IStereoCameraCalibration_grpcProxy::IStereoCameraCalibration_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IStereoCameraCalibration_grpcProxy>())
{
  declareInterface<SolAR::api::input::devices::IStereoCameraCalibration>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(3);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
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
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IStereoCameraCalibration_grpcProxy::calibrate(std::vector<SRef<datastructure::Image>> const& images1, std::vector<SRef<datastructure::Image>> const& images2, datastructure::CameraParameters const& camParams1, datastructure::CameraParameters const& camParams2, datastructure::Transform3Df& transformation, datastructure::RectificationParameters& rectParams1, datastructure::RectificationParameters& rectParams2)
{
  ::grpc::ClientContext context;
  ::grpcIStereoCameraCalibration::calibrateRequest reqIn;
  ::grpcIStereoCameraCalibration::calibrateResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "calibrate", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_images1(xpcf::serialize<std::vector<SRef<datastructure::Image>>>(images1));
  reqIn.set_images2(xpcf::serialize<std::vector<SRef<datastructure::Image>>>(images2));
  reqIn.set_camparams1(xpcf::serialize<datastructure::CameraParameters>(camParams1));
  reqIn.set_camparams2(xpcf::serialize<datastructure::CameraParameters>(camParams2));
  reqIn.set_transformation(xpcf::serialize<datastructure::Transform3Df>(transformation));
  reqIn.set_rectparams1(xpcf::serialize<datastructure::RectificationParameters>(rectParams1));
  reqIn.set_rectparams2(xpcf::serialize<datastructure::RectificationParameters>(rectParams2));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IStereoCameraCalibration_grpcProxy::calibrate request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->calibrate(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IStereoCameraCalibration_grpcProxy::calibrate response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "calibrate rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIStereoCameraCalibrationService","calibrate",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  transformation = xpcf::deserialize<datastructure::Transform3Df>(respOut.transformation());
  rectParams1 = xpcf::deserialize<datastructure::RectificationParameters>(respOut.rectparams1());
  rectParams2 = xpcf::deserialize<datastructure::RectificationParameters>(respOut.rectparams2());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IStereoCameraCalibration_grpcProxy::rectify(datastructure::CameraParameters const& camParams1, datastructure::CameraParameters const& camParams2, datastructure::RectificationParameters& rectParams1, datastructure::RectificationParameters& rectParams2)
{
  ::grpc::ClientContext context;
  ::grpcIStereoCameraCalibration::rectifyRequest reqIn;
  ::grpcIStereoCameraCalibration::rectifyResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "rectify", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_camparams1(xpcf::serialize<datastructure::CameraParameters>(camParams1));
  reqIn.set_camparams2(xpcf::serialize<datastructure::CameraParameters>(camParams2));
  reqIn.set_rectparams1(xpcf::serialize<datastructure::RectificationParameters>(rectParams1));
  reqIn.set_rectparams2(xpcf::serialize<datastructure::RectificationParameters>(rectParams2));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IStereoCameraCalibration_grpcProxy::rectify request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->rectify(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IStereoCameraCalibration_grpcProxy::rectify response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "rectify rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIStereoCameraCalibrationService","rectify",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  rectParams1 = xpcf::deserialize<datastructure::RectificationParameters>(respOut.rectparams1());
  rectParams2 = xpcf::deserialize<datastructure::RectificationParameters>(respOut.rectparams2());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

