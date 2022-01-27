// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IContoursFilter_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIContoursFilter::IContoursFilter_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIContoursFilter::IContoursFilter_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIContoursFilter {

IContoursFilter_grpcServer::IContoursFilter_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IContoursFilter_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::features::IContoursFilter>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(2);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IContoursFilter_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IContoursFilter_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IContoursFilter_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IContoursFilter_grpcServer::grpcIContoursFilterServiceImpl::filter(::grpc::ServerContext* context, const ::grpcIContoursFilter::filterRequest* request, ::grpcIContoursFilter::filterResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "filter", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IContoursFilter_grpcServer::filter request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SolAR::datastructure::Contour2Df> inContours = xpcf::deserialize<std::vector<SolAR::datastructure::Contour2Df>>(request->incontours());
  std::vector<SolAR::datastructure::Contour2Df> outContours = xpcf::deserialize<std::vector<SolAR::datastructure::Contour2Df>>(request->outcontours());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->filter(inContours, outContours);
  response->set_outcontours(xpcf::serialize<std::vector<SolAR::datastructure::Contour2Df>>(outContours));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IContoursFilter_grpcServer::filter response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

