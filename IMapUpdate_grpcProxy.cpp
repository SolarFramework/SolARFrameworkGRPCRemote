// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IMapUpdate_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIMapUpdate::IMapUpdate_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIMapUpdate::IMapUpdate_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIMapUpdate {

IMapUpdate_grpcProxy::IMapUpdate_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IMapUpdate_grpcProxy>())
{
  declareInterface<SolAR::api::solver::map::IMapUpdate>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IMapUpdate_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IMapUpdate_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIMapUpdate::grpcIMapUpdateService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


void  IMapUpdate_grpcProxy::setCameraParameters(SolAR::datastructure::CamCalibration const& intrinsicParams, SolAR::datastructure::CamDistortion const& distortionParams)
{
  ::grpc::ClientContext context;
  ::grpcIMapUpdate::setCameraParametersRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_intrinsicparams(xpcf::serialize<SolAR::datastructure::CamCalibration>(intrinsicParams));
  reqIn.set_distortionparams(xpcf::serialize<SolAR::datastructure::CamDistortion>(distortionParams));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setCameraParameters(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setCameraParameters rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMapUpdateService","setCameraParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


SolAR::FrameworkReturnCode  IMapUpdate_grpcProxy::update(SRef<SolAR::datastructure::Map> globalMap, std::vector<uint32_t> const& newKeyframeIds)
{
  ::grpc::ClientContext context;
  ::grpcIMapUpdate::updateRequest reqIn;
  ::grpcIMapUpdate::updateResponse respOut;
  reqIn.set_globalmap(xpcf::serialize<SRef<SolAR::datastructure::Map>>(globalMap));
  reqIn.set_newkeyframeids(xpcf::serialize<std::vector<uint32_t>>(newKeyframeIds));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->update(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "update rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIMapUpdateService","update",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

