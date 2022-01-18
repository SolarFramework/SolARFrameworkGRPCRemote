#include "xpcfGrpcModuleMain.h"
#include <xpcf/module/ModuleFactory.h>
namespace xpcf=org::bcom::xpcf;
XPCF_DECLARE_MODULE("a0f522d1-b70e-4d0f-ad78-84e78a9af6bf", "xpcfGrpcRemotingSolARFramework","xpcf remoting module for project SolARFramework");

extern "C" XPCF_MODULEHOOKS_API xpcf::XPCFErrorCode XPCF_getComponent(const boost::uuids::uuid& componentUUID,SRef<xpcf::IComponentIntrospect>& interfaceRef)
{
  xpcf::XPCFErrorCode errCode = xpcf::XPCFErrorCode::_FAIL;

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIAsyncRelocalizationPipeline::IAsyncRelocalizationPipeline_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIAsyncRelocalizationPipeline::IAsyncRelocalizationPipeline_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIMapUpdatePipeline::IMapUpdatePipeline_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIMapUpdatePipeline::IMapUpdatePipeline_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIMappingPipeline::IMappingPipeline_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIMappingPipeline::IMappingPipeline_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIRelocalizationPipeline::IRelocalizationPipeline_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIRelocalizationPipeline::IRelocalizationPipeline_grpcServer>(componentUUID,interfaceRef);
  }

  return errCode;
}


XPCF_BEGIN_COMPONENTS_DECLARATION
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIAsyncRelocalizationPipeline::IAsyncRelocalizationPipeline_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIAsyncRelocalizationPipeline::IAsyncRelocalizationPipeline_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIMapUpdatePipeline::IMapUpdatePipeline_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIMapUpdatePipeline::IMapUpdatePipeline_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIMappingPipeline::IMappingPipeline_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIMappingPipeline::IMappingPipeline_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIRelocalizationPipeline::IRelocalizationPipeline_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIRelocalizationPipeline::IRelocalizationPipeline_grpcServer)
XPCF_END_COMPONENTS_DECLARATION
