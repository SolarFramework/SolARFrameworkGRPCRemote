// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "I3DTransform_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverI3DTransform::I3DTransform_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverI3DTransform::I3DTransform_grpcServer>();

namespace org::bcom::xpcf::grpc::serverI3DTransform {

I3DTransform_grpcServer::I3DTransform_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<I3DTransform_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::geom::I3DTransform>(m_grpcService.m_xpcfComponent);
}


void I3DTransform_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I3DTransform_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * I3DTransform_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status I3DTransform_grpcServer::grpcI3DTransformServiceImpl::transform(::grpc::ServerContext* context, const ::grpcI3DTransform::transformRequest* request, ::grpcI3DTransform::transformResponse* response)
{
  std::vector<SolAR::datastructure::Point3Df> inputPoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point3Df>>(request->inputpoints());
  SolAR::datastructure::Transform3Df transformation = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->transformation());
  std::vector<SolAR::datastructure::Point3Df> outputPoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point3Df>>(request->outputpoints());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->transform(inputPoints, transformation, outputPoints);
  response->set_outputpoints(xpcf::serialize<std::vector<SolAR::datastructure::Point3Df>>(outputPoints));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status I3DTransform_grpcServer::grpcI3DTransformServiceImpl::transformInPlace_grpc0(::grpc::ServerContext* context, const ::grpcI3DTransform::transformInPlace_grpc0Request* request, ::grpcI3DTransform::transformInPlace_grpc0Response* response)
{
  SolAR::datastructure::Transform3Df transformation = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->transformation());
  SRef<SolAR::datastructure::Map> map = xpcf::deserialize<SRef<SolAR::datastructure::Map>>(request->map());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->transformInPlace(transformation, map);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status I3DTransform_grpcServer::grpcI3DTransformServiceImpl::transformInPlace_grpc1(::grpc::ServerContext* context, const ::grpcI3DTransform::transformInPlace_grpc1Request* request, ::grpcI3DTransform::transformInPlace_grpc1Response* response)
{
  SolAR::datastructure::Transform3Df transformation = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->transformation());
  std::vector<SRef<SolAR::datastructure::CloudPoint>> pointCloud = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(request->pointcloud());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->transformInPlace(transformation, pointCloud);
  response->set_pointcloud(xpcf::serialize<std::vector<SRef<SolAR::datastructure::CloudPoint>>>(pointCloud));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status I3DTransform_grpcServer::grpcI3DTransformServiceImpl::transformInPlace_grpc2(::grpc::ServerContext* context, const ::grpcI3DTransform::transformInPlace_grpc2Request* request, ::grpcI3DTransform::transformInPlace_grpc2Response* response)
{
  SolAR::datastructure::Transform3Df transformation = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->transformation());
  std::vector<SRef<SolAR::datastructure::Keyframe>> keyframes = xpcf::deserialize<std::vector<SRef<SolAR::datastructure::Keyframe>>>(request->keyframes());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->transformInPlace(transformation, keyframes);
  response->set_keyframes(xpcf::serialize<std::vector<SRef<SolAR::datastructure::Keyframe>>>(keyframes));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status I3DTransform_grpcServer::grpcI3DTransformServiceImpl::transformInPlace_grpc3(::grpc::ServerContext* context, const ::grpcI3DTransform::transformInPlace_grpc3Request* request, ::grpcI3DTransform::transformInPlace_grpc3Response* response)
{
  SolAR::datastructure::Transform3Df transformation = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->transformation());
  SRef<SolAR::datastructure::PointCloud> pointCloud = xpcf::deserialize<SRef<SolAR::datastructure::PointCloud>>(request->pointcloud());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->transformInPlace(transformation, pointCloud);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status I3DTransform_grpcServer::grpcI3DTransformServiceImpl::transformInPlace_grpc4(::grpc::ServerContext* context, const ::grpcI3DTransform::transformInPlace_grpc4Request* request, ::grpcI3DTransform::transformInPlace_grpc4Response* response)
{
  SolAR::datastructure::Transform3Df transformation = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->transformation());
  SRef<SolAR::datastructure::KeyframeCollection> keyframeCollection = xpcf::deserialize<SRef<SolAR::datastructure::KeyframeCollection>>(request->keyframecollection());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->transformInPlace(transformation, keyframeCollection);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

