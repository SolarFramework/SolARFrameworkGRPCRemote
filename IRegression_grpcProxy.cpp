// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IRegression_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIRegression::IRegression_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIRegression::IRegression_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIRegression {

IRegression_grpcProxy::IRegression_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IRegression_grpcProxy>())
{
  declareInterface<SolAR::api::reloc::IRegression>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IRegression_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IRegression_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIRegression::grpcIRegressionService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


void  IRegression_grpcProxy::setCameraParameters(SolAR::datastructure::CamCalibration const& intrinsicParams, SolAR::datastructure::CamDistortion const& distorsionParams)
{
  ::grpc::ClientContext context;
  ::grpcIRegression::setCameraParametersRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_intrinsicparams(xpcf::serialize<SolAR::datastructure::CamCalibration>(intrinsicParams));
  reqIn.set_distorsionparams(xpcf::serialize<SolAR::datastructure::CamDistortion>(distorsionParams));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setCameraParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setCameraParametersrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRegressionService","setCameraParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


SolAR::FrameworkReturnCode  IRegression_grpcProxy::add(std::vector<SRef<SolAR::datastructure::DescriptorBuffer>> const& descriptors, std::vector<SolAR::datastructure::Point3Df> const& points3D)
{
  ::grpc::ClientContext context;
  ::grpcIRegression::addRequest reqIn;
  ::grpcIRegression::addResponse respOut;
  reqIn.set_descriptors(xpcf::serialize<std::vector<SRef<SolAR::datastructure::DescriptorBuffer>>>(descriptors));
  reqIn.set_points3d(xpcf::serialize<std::vector<SolAR::datastructure::Point3Df>>(points3D));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->add(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "addrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRegressionService","add",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IRegression_grpcProxy::regress(SRef<SolAR::datastructure::Frame> const& frame, std::vector<SolAR::datastructure::Point2Df>& points2D, std::vector<SolAR::datastructure::Point3Df>& points3D)
{
  ::grpc::ClientContext context;
  ::grpcIRegression::regressRequest reqIn;
  ::grpcIRegression::regressResponse respOut;
  reqIn.set_frame(xpcf::serialize<SRef<SolAR::datastructure::Frame>>(frame));
  reqIn.set_points2d(xpcf::serialize<std::vector<SolAR::datastructure::Point2Df>>(points2D));
  reqIn.set_points3d(xpcf::serialize<std::vector<SolAR::datastructure::Point3Df>>(points3D));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->regress(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "regressrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRegressionService","regress",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  points2D = xpcf::deserialize<std::vector<SolAR::datastructure::Point2Df>>(respOut.points2d());
  points3D = xpcf::deserialize<std::vector<SolAR::datastructure::Point3Df>>(respOut.points3d());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IRegression_grpcProxy::update(std::vector<bool>& inliers, SolAR::datastructure::Transform3Df& cameraPose)
{
  ::grpc::ClientContext context;
  ::grpcIRegression::updateRequest reqIn;
  ::grpcIRegression::updateResponse respOut;
  reqIn.set_inliers(xpcf::serialize<std::vector<bool>>(inliers));
  reqIn.set_camerapose(xpcf::serialize<SolAR::datastructure::Transform3Df>(cameraPose));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->update(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "updaterpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRegressionService","update",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  inliers = xpcf::deserialize<std::vector<bool>>(respOut.inliers());
  cameraPose = xpcf::deserialize<SolAR::datastructure::Transform3Df>(respOut.camerapose());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IRegression_grpcProxy::loadModel()
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIRegression::loadModelResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->loadModel(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "loadModelrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRegressionService","loadModel",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


std::vector<int>  IRegression_grpcProxy::getTrainingStatus()
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIRegression::getTrainingStatusResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getTrainingStatus(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getTrainingStatusrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRegressionService","getTrainingStatus",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


int  IRegression_grpcProxy::getNumActiveLeaves()
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIRegression::getNumActiveLeavesResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getNumActiveLeaves(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getNumActiveLeavesrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRegressionService","getNumActiveLeaves",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return respOut.xpcfgrpcreturnvalue();
}


int  IRegression_grpcProxy::getNumPassiveLeaves()
{
  ::grpc::ClientContext context;
  ::google::protobuf::Empty reqIn;
  ::grpcIRegression::getNumPassiveLeavesResponse respOut;
  ::grpc::Status grpcRemoteStatus = m_grpcStub->getNumPassiveLeaves(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "getNumPassiveLeavesrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIRegressionService","getNumPassiveLeaves",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return respOut.xpcfgrpcreturnvalue();
}


}

