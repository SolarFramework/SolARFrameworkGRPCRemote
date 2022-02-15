// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IDescriptorsExtractorSBPattern_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIDescriptorsExtractorSBPattern::IDescriptorsExtractorSBPattern_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIDescriptorsExtractorSBPattern::IDescriptorsExtractorSBPattern_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIDescriptorsExtractorSBPattern {

IDescriptorsExtractorSBPattern_grpcServer::IDescriptorsExtractorSBPattern_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IDescriptorsExtractorSBPattern_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::features::IDescriptorsExtractorSBPattern>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(3);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IDescriptorsExtractorSBPattern_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IDescriptorsExtractorSBPattern_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IDescriptorsExtractorSBPattern_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IDescriptorsExtractorSBPattern_grpcServer::grpcIDescriptorsExtractorSBPatternServiceImpl::extract_grpc0(::grpc::ServerContext* context, const ::grpcIDescriptorsExtractorSBPattern::extract_grpc0Request* request, ::grpcIDescriptorsExtractorSBPattern::extract_grpc0Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "extract", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDescriptorsExtractorSBPattern_grpcServer::extract request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SRef<SolAR::datastructure::Image>> images = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::Image>>>(request->images());
  std::vector<SolAR::datastructure::Contour2Df> inContours = xpcf::deserialize<std::vector<SolAR::datastructure::Contour2Df>>(request->incontours());
  SRef<SolAR::datastructure::DescriptorBuffer> descriptors = xpcf::deserialize<SRef<SolAR::datastructure::DescriptorBuffer>>(request->descriptors());
  std::vector<SolAR::datastructure::Contour2Df> outContours = xpcf::deserialize<std::vector<SolAR::datastructure::Contour2Df>>(request->outcontours());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->extract(images, inContours, descriptors, outContours);
  response->set_descriptors(xpcf::serialize<SRef<SolAR::datastructure::DescriptorBuffer>>(descriptors));
  response->set_outcontours(xpcf::serialize<std::vector<SolAR::datastructure::Contour2Df>>(outContours));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDescriptorsExtractorSBPattern_grpcServer::extract response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IDescriptorsExtractorSBPattern_grpcServer::grpcIDescriptorsExtractorSBPatternServiceImpl::extract_grpc1(::grpc::ServerContext* context, const ::grpcIDescriptorsExtractorSBPattern::extract_grpc1Request* request, ::grpcIDescriptorsExtractorSBPattern::extract_grpc1Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "extract", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDescriptorsExtractorSBPattern_grpcServer::extract request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::SquaredBinaryPattern pattern = xpcf::deserialize<SolAR::datastructure::SquaredBinaryPattern>(request->pattern());
  SRef<SolAR::datastructure::DescriptorBuffer> descriptorParam = xpcf::deserialize<SRef<SolAR::datastructure::DescriptorBuffer>>(request->descriptorparam());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->extract(pattern, descriptorParam);
  response->set_descriptorparam(xpcf::serialize<SRef<SolAR::datastructure::DescriptorBuffer>>(descriptorParam));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IDescriptorsExtractorSBPattern_grpcServer::extract response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

