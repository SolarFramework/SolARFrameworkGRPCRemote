// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IMapFilter_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIMapFilter::IMapFilter_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIMapFilter::IMapFilter_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIMapFilter {

IMapFilter_grpcServer::IMapFilter_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IMapFilter_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::solver::map::IMapFilter>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(3);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IMapFilter_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IMapFilter_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IMapFilter_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IMapFilter_grpcServer::grpcIMapFilterServiceImpl::filter_grpc0(::grpc::ServerContext* context, const ::grpcIMapFilter::filter_grpc0Request* request, ::grpcIMapFilter::filter_grpc0Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "filter", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapFilter_grpcServer::filter request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::Transform3Df pose1 = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose1());
  SolAR::datastructure::Transform3Df pose2 = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose2());
  std::vector<SRef<SolAR::datastructure::CloudPoint>> input = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(request->input());
  std::vector<SRef<SolAR::datastructure::CloudPoint>> output = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(request->output());
  m_xpcfComponent->filter(pose1, pose2, input, output);
  response->set_output(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(output));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapFilter_grpcServer::filter response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IMapFilter_grpcServer::grpcIMapFilterServiceImpl::filter_grpc1(::grpc::ServerContext* context, const ::grpcIMapFilter::filter_grpc1Request* request, ::grpcIMapFilter::filter_grpc1Response* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "filter", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapFilter_grpcServer::filter request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::Transform3Df pose1 = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose1());
  SolAR::datastructure::Transform3Df pose2 = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose2());
  std::vector<SRef<SolAR::datastructure::CloudPoint>> input = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(request->input());
  std::vector<SRef<SolAR::datastructure::CloudPoint>> output = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(request->output());
  std::vector<int> index = xpcf::deserialize<std::vector<int>>(request->index());
  m_xpcfComponent->filter(pose1, pose2, input, output, index);
  response->set_output(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(output));
  response->set_index(xpcf::serialize<std::vector<int>>(index));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IMapFilter_grpcServer::filter response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

