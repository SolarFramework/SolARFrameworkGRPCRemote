// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "I2Dto3DTransformDecomposerValidation_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverI2Dto3DTransformDecomposerValidation::I2Dto3DTransformDecomposerValidation_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverI2Dto3DTransformDecomposerValidation::I2Dto3DTransformDecomposerValidation_grpcServer>();

namespace org::bcom::xpcf::grpc::serverI2Dto3DTransformDecomposerValidation {

I2Dto3DTransformDecomposerValidation_grpcServer::I2Dto3DTransformDecomposerValidation_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<I2Dto3DTransformDecomposerValidation_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::solver::pose::I2Dto3DTransformDecomposerValidation>(m_grpcService.m_xpcfComponent);
}


void I2Dto3DTransformDecomposerValidation_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I2Dto3DTransformDecomposerValidation_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * I2Dto3DTransformDecomposerValidation_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status I2Dto3DTransformDecomposerValidation_grpcServer::grpcI2Dto3DTransformDecomposerValidationServiceImpl::testMethod(::grpc::ServerContext* context, const ::google::protobuf::Empty* request, ::google::protobuf::Empty* response)
{
  m_xpcfComponent->testMethod();
  return ::grpc::Status::OK;
}


}

