// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IDescriptorsExtractorFromImage_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIDescriptorsExtractorFromImage::IDescriptorsExtractorFromImage_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIDescriptorsExtractorFromImage::IDescriptorsExtractorFromImage_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIDescriptorsExtractorFromImage {

IDescriptorsExtractorFromImage_grpcServer::IDescriptorsExtractorFromImage_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IDescriptorsExtractorFromImage_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::features::IDescriptorsExtractorFromImage>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(3);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IDescriptorsExtractorFromImage_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IDescriptorsExtractorFromImage_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IDescriptorsExtractorFromImage_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IDescriptorsExtractorFromImage_grpcServer::grpcIDescriptorsExtractorFromImageServiceImpl::getTypeString(::grpc::ServerContext* context, const ::grpcIDescriptorsExtractorFromImage::getTypeStringRequest* request, ::grpcIDescriptorsExtractorFromImage::getTypeStringResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getTypeString", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDescriptorsExtractorFromImage_grpcServer::getTypeString request received at " << to_simple_string(start) << std::endl;
  #endif
  std::string returnValue = m_xpcfComponent->getTypeString();
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDescriptorsExtractorFromImage_grpcServer::getTypeString response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IDescriptorsExtractorFromImage_grpcServer::grpcIDescriptorsExtractorFromImageServiceImpl::extract(::grpc::ServerContext* context, const ::grpcIDescriptorsExtractorFromImage::extractRequest* request, ::grpcIDescriptorsExtractorFromImage::extractResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "extract", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDescriptorsExtractorFromImage_grpcServer::extract request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Image> image = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->image());
  std::vector<SolAR::datastructure::Keypoint> keypoints = xpcf::deserialize<std::vector<SolAR::datastructure::Keypoint>>(request->keypoints());
  SRef<SolAR::datastructure::DescriptorBuffer> descriptors = xpcf::deserialize<SRef<SolAR::datastructure::DescriptorBuffer>>(request->descriptors());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->extract(image, keypoints, descriptors);
  response->set_keypoints(xpcf::serialize<std::vector<SolAR::datastructure::Keypoint>>(keypoints));
  response->set_descriptors(xpcf::serialize<SRef<SolAR::datastructure::DescriptorBuffer>>(descriptors));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDescriptorsExtractorFromImage_grpcServer::extract response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

