// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IVisualInertialFusion_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIVisualInertialFusion::IVisualInertialFusion_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIVisualInertialFusion::IVisualInertialFusion_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIVisualInertialFusion {

IVisualInertialFusion_grpcServer::IVisualInertialFusion_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IVisualInertialFusion_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::fusion::IVisualInertialFusion>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(5);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IVisualInertialFusion_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IVisualInertialFusion_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IVisualInertialFusion_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IVisualInertialFusion_grpcServer::grpcIVisualInertialFusionServiceImpl::init(::grpc::ServerContext* context, const ::grpcIVisualInertialFusion::initRequest* request, ::google::protobuf::Empty* response)
{
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IVisualInertialFusion_grpcServer::init request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::api::fusion::VisionData initialVisionData = xpcf::deserialize<SolAR::api::fusion::VisionData>(request->initialvisiondata());
  m_xpcfComponent->init(initialVisionData);
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IVisualInertialFusion_grpcServer::init response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IVisualInertialFusion_grpcServer::grpcIVisualInertialFusionServiceImpl::addInertialData(::grpc::ServerContext* context, const ::grpcIVisualInertialFusion::addInertialDataRequest* request, ::google::protobuf::Empty* response)
{
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IVisualInertialFusion_grpcServer::addInertialData request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::api::fusion::InertialData inertialData = xpcf::deserialize<SolAR::api::fusion::InertialData>(request->inertialdata());
  m_xpcfComponent->addInertialData(inertialData);
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IVisualInertialFusion_grpcServer::addInertialData response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IVisualInertialFusion_grpcServer::grpcIVisualInertialFusionServiceImpl::addVisionData(::grpc::ServerContext* context, const ::grpcIVisualInertialFusion::addVisionDataRequest* request, ::google::protobuf::Empty* response)
{
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IVisualInertialFusion_grpcServer::addVisionData request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::api::fusion::VisionData visionData = xpcf::deserialize<SolAR::api::fusion::VisionData>(request->visiondata());
  m_xpcfComponent->addVisionData(visionData);
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IVisualInertialFusion_grpcServer::addVisionData response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IVisualInertialFusion_grpcServer::grpcIVisualInertialFusionServiceImpl::process(::grpc::ServerContext* context, const ::grpcIVisualInertialFusion::processRequest* request, ::grpcIVisualInertialFusion::processResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "process", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IVisualInertialFusion_grpcServer::process request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::Transform3Df outputData = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->outputdata());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->process(outputData);
  response->set_outputdata(xpcf::serialize<SolAR::datastructure::Transform3Df>(outputData));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IVisualInertialFusion_grpcServer::process response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

