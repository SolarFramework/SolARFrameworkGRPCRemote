// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IOverlapDetector_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIOverlapDetector::IOverlapDetector_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIOverlapDetector::IOverlapDetector_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIOverlapDetector {

IOverlapDetector_grpcProxy::IOverlapDetector_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IOverlapDetector_grpcProxy>())
{
  declareInterface<SolAR::api::loop::IOverlapDetector>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IOverlapDetector_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IOverlapDetector_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIOverlapDetector::grpcIOverlapDetectorService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


void  IOverlapDetector_grpcProxy::setCameraParameters(SolAR::datastructure::CamCalibration const& intrinsicParams, SolAR::datastructure::CamDistortion const& distortionParams)
{
  ::grpc::ClientContext context;
  ::grpcIOverlapDetector::setCameraParametersRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_intrinsicparams(xpcf::serialize<SolAR::datastructure::CamCalibration>(intrinsicParams));
  reqIn.set_distortionparams(xpcf::serialize<SolAR::datastructure::CamDistortion>(distortionParams));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setCameraParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setCameraParametersrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIOverlapDetectorService","setCameraParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


SolAR::FrameworkReturnCode  IOverlapDetector_grpcProxy::detect(SRef<SolAR::datastructure::Map> const globalMap, SRef<SolAR::datastructure::Map> const floatingMap, SolAR::datastructure::Transform3Df& sim3Transform, std::vector<std::pair<uint32_t,uint32_t>>& cpOverlapIndices) const
{
  ::grpc::ClientContext context;
  ::grpcIOverlapDetector::detect_grpc0Request reqIn;
  ::grpcIOverlapDetector::detect_grpc0Response respOut;
  reqIn.set_globalmap(xpcf::serialize<SRef<SolAR::datastructure::Map>>(globalMap));
  reqIn.set_floatingmap(xpcf::serialize<SRef<SolAR::datastructure::Map>>(floatingMap));
  reqIn.set_sim3transform(xpcf::serialize<SolAR::datastructure::Transform3Df>(sim3Transform));
  reqIn.set_cpoverlapindices(xpcf::serialize<std::vector<std::pair<uint32_t,uint32_t>>>(cpOverlapIndices));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->detect_grpc0(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "detect_grpc0rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIOverlapDetectorService","detect_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  sim3Transform = xpcf::deserialize<SolAR::datastructure::Transform3Df>(respOut.sim3transform());
  cpOverlapIndices = xpcf::deserialize<std::vector<std::pair<uint32_t,uint32_t>>>(respOut.cpoverlapindices());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IOverlapDetector_grpcProxy::detect(SRef<SolAR::datastructure::Map> const globalMap, SRef<SolAR::datastructure::Map> const floatingMap, std::vector<SolAR::datastructure::Transform3Df>& sim3Transform, std::vector<std::pair<uint32_t,uint32_t>>& overlapIndices, std::vector<double>& scores) const
{
  ::grpc::ClientContext context;
  ::grpcIOverlapDetector::detect_grpc1Request reqIn;
  ::grpcIOverlapDetector::detect_grpc1Response respOut;
  reqIn.set_globalmap(xpcf::serialize<SRef<SolAR::datastructure::Map>>(globalMap));
  reqIn.set_floatingmap(xpcf::serialize<SRef<SolAR::datastructure::Map>>(floatingMap));
  reqIn.set_sim3transform(xpcf::serialize<std::vector<SolAR::datastructure::Transform3Df>>(sim3Transform));
  reqIn.set_overlapindices(xpcf::serialize<std::vector<std::pair<uint32_t,uint32_t>>>(overlapIndices));
  reqIn.set_scores(xpcf::serialize<std::vector<double>>(scores));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->detect_grpc1(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "detect_grpc1rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIOverlapDetectorService","detect_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  sim3Transform = xpcf::deserialize<std::vector<SolAR::datastructure::Transform3Df>>(respOut.sim3transform());
  overlapIndices = xpcf::deserialize<std::vector<std::pair<uint32_t,uint32_t>>>(respOut.overlapindices());
  scores = xpcf::deserialize<std::vector<double>>(respOut.scores());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

