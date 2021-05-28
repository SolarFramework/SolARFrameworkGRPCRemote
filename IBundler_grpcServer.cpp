// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "IBundler_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverIBundler::IBundler_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverIBundler::IBundler_grpcServer>();

namespace org::bcom::xpcf::grpc::serverIBundler {

IBundler_grpcServer::IBundler_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<IBundler_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::solver::map::IBundler>(m_grpcService.m_xpcfComponent);
}


void IBundler_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IBundler_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * IBundler_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status IBundler_grpcServer::grpcIBundlerServiceImpl::setMap(::grpc::ServerContext* context, const ::grpcIBundler::setMapRequest* request, ::grpcIBundler::setMapResponse* response)
{
  SRef<SolAR::datastructure::Map> map = xpcf::deserialize<SRef<SolAR::datastructure::Map>>(request->map());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setMap(map);
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


::grpc::Status IBundler_grpcServer::grpcIBundlerServiceImpl::bundleAdjustment(::grpc::ServerContext* context, const ::grpcIBundler::bundleAdjustmentRequest* request, ::grpcIBundler::bundleAdjustmentResponse* response)
{
  SolAR::datastructure::CamCalibration K = xpcf::deserialize<SolAR::datastructure::CamCalibration>(request->k());
  SolAR::datastructure::CamDistortion D = xpcf::deserialize<SolAR::datastructure::CamDistortion>(request->d());
  std::vector<uint32_t> selectKeyframes = xpcf::deserialize<std::vector<uint32_t>>(request->selectkeyframes());
  double returnValue = m_xpcfComponent->bundleAdjustment(K, D, selectKeyframes);
  response->set_k(xpcf::serialize<SolAR::datastructure::CamCalibration>(K));
  response->set_d(xpcf::serialize<SolAR::datastructure::CamDistortion>(D));
  response->set_xpcfgrpcreturnvalue(returnValue);
  return ::grpc::Status::OK;
}


::grpc::Status IBundler_grpcServer::grpcIBundlerServiceImpl::optimizeSim3(::grpc::ServerContext* context, const ::grpcIBundler::optimizeSim3Request* request, ::grpcIBundler::optimizeSim3Response* response)
{
  SolAR::datastructure::CamCalibration K1 = xpcf::deserialize<SolAR::datastructure::CamCalibration>(request->k1());
  SolAR::datastructure::CamCalibration K2 = xpcf::deserialize<SolAR::datastructure::CamCalibration>(request->k2());
  SRef<SolAR::datastructure::Keyframe> keyframe1 = xpcf::deserialize<SRef<SolAR::datastructure::Keyframe>>(request->keyframe1());
  SRef<SolAR::datastructure::Keyframe> keyframe2 = xpcf::deserialize<SRef<SolAR::datastructure::Keyframe>>(request->keyframe2());
  std::vector<SolAR::datastructure::DescriptorMatch> matches = xpcf::deserialize<std::vector<SolAR::datastructure::DescriptorMatch>>(request->matches());
  std::vector<SolAR::datastructure::Point3Df> pts3D1 = xpcf::deserialize<std::vector<SolAR::datastructure::Point3Df>>(request->pts3d1());
  std::vector<SolAR::datastructure::Point3Df> pts3D2 = xpcf::deserialize<std::vector<SolAR::datastructure::Point3Df>>(request->pts3d2());
  SolAR::datastructure::Transform3Df pose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(request->pose());
  double returnValue = m_xpcfComponent->optimizeSim3(K1, K2, keyframe1, keyframe2, matches, pts3D1, pts3D2, pose);
  response->set_k1(xpcf::serialize<SolAR::datastructure::CamCalibration>(K1));
  response->set_k2(xpcf::serialize<SolAR::datastructure::CamCalibration>(K2));
  response->set_pose(xpcf::serialize<SolAR::datastructure::Transform3Df>(pose));
  response->set_xpcfgrpcreturnvalue(returnValue);
  return ::grpc::Status::OK;
}


}

