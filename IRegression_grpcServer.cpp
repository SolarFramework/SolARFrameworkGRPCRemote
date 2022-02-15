// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IRegression_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIRegression::IRegression_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIRegression::IRegression_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIRegression {

IRegression_grpcServer::IRegression_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IRegression_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::reloc::IRegression>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(9);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IRegression_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IRegression_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IRegression_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IRegression_grpcServer::grpcIRegressionServiceImpl::setCameraParameters(::grpc::ServerContext* context, const ::grpcIRegression::setCameraParametersRequest* request, ::google::protobuf::Empty* response)
{
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRegression_grpcServer::setCameraParameters request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::CamCalibration intrinsicParams = xpcf::deserialize<SolAR::datastructure::CamCalibration>(request->intrinsicparams());
  SolAR::datastructure::CamDistortion distorsionParams = xpcf::deserialize<SolAR::datastructure::CamDistortion>(request->distorsionparams());
  m_xpcfComponent->setCameraParameters(intrinsicParams, distorsionParams);
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRegression_grpcServer::setCameraParameters response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRegression_grpcServer::grpcIRegressionServiceImpl::add(::grpc::ServerContext* context, const ::grpcIRegression::addRequest* request, ::grpcIRegression::addResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "add", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRegression_grpcServer::add request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<SRef<SolAR::datastructure::DescriptorBuffer>> descriptors = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::DescriptorBuffer>>>(request->descriptors());
  std::vector<SolAR::datastructure::Point3Df> points3D = xpcf::deserialize<std::vector<SolAR::datastructure::Point3Df>>(request->points3d());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->add(descriptors, points3D);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRegression_grpcServer::add response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRegression_grpcServer::grpcIRegressionServiceImpl::regress(::grpc::ServerContext* context, const ::grpcIRegression::regressRequest* request, ::grpcIRegression::regressResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "regress", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRegression_grpcServer::regress request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Frame> frame = xpcf::deserialize<SRef<SolAR::datastructure::Frame>>(request->frame());
  std::vector<SolAR::datastructure::Point2Df> points2D = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->points2d());
  std::vector<SolAR::datastructure::Point3Df> points3D = xpcf::deserialize<std::vector<SolAR::datastructure::Point3Df>>(request->points3d());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->regress(frame, points2D, points3D);
  response->set_points2d(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(points2D));
  response->set_points3d(xpcf::serialize<std::vector<SolAR::datastructure::Point3Df>>(points3D));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRegression_grpcServer::regress response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRegression_grpcServer::grpcIRegressionServiceImpl::update(::grpc::ServerContext* context, const ::grpcIRegression::updateRequest* request, ::grpcIRegression::updateResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "update", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRegression_grpcServer::update request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<bool> inliers = xpcf::deserialize<std::vector<bool>>(request->inliers());
  SolAR::datastructure::Transform3Df cameraPose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->camerapose());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->update(inliers, cameraPose);
  response->set_inliers(xpcf::serialize<std::vector<bool>>(inliers));
  response->set_camerapose(xpcf::serialize<SolAR::datastructure::Transform3Df>(cameraPose));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRegression_grpcServer::update response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRegression_grpcServer::grpcIRegressionServiceImpl::loadModel(::grpc::ServerContext* context, const ::grpcIRegression::loadModelRequest* request, ::grpcIRegression::loadModelResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "loadModel", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRegression_grpcServer::loadModel request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->loadModel();
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRegression_grpcServer::loadModel response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRegression_grpcServer::grpcIRegressionServiceImpl::getTrainingStatus(::grpc::ServerContext* context, const ::grpcIRegression::getTrainingStatusRequest* request, ::grpcIRegression::getTrainingStatusResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getTrainingStatus", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRegression_grpcServer::getTrainingStatus request received at " << to_simple_string(start) << std::endl;
  #endif
  std::vector<int> returnValue = m_xpcfComponent->getTrainingStatus();
  response->set_xpcfgrpcreturnvalue(xpcf::serialize<std::vector<int>>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRegression_grpcServer::getTrainingStatus response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRegression_grpcServer::grpcIRegressionServiceImpl::getNumActiveLeaves(::grpc::ServerContext* context, const ::grpcIRegression::getNumActiveLeavesRequest* request, ::grpcIRegression::getNumActiveLeavesResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getNumActiveLeaves", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRegression_grpcServer::getNumActiveLeaves request received at " << to_simple_string(start) << std::endl;
  #endif
  int returnValue = m_xpcfComponent->getNumActiveLeaves();
  response->set_xpcfgrpcreturnvalue(returnValue);
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRegression_grpcServer::getNumActiveLeaves response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IRegression_grpcServer::grpcIRegressionServiceImpl::getNumPassiveLeaves(::grpc::ServerContext* context, const ::grpcIRegression::getNumPassiveLeavesRequest* request, ::grpcIRegression::getNumPassiveLeavesResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "getNumPassiveLeaves", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRegression_grpcServer::getNumPassiveLeaves request received at " << to_simple_string(start) << std::endl;
  #endif
  int returnValue = m_xpcfComponent->getNumPassiveLeaves();
  response->set_xpcfgrpcreturnvalue(returnValue);
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IRegression_grpcServer::getNumPassiveLeaves response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

