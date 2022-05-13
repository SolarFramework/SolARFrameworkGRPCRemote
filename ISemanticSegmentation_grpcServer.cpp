// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "ISemanticSegmentation_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverISemanticSegmentation::ISemanticSegmentation_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverISemanticSegmentation::ISemanticSegmentation_grpcServer>();

namespace org::bcom::xpcf::grpc::serverISemanticSegmentation {

ISemanticSegmentation_grpcServer::ISemanticSegmentation_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<ISemanticSegmentation_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::segm::ISemanticSegmentation>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void ISemanticSegmentation_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode ISemanticSegmentation_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * ISemanticSegmentation_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status ISemanticSegmentation_grpcServer::grpcISemanticSegmentationServiceImpl::segment(::grpc::ServerContext* context, const ::grpcISemanticSegmentation::segmentRequest* request, ::grpcISemanticSegmentation::segmentResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "segment", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ISemanticSegmentation_grpcServer::segment request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Image> image = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->image());
  SRef<SolAR::datastructure::Image> mask = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->mask());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->segment(image, mask);
  response->set_mask(xpcf::serialize<SRef<SolAR::datastructure::Image>>(mask));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> ISemanticSegmentation_grpcServer::segment response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}
