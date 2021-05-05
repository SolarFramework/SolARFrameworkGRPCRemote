// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "I2DTransform_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverI2DTransform::I2DTransform_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverI2DTransform::I2DTransform_grpcServer>();

namespace org::bcom::xpcf::grpc::serverI2DTransform {

I2DTransform_grpcServer::I2DTransform_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<I2DTransform_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::geom::I2DTransform>(m_grpcService.m_xpcfComponent);
}


void I2DTransform_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I2DTransform_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * I2DTransform_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status I2DTransform_grpcServer::grpcI2DTransformServiceImpl::transform(::grpc::ServerContext* context, const ::grpcI2DTransform::transformRequest* request, ::grpcI2DTransform::transformResponse* response)
{
  std::vector<SolAR::datastructure::Point2Df> inputPoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->inputpoints());
  SolAR::datastructure::Transform2Df transformation = xpcf::deserialize<SolAR::datastructure::Transform2Df>(request->transformation());
  std::vector<SolAR::datastructure::Point2Df> outputPoints = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(request->outputpoints());
  SolAR::FrameworkReturnCode returnValue = m_xpcfComponent->transform(inputPoints, transformation, outputPoints);
  response->set_outputpoints(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(outputPoints));
  response->set_xpcfgrpcreturnvalue(static_cast<int32_t>(returnValue));
  return ::grpc::Status::OK;
}


}

