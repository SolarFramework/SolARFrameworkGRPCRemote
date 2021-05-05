// GRPC Server Class implementation generated with xpcf_grpc_gen
#include "I2Dto3DTransformDecomposer_grpcServer.h"
#include <cstddef>
#include <xpcf/remoting/ISerializable.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::serverI2Dto3DTransformDecomposer::I2Dto3DTransformDecomposer_grpcServer* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::serverI2Dto3DTransformDecomposer::I2Dto3DTransformDecomposer_grpcServer>();

namespace org::bcom::xpcf::grpc::serverI2Dto3DTransformDecomposer {

I2Dto3DTransformDecomposer_grpcServer::I2Dto3DTransformDecomposer_grpcServer():xpcf::ConfigurableBase(xpcf::toMap<I2Dto3DTransformDecomposer_grpcServer>())
{
  declareInterface<xpcf::IGrpcService>(this);
  declareInjectable<SolAR::api::solver::pose::I2Dto3DTransformDecomposer>(m_grpcService.m_xpcfComponent);
}


void I2Dto3DTransformDecomposer_grpcServer::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I2Dto3DTransformDecomposer_grpcServer::onConfigured()
{
  return xpcf::XPCFErrorCode::_SUCCESS;
}


::grpc::Service * I2Dto3DTransformDecomposer_grpcServer::getService()
{
  return &m_grpcService;
}

::grpc::Status I2Dto3DTransformDecomposer_grpcServer::grpcI2Dto3DTransformDecomposerServiceImpl::setCameraParameters(::grpc::ServerContext* context, const ::grpcI2Dto3DTransformDecomposer::setCameraParametersRequest* request, ::google::protobuf::Empty* response)
{
  SolAR::datastructure::CamCalibration intrinsicParams = xpcf::deserialize<SolAR::datastructure::CamCalibration>(request->intrinsicparams());
  SolAR::datastructure::CamDistortion distorsionParams = xpcf::deserialize<SolAR::datastructure::CamDistortion>(request->distorsionparams());
  m_xpcfComponent->setCameraParameters(intrinsicParams, distorsionParams);
  return ::grpc::Status::OK;
}


::grpc::Status I2Dto3DTransformDecomposer_grpcServer::grpcI2Dto3DTransformDecomposerServiceImpl::decompose(::grpc::ServerContext* context, const ::grpcI2Dto3DTransformDecomposer::decomposeRequest* request, ::grpcI2Dto3DTransformDecomposer::decomposeResponse* response)
{
  SolAR::datastructure::Transform2Df F = xpcf::deserialize<SolAR::datastructure::Transform2Df>(request->f());
  std::vector<SolAR::datastructure::Transform3Df> decomposedPoses = xpcf::deserialize<std::vector<SolAR::datastructure::Transform3Df>>(request->decomposedposes());
  bool returnValue = m_xpcfComponent->decompose(F, decomposedPoses);
  response->set_decomposedposes(xpcf::serialize<std::vector<SolAR::datastructure::Transform3Df>>(decomposedPoses));
  response->set_xpcfgrpcreturnvalue(returnValue);
  return ::grpc::Status::OK;
}


}

