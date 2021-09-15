// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IFeatureWithDepthFromStereo_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIFeatureWithDepthFromStereo::IFeatureWithDepthFromStereo_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIFeatureWithDepthFromStereo::IFeatureWithDepthFromStereo_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIFeatureWithDepthFromStereo {

IFeatureWithDepthFromStereo_grpcServer::IFeatureWithDepthFromStereo_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IFeatureWithDepthFromStereo_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::features::IFeatureWithDepthFromStereo>(m_grpcService.m_xpcfComponent);
}


void IFeatureWithDepthFromStereo_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IFeatureWithDepthFromStereo_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IFeatureWithDepthFromStereo_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IFeatureWithDepthFromStereo_grpcServer::grpcIFeatureWithDepthFromStereoServiceImpl::setRectificationParameters(::grpc::ServerContext* context, const ::grpcIFeatureWithDepthFromStereo::setRectificationParametersRequest* request, ::google::protobuf::Empty* response)
{
  SolAR::datastructure::CameraParameters camParams1 = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->camparams1());
  SolAR::datastructure::CameraParameters camParams2 = xpcf::deserialize<SolAR::datastructure::CameraParameters>(request->camparams2());
  SolAR::datastructure::RectificationParameters rectParams1 = xpcf::deserialize<SolAR::datastructure::RectificationParameters>(request->rectparams1());
  SolAR::datastructure::RectificationParameters rectParams2 = xpcf::deserialize<SolAR::datastructure::RectificationParameters>(request->rectparams2());
  m_xpcfComponent->setRectificationParameters(camParams1, camParams2, rectParams1, rectParams2);
  return ::grpc::Status::OK;
}


::grpc::Status IFeatureWithDepthFromStereo_grpcServer::grpcIFeatureWithDepthFromStereoServiceImpl::compute(::grpc::ServerContext* context, const ::grpcIFeatureWithDepthFromStereo::computeRequest* request, ::grpcIFeatureWithDepthFromStereo::computeResponse* response)
{
  SRef<SolAR::datastructure::Image> image1 = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->image1());
  SRef<SolAR::datastructure::Image> image2 = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(request->image2());
  SRef<SolAR::datastructure::Frame> frame1 = xpcf::deserialize<SRef<SolAR::datastructure::Frame>>(request->frame1());
  SRef<SolAR::datastructure::Frame> frame2 = xpcf::deserialize<SRef<SolAR::datastructure::Frame>>(request->frame2());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->compute(image1, image2, frame1, frame2);
  response->set_frame1(xpcf::serialize<SRef<SolAR::datastructure::Frame>>(frame1));
  response->set_frame2(xpcf::serialize<SRef<SolAR::datastructure::Frame>>(frame2));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

