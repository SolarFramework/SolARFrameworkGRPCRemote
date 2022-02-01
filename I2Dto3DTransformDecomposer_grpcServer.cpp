// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "I2Dto3DTransformDecomposer_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverI2Dto3DTransformDecomposer::I2Dto3DTransformDecomposer_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverI2Dto3DTransformDecomposer::I2Dto3DTransformDecomposer_grpcServer>();

namespace org::bcom::xpcf::grpc::serverI2Dto3DTransformDecomposer {

I2Dto3DTransformDecomposer_grpcServer::I2Dto3DTransformDecomposer_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<I2Dto3DTransformDecomposer_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::solver::pose::I2Dto3DTransformDecomposer>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(3);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void I2Dto3DTransformDecomposer_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I2Dto3DTransformDecomposer_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * I2Dto3DTransformDecomposer_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status I2Dto3DTransformDecomposer_grpcServer::grpcI2Dto3DTransformDecomposerServiceImpl::setCameraParameters(::grpc::ServerContext* context, const ::grpcI2Dto3DTransformDecomposer::setCameraParametersRequest* request, ::google::protobuf::Empty* response)
{
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I2Dto3DTransformDecomposer_grpcServer::setCameraParameters request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::CamCalibration intrinsicParams = xpcf::deserialize<SolAR::datastructure::CamCalibration>(request->intrinsicparams());
  SolAR::datastructure::CamDistortion distorsionParams = xpcf::deserialize<SolAR::datastructure::CamDistortion>(request->distorsionparams());
  m_xpcfComponent->setCameraParameters(intrinsicParams, distorsionParams);
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I2Dto3DTransformDecomposer_grpcServer::setCameraParameters response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status I2Dto3DTransformDecomposer_grpcServer::grpcI2Dto3DTransformDecomposerServiceImpl::decompose(::grpc::ServerContext* context, const ::grpcI2Dto3DTransformDecomposer::decomposeRequest* request, ::grpcI2Dto3DTransformDecomposer::decomposeResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "decompose", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I2Dto3DTransformDecomposer_grpcServer::decompose request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::Transform2Df F = xpcf::deserialize<SolAR::datastructure::Transform2Df>(request->f());
  std::vector<SolAR::datastructure::Transform3Df> decomposedPoses = xpcf::deserialize<std::vector<SolAR::datastructure::Transform3Df>>(request->decomposedposes());
  bool returnValue = m_xpcfComponent->decompose(F, decomposedPoses);
  response->set_decomposedposes(xpcf::serialize<std::vector<SolAR::datastructure::Transform3Df>>(decomposedPoses));
  response->set_xpcfgrpcreturnvalue(returnValue);
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I2Dto3DTransformDecomposer_grpcServer::decompose response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

