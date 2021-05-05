// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IBundler_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIBundler::IBundler_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIBundler::IBundler_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIBundler {

IBundler_grpcProxy::IBundler_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IBundler_grpcProxy>())
{
  declareInterface<SolAR::api::solver::map::IBundler>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IBundler_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IBundler_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIBundler::grpcIBundlerService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IBundler_grpcProxy::setMapper(SRef<SolAR::api::solver::map::IMapper> const map)
{
  ::grpc::ClientContext context;
  ::grpcIBundler::setMapperRequest reqIn;
  ::grpcIBundler::setMapperResponse respOut;
  reqIn.set_map(xpcf::serialize<SRef<SolAR::api::solver::map::IMapper>>(map));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setMapper(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setMapperrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIBundlerService","setMapper",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


double  IBundler_grpcProxy::bundleAdjustment(SolAR::datastructure::CamCalibration& K, SolAR::datastructure::CamDistortion& D, std::vector<uint32_t> const& selectKeyframes)
{
  ::grpc::ClientContext context;
  ::grpcIBundler::bundleAdjustmentRequest reqIn;
  ::grpcIBundler::bundleAdjustmentResponse respOut;
  reqIn.set_selectkeyframes(xpcf::serialize<std::vector<uint32_t>>(selectKeyframes));
  reqIn.set_k(xpcf::serialize<SolAR::datastructure::CamCalibration>(K));
  reqIn.set_d(xpcf::serialize<SolAR::datastructure::CamDistortion>(D));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->bundleAdjustment(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "bundleAdjustmentrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIBundlerService","bundleAdjustment",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  K = xpcf::deserialize<SolAR::datastructure::CamCalibration>(respOut.k());
  D = xpcf::deserialize<SolAR::datastructure::CamDistortion>(respOut.d());
  return respOut.xpcfgrpcreturnvalue();
}


}

