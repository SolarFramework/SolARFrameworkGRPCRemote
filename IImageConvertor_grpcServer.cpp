// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IImageConvertor_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIImageConvertor::IImageConvertor_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIImageConvertor::IImageConvertor_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIImageConvertor {

IImageConvertor_grpcServer::IImageConvertor_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IImageConvertor_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::image::IImageConvertor>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(4);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IImageConvertor_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IImageConvertor_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IImageConvertor_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IImageConvertor_grpcServer::grpcIImageConvertorServiceImpl::convert_grpc0(::grpc::ServerContext* context, const ::grpcIImageConvertor::convert_grpc0Request* request, ::grpcIImageConvertor::convert_grpc0Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "convert", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IImageConvertor_grpcServer::convert request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Image> imgSrc = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->imgsrc());
  SRef<SolAR::datastructure::Image> imgDst = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->imgdst());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->convert(imgSrc, imgDst);
  response->set_imgdst(xpcf::serialize<SRef<SolAR::datastructure::Image>>(imgDst));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IImageConvertor_grpcServer::convert response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IImageConvertor_grpcServer::grpcIImageConvertorServiceImpl::convert_grpc1(::grpc::ServerContext* context, const ::grpcIImageConvertor::convert_grpc1Request* request, ::grpcIImageConvertor::convert_grpc1Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "convert", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IImageConvertor_grpcServer::convert request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Image> imgSrc = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->imgsrc());
  SRef<SolAR::datastructure::Image> imgDst = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->imgdst());
  SolAR::datastructure::Image::ImageLayout destLayout = static_cast<SolAR::datastructure::Image::ImageLayout>(request->destlayout());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->convert(imgSrc, imgDst, destLayout);
  response->set_imgdst(xpcf::serialize<SRef<SolAR::datastructure::Image>>(imgDst));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IImageConvertor_grpcServer::convert response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IImageConvertor_grpcServer::grpcIImageConvertorServiceImpl::convertLookUpTable(::grpc::ServerContext* context, const ::grpcIImageConvertor::convertLookUpTableRequest* request, ::grpcIImageConvertor::convertLookUpTableResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "convertLookUpTable", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IImageConvertor_grpcServer::convertLookUpTable request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Image> imgSrc = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->imgsrc());
  SRef<SolAR::datastructure::Image> imgDst = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->imgdst());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->convertLookUpTable(imgSrc, imgDst);
  response->set_imgdst(xpcf::serialize<SRef<SolAR::datastructure::Image>>(imgDst));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IImageConvertor_grpcServer::convertLookUpTable response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

