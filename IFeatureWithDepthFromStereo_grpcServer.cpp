// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IFeatureWithDepthFromStereo_grpcServer.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIFeatureWithDepthFromStereo::IFeatureWithDepthFromStereo_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIFeatureWithDepthFromStereo::IFeatureWithDepthFromStereo_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIFeatureWithDepthFromStereo {

IFeatureWithDepthFromStereo_grpcServer::IFeatureWithDepthFromStereo_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IFeatureWithDepthFromStereo_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::features::IFeatureWithDepthFromStereo>(m_grpcService.m_xpcfComponent);
  m_grpcServerCompressionConfig.resize(3);
  declarePropertySequence("grpc_compress_server", m_grpcServerCompressionConfig);
}


void IFeatureWithDepthFromStereo_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IFeatureWithDepthFromStereo_grpcServer::onConfigured()
{
  for (auto & grpcCompressionLine : m_grpcServerCompressionConfig) {
;        translateServerConfiguration(grpcCompressionLine, m_grpcService.m_serviceCompressionInfos, m_grpcService.m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IFeatureWithDepthFromStereo_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IFeatureWithDepthFromStereo_grpcServer::grpcIFeatureWithDepthFromStereoServiceImpl::setRectificationParameters(::grpc::ServerContext* context, const ::grpcIFeatureWithDepthFromStereo::setRectificationParametersRequest* request, ::google::protobuf::Empty* response)
{
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFeatureWithDepthFromStereo_grpcServer::setRectificationParameters request received at " << to_simple_string(start) << std::endl;
  #endif
  SolAR::datastructure::CameraParameters camParams1 = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->camparams1());
  SolAR::datastructure::CameraParameters camParams2 = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->camparams2());
  SolAR::datastructure::RectificationParameters rectParams1 = xpcf::deserialize<SolAR::datastructure::RectificationParameters>(request->rectparams1());
  SolAR::datastructure::RectificationParameters rectParams2 = xpcf::deserialize<SolAR::datastructure::RectificationParameters>(request->rectparams2());
  m_xpcfComponent->setRectificationParameters(camParams1, camParams2, rectParams1, rectParams2);
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFeatureWithDepthFromStereo_grpcServer::setRectificationParameters response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


::grpc::Status IFeatureWithDepthFromStereo_grpcServer::grpcIFeatureWithDepthFromStereoServiceImpl::compute(::grpc::ServerContext* context, const ::grpcIFeatureWithDepthFromStereo::computeRequest* request, ::grpcIFeatureWithDepthFromStereo::computeResponse* response)
{
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressType askedCompressionType = static_cast<xpcf::grpcCompressType>(request->grpcservercompressionformat());
  xpcf::grpcServerCompressionInfos serverCompressInfo = xpcf::deduceServerCompressionType(askedCompressionType, m_serviceCompressionInfos, "compute", m_methodCompressionInfosMap);
  xpcf::prepareServerCompressionContext(context, serverCompressInfo);
  #endif
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFeatureWithDepthFromStereo_grpcServer::compute request received at " << to_simple_string(start) << std::endl;
  #endif
  SRef<SolAR::datastructure::Image> image1 = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->image1());
  SRef<SolAR::datastructure::Image> image2 = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->image2());
  SRef<SolAR::datastructure::Frame> frame1 = xpcf::deserialize<SRef<SolAR::datastructure::Frame>>(request->frame1());
  SRef<SolAR::datastructure::Frame> frame2 = xpcf::deserialize<SRef<SolAR::datastructure::Frame>>(request->frame2());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->compute(image1, image2, frame1, frame2);
  response->set_frame1(xpcf::serialize<SRef<SolAR::datastructure::Frame>>(frame1));
  response->set_frame2(xpcf::serialize<SRef<SolAR::datastructure::Frame>>(frame2));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  #ifdef ENABLE_SERVER_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> IFeatureWithDepthFromStereo_grpcServer::compute response sent at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  return ::grpc::Status::OK;
}


}

