// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IImageRectification_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIImageRectification::IImageRectification_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIImageRectification::IImageRectification_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIImageRectification {

IImageRectification_grpcServer::IImageRectification_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IImageRectification_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::image::IImageRectification>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IImageRectification_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IImageRectification_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IImageRectification_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IImageRectification_grpcServer::grpcIImageRectificationServiceImpl::rectify(::grpc::ServerContext* context, const ::grpcIImageRectification::rectifyRequest* request, ::grpcIImageRectification::rectifyResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "rectify", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IImageRectification_grpcServer::rectify request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Image> image = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->image());
  SolAR::datastructure::CameraParameters camParams = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->camparams());
  SolAR::datastructure::RectificationParameters rectParams = xpcf::deserialize<SolAR::datastructure::RectificationParameters>(request->rectparams());
  SRef<SolAR::datastructure::Image> rectifiedImage = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->rectifiedimage());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->rectify(image, camParams, rectParams, rectifiedImage);
  response->set_rectifiedimage(xpcf::serialize<SRef<SolAR::datastructure::Image>>(rectifiedImage));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IImageRectification_grpcServer::rectify response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

