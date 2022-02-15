// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "I2Dto3DTransformDecomposer_grpcProxy.h"
#include <cstddef>
#include <boost/date_time.hpp>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
#include <boost/algorithm/string.hpp>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyI2Dto3DTransformDecomposer::I2Dto3DTransformDecomposer_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyI2Dto3DTransformDecomposer::I2Dto3DTransformDecomposer_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyI2Dto3DTransformDecomposer {

I2Dto3DTransformDecomposer_grpcProxy::I2Dto3DTransformDecomposer_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<I2Dto3DTransformDecomposer_grpcProxy>())
{
  declareInterface<SolAR::api::solver::pose::I2Dto3DTransformDecomposer>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
  m_grpcProxyCompressionConfig.resize(3);
  declarePropertySequence("grpc_compress_proxy", m_grpcProxyCompressionConfig);
}


void I2Dto3DTransformDecomposer_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode I2Dto3DTransformDecomposer_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcI2Dto3DTransformDecomposer::grpcI2Dto3DTransformDecomposerService::NewStub(m_channel);
  for (auto & compressionLine : m_grpcProxyCompressionConfig) {
      translateClientConfiguration(compressionLine, m_serviceCompressionInfos, m_methodCompressionInfosMap);
  }
  return xpcf::XPCFErrorCode::_SUCCESS;
}


void  I2Dto3DTransformDecomposer_grpcProxy::setCameraParameters(SolAR::datastructure::CamCalibration const& intrinsicParams, SolAR::datastructure::CamDistortion const& distorsionParams)
{
  ::grpc::ClientContext context;
  ::grpcI2Dto3DTransformDecomposer::setCameraParametersRequest reqIn;
  ::google::protobuf::Empty respOut;
  reqIn.set_intrinsicparams(xpcf::serialize<SolAR::datastructure::CamCalibration>(intrinsicParams));
  reqIn.set_distorsionparams(xpcf::serialize<SolAR::datastructure::CamDistortion>(distorsionParams));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I2Dto3DTransformDecomposer_grpcProxy::setCameraParameters request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->setCameraParameters(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I2Dto3DTransformDecomposer_grpcProxy::setCameraParameters response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "setCameraParameters rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcI2Dto3DTransformDecomposerService","setCameraParameters",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

}


bool  I2Dto3DTransformDecomposer_grpcProxy::decompose(SolAR::datastructure::Transform2Df const& F, std::vector<SolAR::datastructure::Transform3Df>& decomposedPoses)
{
  ::grpc::ClientContext context;
  ::grpcI2Dto3DTransformDecomposer::decomposeRequest reqIn;
  ::grpcI2Dto3DTransformDecomposer::decomposeResponse respOut;
  #ifndef DISABLE_GRPC_COMPRESSION
  xpcf::grpcCompressionInfos proxyCompressionInfo = xpcf::deduceClientCompressionInfo(m_serviceCompressionInfos, "decompose", m_methodCompressionInfosMap);
  xpcf::grpcCompressType serverCompressionType = xpcf::prepareClientCompressionContext(context, proxyCompressionInfo);
  reqIn.set_grpcservercompressionformat (static_cast<int32_t>(serverCompressionType));
  #endif
  reqIn.set_f(xpcf::serialize<SolAR::datastructure::Transform2Df>(F));
  reqIn.set_decomposedposes(xpcf::serialize<std::vector<SolAR::datastructure::Transform3Df>>(decomposedPoses));
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime start = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I2Dto3DTransformDecomposer_grpcProxy::decompose request sent at " << to_simple_string(start) << std::endl;
  #endif
  ::grpc::Status grpcRemoteStatus = m_grpcStub->decompose(&context, reqIn, &respOut);
  #ifdef ENABLE_PROXY_TIMERS
  boost::posix_time::ptime end = boost::posix_time::microsec_clock::universal_time();
  std::cout << "====> I2Dto3DTransformDecomposer_grpcProxy::decompose response received at " << to_simple_string(end) << std::endl;
  std::cout << "   => elapsed time = " << ((end - start).total_microseconds() / 1000.00) << " ms" << std::endl;
  #endif
  if (!grpcRemoteStatus.ok())  {
    std::cout << "decompose rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcI2Dto3DTransformDecomposerService","decompose",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  decomposedPoses = xpcf::deserialize<std::vector<SolAR::datastructure::Transform3Df>>(respOut.decomposedposes());
  return respOut.xpcfgrpcreturnvalue();
}


}

