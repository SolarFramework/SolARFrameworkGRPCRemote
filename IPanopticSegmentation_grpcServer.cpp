// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IPanopticSegmentation_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIPanopticSegmentation::IPanopticSegmentation_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIPanopticSegmentation::IPanopticSegmentation_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIPanopticSegmentation {

IPanopticSegmentation_grpcServer::IPanopticSegmentation_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IPanopticSegmentation_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::segm::IPanopticSegmentation>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IPanopticSegmentation_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IPanopticSegmentation_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IPanopticSegmentation_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IPanopticSegmentation_grpcServer::grpcIPanopticSegmentationServiceImpl::segment(::grpc::ServerContext* context, const ::grpcIPanopticSegmentation::segmentRequest* request, ::grpcIPanopticSegmentation::segmentResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "segment", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPanopticSegmentation_grpcServer::segment request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Image> image = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->image());
  SRef<SolAR::datastructure::Image> labelMap = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->labelmap());
  std::vector<SolAR::datastructure::Rectanglei> boxes = xpcf::deserialize<std::vector<SolAR::datastructure::Rectanglei>>(request->boxes());
  std::vector<std::pair<uint32_t,uint32_t>> classObjectIds = xpcf::deserialize<std::vector<std::pair<uint32_t,uint32_t>>>(request->classobjectids());
  std::vector<float> scores = xpcf::deserialize<std::vector<float>>(request->scores());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->segment(image, labelMap, boxes, classObjectIds, scores);
  response->set_labelmap(xpcf::serialize<SRef<SolAR::datastructure::Image>>(labelMap));
  response->set_boxes(xpcf::serialize<std::vector<SolAR::datastructure::Rectanglei>>(boxes));
  response->set_classobjectids(xpcf::serialize<std::vector<std::pair<uint32_t,uint32_t>>>(classObjectIds));
  response->set_scores(xpcf::serialize<std::vector<float>>(scores));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IPanopticSegmentation_grpcServer::segment response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

