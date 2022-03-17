#include "xpcfGrpcModuleMain.h"
#include <xpcf/module/ModuleFactory.h>
namespace xpcf=org::bcom::xpcf;
XPCF_DECLARE_MODULE("084a0405-6483-4bd2-8115-993b634533fa", "xpcfGrpcRemotingSolARFramework","xpcf remoting module for project SolARFramework");

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

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIPCFilter::IPCFilter_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIPCFilter::IPCFilter_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIPCFilterCentroid::IPCFilterCentroid_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIPCFilterCentroid::IPCFilterCentroid_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIRegression::IRegression_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIRegression::IRegression_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIRelocalizer::IRelocalizer_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIRelocalizer::IRelocalizer_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIBootstrapper::IBootstrapper_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIBootstrapper::IBootstrapper_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIMapping::IMapping_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIMapping::IMapping_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyITracking::ITracking_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverITracking::ITracking_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIBundler::IBundler_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIBundler::IBundler_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIMapFilter::IMapFilter_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIMapFilter::IMapFilter_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIMapUpdate::IMapUpdate_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIMapUpdate::IMapUpdate_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyITriangulator::ITriangulator_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverITriangulator::ITriangulator_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyI2D3DCorrespondencesFinder::I2D3DCorrespondencesFinder_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverI2D3DCorrespondencesFinder::I2D3DCorrespondencesFinder_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyI2DTransformFinder::I2DTransformFinder_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverI2DTransformFinder::I2DTransformFinder_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyI2Dto3DTransformDecomposer::I2Dto3DTransformDecomposer_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverI2Dto3DTransformDecomposer::I2Dto3DTransformDecomposer_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyI2Dto3DTransformDecomposerValidation::I2Dto3DTransformDecomposerValidation_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverI2Dto3DTransformDecomposerValidation::I2Dto3DTransformDecomposerValidation_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyI3D3DCorrespondencesFinder::I3D3DCorrespondencesFinder_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverI3D3DCorrespondencesFinder::I3D3DCorrespondencesFinder_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyI3DTransformFinderFrom2D2D::I3DTransformFinderFrom2D2D_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverI3DTransformFinderFrom2D2D::I3DTransformFinderFrom2D2D_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyI3DTransformFinderFrom2D3D::I3DTransformFinderFrom2D3D_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverI3DTransformFinderFrom2D3D::I3DTransformFinderFrom2D3D_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyI3DTransformFinderFrom3D3D::I3DTransformFinderFrom3D3D_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverI3DTransformFinderFrom3D3D::I3DTransformFinderFrom3D3D_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyI3DTransformSACFinderFrom2D3D::I3DTransformSACFinderFrom2D3D_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverI3DTransformSACFinderFrom2D3D::I3DTransformSACFinderFrom2D3D_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyI3DTransformSACFinderFrom3D3D::I3DTransformSACFinderFrom3D3D_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverI3DTransformSACFinderFrom3D3D::I3DTransformSACFinderFrom3D3D_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIHomographyValidation::IHomographyValidation_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIHomographyValidation::IHomographyValidation_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyITrackablePose::ITrackablePose_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverITrackablePose::ITrackablePose_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIMapManager::IMapManager_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIMapManager::IMapManager_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIOpticalFlowEstimator::IOpticalFlowEstimator_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIOpticalFlowEstimator::IOpticalFlowEstimator_grpcServer>(componentUUID,interfaceRef);
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
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIPCFilter::IPCFilter_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIPCFilter::IPCFilter_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIPCFilterCentroid::IPCFilterCentroid_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIPCFilterCentroid::IPCFilterCentroid_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIRegression::IRegression_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIRegression::IRegression_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIRelocalizer::IRelocalizer_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIRelocalizer::IRelocalizer_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIBootstrapper::IBootstrapper_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIBootstrapper::IBootstrapper_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIMapping::IMapping_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIMapping::IMapping_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyITracking::ITracking_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverITracking::ITracking_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIBundler::IBundler_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIBundler::IBundler_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIMapFilter::IMapFilter_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIMapFilter::IMapFilter_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIMapUpdate::IMapUpdate_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIMapUpdate::IMapUpdate_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyITriangulator::ITriangulator_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverITriangulator::ITriangulator_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyI2D3DCorrespondencesFinder::I2D3DCorrespondencesFinder_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverI2D3DCorrespondencesFinder::I2D3DCorrespondencesFinder_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyI2DTransformFinder::I2DTransformFinder_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverI2DTransformFinder::I2DTransformFinder_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyI2Dto3DTransformDecomposer::I2Dto3DTransformDecomposer_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverI2Dto3DTransformDecomposer::I2Dto3DTransformDecomposer_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyI2Dto3DTransformDecomposerValidation::I2Dto3DTransformDecomposerValidation_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverI2Dto3DTransformDecomposerValidation::I2Dto3DTransformDecomposerValidation_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyI3D3DCorrespondencesFinder::I3D3DCorrespondencesFinder_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverI3D3DCorrespondencesFinder::I3D3DCorrespondencesFinder_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyI3DTransformFinderFrom2D2D::I3DTransformFinderFrom2D2D_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverI3DTransformFinderFrom2D2D::I3DTransformFinderFrom2D2D_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyI3DTransformFinderFrom2D3D::I3DTransformFinderFrom2D3D_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverI3DTransformFinderFrom2D3D::I3DTransformFinderFrom2D3D_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyI3DTransformFinderFrom3D3D::I3DTransformFinderFrom3D3D_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverI3DTransformFinderFrom3D3D::I3DTransformFinderFrom3D3D_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyI3DTransformSACFinderFrom2D3D::I3DTransformSACFinderFrom2D3D_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverI3DTransformSACFinderFrom2D3D::I3DTransformSACFinderFrom2D3D_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyI3DTransformSACFinderFrom3D3D::I3DTransformSACFinderFrom3D3D_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverI3DTransformSACFinderFrom3D3D::I3DTransformSACFinderFrom3D3D_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIHomographyValidation::IHomographyValidation_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIHomographyValidation::IHomographyValidation_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyITrackablePose::ITrackablePose_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverITrackablePose::ITrackablePose_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIMapManager::IMapManager_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIMapManager::IMapManager_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIOpticalFlowEstimator::IOpticalFlowEstimator_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIOpticalFlowEstimator::IOpticalFlowEstimator_grpcServer)
XPCF_END_COMPONENTS_DECLARATION
