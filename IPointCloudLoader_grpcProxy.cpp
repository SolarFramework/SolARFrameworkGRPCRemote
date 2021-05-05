// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IPointCloudLoader_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIPointCloudLoader::IPointCloudLoader_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIPointCloudLoader::IPointCloudLoader_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIPointCloudLoader {

IPointCloudLoader_grpcProxy::IPointCloudLoader_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IPointCloudLoader_grpcProxy>())
{
  declareInterface<SolAR::api::input::files::IPointCloudLoader>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IPointCloudLoader_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IPointCloudLoader_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIPointCloudLoader::grpcIPointCloudLoaderService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IPointCloudLoader_grpcProxy::load(std::string const& filepath, SRef<SolAR::datastructure::PointCloud>& pointCloud)
{
  ::grpc::ClientContext context;
  ::grpcIPointCloudLoader::loadRequest reqIn;
  ::grpcIPointCloudLoader::loadResponse respOut;
  reqIn.set_filepath(filepath);
  reqIn.set_pointcloud(xpcf::serialize<SRef<SolAR::datastructure::PointCloud>>(pointCloud));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->load(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "loadrpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIPointCloudLoaderService","load",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  pointCloud = xpcf::deserialize<SRef<SolAR::datastructure::PointCloud>>(respOut.pointcloud());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

