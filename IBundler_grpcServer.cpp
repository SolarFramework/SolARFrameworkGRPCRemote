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

::grpc::Status IBundler_grpcServer::grpcIBundlerServiceImpl::setMapper(::grpc::ServerContext* context, const ::grpcIBundler::setMapperRequest* request, ::grpcIBundler::setMapperResponse* response)
{
  SRef<SolAR::api::solver::map::IMapper> map = xpcf::deserialize<SRef<SolAR::api::solver::map::IMapper>>(request->map());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->setMapper(map);
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


}

