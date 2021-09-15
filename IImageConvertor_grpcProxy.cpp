// GRPC Proxy Class implementation generated with xpcf_grpc_gen
#include "IImageConvertor_grpcProxy.h"
#include <cstddef>
#include <xpcf/core/Exception.h>
#include <xpcf/remoting/ISerializable.h>
#include <xpcf/remoting/GrpcHelper.h>
#include <grpcpp/client_context.h>
#include <grpcpp/create_channel.h>
#include <grpcpp/security/credentials.h>
namespace xpcf = org::bcom::xpcf;

template<> org::bcom::xpcf::grpc::proxyIImageConvertor::IImageConvertor_grpcProxy* xpcf::ComponentFactory::createInstance<org::bcom::xpcf::grpc::proxyIImageConvertor::IImageConvertor_grpcProxy>();

namespace org::bcom::xpcf::grpc::proxyIImageConvertor {

IImageConvertor_grpcProxy::IImageConvertor_grpcProxy():xpcf::ConfigurableBase(xpcf::toMap<IImageConvertor_grpcProxy>())
{
  declareInterface<SolAR::api::image::IImageConvertor>(this);
  declareProperty("channelUrl",m_channelUrl);
  declareProperty("channelCredentials",m_channelCredentials);
}


void IImageConvertor_grpcProxy::unloadComponent ()
{
  delete this;
  return;
}


XPCFErrorCode IImageConvertor_grpcProxy::onConfigured()
{
  m_channel = ::grpc::CreateChannel(m_channelUrl, xpcf::GrpcHelper::getCredentials(static_cast<xpcf::grpcCredentials>(m_channelCredentials)));
  m_grpcStub = ::grpcIImageConvertor::grpcIImageConvertorService::NewStub(m_channel);
  return xpcf::XPCFErrorCode::_SUCCESS;
}


SolAR::FrameworkReturnCode  IImageConvertor_grpcProxy::convert(SRef<SolAR::datastructure::Image> const imgSrc, SRef<SolAR::datastructure::Image>& imgDst)
{
  ::grpc::ClientContext context;
  ::grpcIImageConvertor::convert_grpc0Request reqIn;
  ::grpcIImageConvertor::convert_grpc0Response respOut;
  reqIn.set_imgsrc(xpcf::serialize<SRef<SolAR::datastructure::Image>>(imgSrc));
  reqIn.set_imgdst(xpcf::serialize<SRef<SolAR::datastructure::Image>>(imgDst));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->convert_grpc0(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "convert_grpc0 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIImageConvertorService","convert_grpc0",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  imgDst = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(respOut.imgdst());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IImageConvertor_grpcProxy::convert(SRef<SolAR::datastructure::Image> const imgSrc, SRef<SolAR::datastructure::Image>& imgDst, SolAR::datastructure::Image::ImageLayout destLayout)
{
  ::grpc::ClientContext context;
  ::grpcIImageConvertor::convert_grpc1Request reqIn;
  ::grpcIImageConvertor::convert_grpc1Response respOut;
  reqIn.set_imgsrc(xpcf::serialize<SRef<SolAR::datastructure::Image>>(imgSrc));
  reqIn.set_destlayout(static_cast<int32_t>(destLayout));
  reqIn.set_imgdst(xpcf::serialize<SRef<SolAR::datastructure::Image>>(imgDst));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->convert_grpc1(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "convert_grpc1 rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIImageConvertorService","convert_grpc1",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  imgDst = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(respOut.imgdst());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


SolAR::FrameworkReturnCode  IImageConvertor_grpcProxy::convertLookUpTable(SRef<SolAR::datastructure::Image> const imgSrc, SRef<SolAR::datastructure::Image>& imgDst)
{
  ::grpc::ClientContext context;
  ::grpcIImageConvertor::convertLookUpTableRequest reqIn;
  ::grpcIImageConvertor::convertLookUpTableResponse respOut;
  reqIn.set_imgsrc(xpcf::serialize<SRef<SolAR::datastructure::Image>>(imgSrc));
  reqIn.set_imgdst(xpcf::serialize<SRef<SolAR::datastructure::Image>>(imgDst));
  ::grpc::Status grpcRemoteStatus = m_grpcStub->convertLookUpTable(&context, reqIn, &respOut);
  if (!grpcRemoteStatus.ok())  {
    std::cout << "convertLookUpTable rpc failed." << std::endl;
    throw xpcf::RemotingException("grpcIImageConvertorService","convertLookUpTable",static_cast<uint32_t>(grpcRemoteStatus.error_code()));
  }

  imgDst = xpcf::deserialize<SRef<SolAR::datastructure::Image>>(respOut.imgdst());
  return static_cast<SolAR::FrameworkReturnCode>(respOut.xpcfgrpcreturnvalue());
}


}

