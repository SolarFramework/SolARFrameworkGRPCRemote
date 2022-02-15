// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IPerspectiveController_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIPerspectiveController::IPerspectiveController_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIPerspectiveController::IPerspectiveController_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIPerspectiveController {

IPerspectiveController_grpcProxy::IPerspectiveController_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IPerspectiveController_grpcProxy>())
{
  declareInterface<SolAR::api::image::IPerspectiveController>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(3);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void IPerspectiveController_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IPerspectiveController_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIPerspectiveController::grpcIPerspectiveControllerService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IPerspectiveController_grpcProxy::correct(SRef<SolAR::datastructure::Image> const inputImg, std::vector<SolAR::datastructure::Contour2Df> const& contours, std::vector<SRef<SolAR::datastructure::Image>>& patches)
{
  ::grpc::ClientContext context;
  ::grpcIPerspectiveController::correct_grpc0Request reqIn;
  ::grpcIPerspectiveController::correct_grpc0Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "correct", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_inputimg(xpcf::serialize<SRef<SolAR::datastructure::Image>>(inputImg));
  reqIn.set_contours(xpcf::serialize<std::vector<SolAR::datastructure::Contour2Df>>(contours));
  reqIn.set_patches(xpcf::serialize<std::vector<SRef<SolAR::datastructure::Image>>>(patches));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPerspectiveController_grpcProxy::correct request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->correct_grpc0(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPerspectiveController_grpcProxy::correct response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "correct_grpc0 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIPerspectiveControllerService","correct_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  patches = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::Image>>>(respOut.patches());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IPerspectiveController_grpcProxy::correct(SRef<SolAR::datastructure::Image> const inputImg, SolAR::datastructure::Contour2Df const& contour, SRef<SolAR::datastructure::Image>& patch)
{
  ::grpc::ClientContext context;
  ::grpcIPerspectiveController::correct_grpc1Request reqIn;
  ::grpcIPerspectiveController::correct_grpc1Response respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "correct", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_inputimg(xpcf::serialize<SRef<SolAR::datastructure::Image>>(inputImg));
  reqIn.set_contour(xpcf::serialize<SolAR::datastructure::Contour2Df>(contour));
  reqIn.set_patch(xpcf::serialize<SRef<SolAR::datastructure::Image>>(patch));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPerspectiveController_grpcProxy::correct request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->correct_grpc1(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPerspectiveController_grpcProxy::correct response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "correct_grpc1 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIPerspectiveControllerService","correct_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  patch = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(respOut.patch());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

