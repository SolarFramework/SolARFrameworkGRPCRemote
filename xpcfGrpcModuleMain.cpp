#include "xpcfGrpcModuleMain.h"
#include <xpcf/module/ModuleFactory.h>
namespace xpcf=org::bcom::xpcf;
XPCF_DECLARE_MODULE("a0f522d1-b70e-4d0f-ad78-84e78a9af6bf", "xpcfGrpcRemotingSolARFramework","xpcf remoting module for project SolARFramework");

extern "C" XPCF_MODULEHOOKS_API xpcf::XPCFErrorCode XPCF_getComponent(const boost::uuids::uuid& componentUUID,SRef<xpcf::IComponentIntrospect>& interfaceRef)
{
  xpcf::XPCFErrorCode errCode = xpcf::XPCFErrorCode::_FAIL;
  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyI2DOverlay::I2DOverlay_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverI2DOverlay::I2DOverlay_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyI3DOverlay::I3DOverlay_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverI3DOverlay::I3DOverlay_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyI3DPointsViewer::I3DPointsViewer_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverI3DPointsViewer::I3DPointsViewer_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIImageViewer::IImageViewer_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIImageViewer::IImageViewer_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIMatchesOverlay::IMatchesOverlay_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIMatchesOverlay::IMatchesOverlay_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIContoursExtractor::IContoursExtractor_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIContoursExtractor::IContoursExtractor_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIContoursFilter::IContoursFilter_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIContoursFilter::IContoursFilter_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyICornerRefinement::ICornerRefinement_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverICornerRefinement::ICornerRefinement_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIDescriptorMatcher::IDescriptorMatcher_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIDescriptorMatcher::IDescriptorMatcher_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIDescriptorMatcherGeometric::IDescriptorMatcherGeometric_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIDescriptorMatcherGeometric::IDescriptorMatcherGeometric_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIDescriptorMatcherRegion::IDescriptorMatcherRegion_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIDescriptorMatcherRegion::IDescriptorMatcherRegion_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIDescriptorMatcherStereo::IDescriptorMatcherStereo_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIDescriptorMatcherStereo::IDescriptorMatcherStereo_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIDescriptorsExtractor::IDescriptorsExtractor_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIDescriptorsExtractor::IDescriptorsExtractor_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIDescriptorsExtractorFromImage::IDescriptorsExtractorFromImage_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIDescriptorsExtractorFromImage::IDescriptorsExtractorFromImage_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIDescriptorsExtractorSBPattern::IDescriptorsExtractorSBPattern_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIDescriptorsExtractorSBPattern::IDescriptorsExtractorSBPattern_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIFeatureWithDepthFromStereo::IFeatureWithDepthFromStereo_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIFeatureWithDepthFromStereo::IFeatureWithDepthFromStereo_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIImageMatcher::IImageMatcher_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIImageMatcher::IImageMatcher_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIKeypointDetector::IKeypointDetector_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIKeypointDetector::IKeypointDetector_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIKeypointDetectorRegion::IKeypointDetectorRegion_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIKeypointDetectorRegion::IKeypointDetectorRegion_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIKeypointsReIndexer::IKeypointsReIndexer_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIKeypointsReIndexer::IKeypointsReIndexer_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIMatchesFilter::IMatchesFilter_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIMatchesFilter::IMatchesFilter_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyISBPatternReIndexer::ISBPatternReIndexer_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverISBPatternReIndexer::ISBPatternReIndexer_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIVisualInertialFusion::IVisualInertialFusion_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIVisualInertialFusion::IVisualInertialFusion_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyI2DPointsRectification::I2DPointsRectification_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverI2DPointsRectification::I2DPointsRectification_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyI2DTransform::I2DTransform_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverI2DTransform::I2DTransform_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyI3DTransform::I3DTransform_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverI3DTransform::I3DTransform_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIDepthEstimation::IDepthEstimation_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIDepthEstimation::IDepthEstimation_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIImage2WorldMapper::IImage2WorldMapper_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIImage2WorldMapper::IImage2WorldMapper_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIProject::IProject_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIProject::IProject_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIReprojectionStereo::IReprojectionStereo_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIReprojectionStereo::IReprojectionStereo_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIUndistortPoints::IUndistortPoints_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIUndistortPoints::IUndistortPoints_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIUnproject::IUnproject_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIUnproject::IUnproject_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIImageConvertor::IImageConvertor_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIImageConvertor::IImageConvertor_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIImageFilter::IImageFilter_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIImageFilter::IImageFilter_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIImageLoader::IImageLoader_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIImageLoader::IImageLoader_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIImageRectification::IImageRectification_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIImageRectification::IImageRectification_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIPerspectiveController::IPerspectiveController_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIPerspectiveController::IPerspectiveController_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIARDevice::IARDevice_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIARDevice::IARDevice_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyICamera::ICamera_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverICamera::ICamera_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyICameraCalibration::ICameraCalibration_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverICameraCalibration::ICameraCalibration_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIDepthCamera::IDepthCamera_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIDepthCamera::IDepthCamera_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIDevice::IDevice_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIDevice::IDevice_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIIMU::IIMU_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIIMU::IIMU_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIRGBDCamera::IRGBDCamera_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIRGBDCamera::IRGBDCamera_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIStereoCameraCalibration::IStereoCameraCalibration_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIStereoCameraCalibration::IStereoCameraCalibration_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIPointCloudLoader::IPointCloudLoader_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIPointCloudLoader::IPointCloudLoader_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyITrackableLoader::ITrackableLoader_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverITrackableLoader::ITrackableLoader_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIWorldGraphLoader::IWorldGraphLoader_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIWorldGraphLoader::IWorldGraphLoader_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyILoopClosureDetector::ILoopClosureDetector_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverILoopClosureDetector::ILoopClosureDetector_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyILoopCorrector::ILoopCorrector_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverILoopCorrector::ILoopCorrector_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIOverlapDetector::IOverlapDetector_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIOverlapDetector::IOverlapDetector_grpcServer>(componentUUID,interfaceRef);
  }

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

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIKeyframeRetriever::IKeyframeRetriever_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIKeyframeRetriever::IKeyframeRetriever_grpcServer>(componentUUID,interfaceRef);
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

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyICovisibilityGraphManager::ICovisibilityGraphManager_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverICovisibilityGraphManager::ICovisibilityGraphManager_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIKeyframesManager::IKeyframesManager_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIKeyframesManager::IKeyframesManager_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIMapManager::IMapManager_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIMapManager::IMapManager_grpcServer>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::proxyIPointCloudManager::IPointCloudManager_grpcProxy>(componentUUID,interfaceRef);
  }

  if (errCode != xpcf::XPCFErrorCode::_SUCCESS)   {

    errCode = xpcf::tryCreateComponent<org::bcom::xpcf::grpc::serverIPointCloudManager::IPointCloudManager_grpcServer>(componentUUID,interfaceRef);
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
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyI2DOverlay::I2DOverlay_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverI2DOverlay::I2DOverlay_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyI3DOverlay::I3DOverlay_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverI3DOverlay::I3DOverlay_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyI3DPointsViewer::I3DPointsViewer_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverI3DPointsViewer::I3DPointsViewer_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIImageViewer::IImageViewer_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIImageViewer::IImageViewer_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIMatchesOverlay::IMatchesOverlay_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIMatchesOverlay::IMatchesOverlay_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIContoursExtractor::IContoursExtractor_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIContoursExtractor::IContoursExtractor_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIContoursFilter::IContoursFilter_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIContoursFilter::IContoursFilter_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyICornerRefinement::ICornerRefinement_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverICornerRefinement::ICornerRefinement_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIDescriptorMatcher::IDescriptorMatcher_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIDescriptorMatcher::IDescriptorMatcher_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIDescriptorMatcherGeometric::IDescriptorMatcherGeometric_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIDescriptorMatcherGeometric::IDescriptorMatcherGeometric_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIDescriptorMatcherRegion::IDescriptorMatcherRegion_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIDescriptorMatcherRegion::IDescriptorMatcherRegion_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIDescriptorMatcherStereo::IDescriptorMatcherStereo_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIDescriptorMatcherStereo::IDescriptorMatcherStereo_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIDescriptorsExtractor::IDescriptorsExtractor_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIDescriptorsExtractor::IDescriptorsExtractor_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIDescriptorsExtractorFromImage::IDescriptorsExtractorFromImage_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIDescriptorsExtractorFromImage::IDescriptorsExtractorFromImage_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIDescriptorsExtractorSBPattern::IDescriptorsExtractorSBPattern_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIDescriptorsExtractorSBPattern::IDescriptorsExtractorSBPattern_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIFeatureWithDepthFromStereo::IFeatureWithDepthFromStereo_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIFeatureWithDepthFromStereo::IFeatureWithDepthFromStereo_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIImageMatcher::IImageMatcher_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIImageMatcher::IImageMatcher_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIKeypointDetector::IKeypointDetector_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIKeypointDetector::IKeypointDetector_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIKeypointDetectorRegion::IKeypointDetectorRegion_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIKeypointDetectorRegion::IKeypointDetectorRegion_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIKeypointsReIndexer::IKeypointsReIndexer_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIKeypointsReIndexer::IKeypointsReIndexer_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIMatchesFilter::IMatchesFilter_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIMatchesFilter::IMatchesFilter_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyISBPatternReIndexer::ISBPatternReIndexer_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverISBPatternReIndexer::ISBPatternReIndexer_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIVisualInertialFusion::IVisualInertialFusion_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIVisualInertialFusion::IVisualInertialFusion_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyI2DPointsRectification::I2DPointsRectification_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverI2DPointsRectification::I2DPointsRectification_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyI2DTransform::I2DTransform_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverI2DTransform::I2DTransform_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyI3DTransform::I3DTransform_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverI3DTransform::I3DTransform_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIDepthEstimation::IDepthEstimation_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIDepthEstimation::IDepthEstimation_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIImage2WorldMapper::IImage2WorldMapper_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIImage2WorldMapper::IImage2WorldMapper_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIProject::IProject_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIProject::IProject_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIReprojectionStereo::IReprojectionStereo_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIReprojectionStereo::IReprojectionStereo_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIUndistortPoints::IUndistortPoints_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIUndistortPoints::IUndistortPoints_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIUnproject::IUnproject_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIUnproject::IUnproject_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIImageConvertor::IImageConvertor_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIImageConvertor::IImageConvertor_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIImageFilter::IImageFilter_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIImageFilter::IImageFilter_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIImageLoader::IImageLoader_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIImageLoader::IImageLoader_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIImageRectification::IImageRectification_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIImageRectification::IImageRectification_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIPerspectiveController::IPerspectiveController_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIPerspectiveController::IPerspectiveController_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIARDevice::IARDevice_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIARDevice::IARDevice_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyICamera::ICamera_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverICamera::ICamera_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyICameraCalibration::ICameraCalibration_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverICameraCalibration::ICameraCalibration_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIDepthCamera::IDepthCamera_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIDepthCamera::IDepthCamera_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIDevice::IDevice_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIDevice::IDevice_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIIMU::IIMU_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIIMU::IIMU_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIRGBDCamera::IRGBDCamera_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIRGBDCamera::IRGBDCamera_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIStereoCameraCalibration::IStereoCameraCalibration_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIStereoCameraCalibration::IStereoCameraCalibration_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIPointCloudLoader::IPointCloudLoader_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIPointCloudLoader::IPointCloudLoader_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyITrackableLoader::ITrackableLoader_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverITrackableLoader::ITrackableLoader_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIWorldGraphLoader::IWorldGraphLoader_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIWorldGraphLoader::IWorldGraphLoader_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyILoopClosureDetector::ILoopClosureDetector_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverILoopClosureDetector::ILoopClosureDetector_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyILoopCorrector::ILoopCorrector_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverILoopCorrector::ILoopCorrector_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIOverlapDetector::IOverlapDetector_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIOverlapDetector::IOverlapDetector_grpcServer)
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
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIKeyframeRetriever::IKeyframeRetriever_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIKeyframeRetriever::IKeyframeRetriever_grpcServer)
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
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyICovisibilityGraphManager::ICovisibilityGraphManager_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverICovisibilityGraphManager::ICovisibilityGraphManager_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIKeyframesManager::IKeyframesManager_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIKeyframesManager::IKeyframesManager_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIMapManager::IMapManager_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIMapManager::IMapManager_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIPointCloudManager::IPointCloudManager_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIPointCloudManager::IPointCloudManager_grpcServer)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::proxyIOpticalFlowEstimator::IOpticalFlowEstimator_grpcProxy)
XPCF_ADD_COMPONENT(org::bcom::xpcf::grpc::serverIOpticalFlowEstimator::IOpticalFlowEstimator_grpcServer)
XPCF_END_COMPONENTS_DECLARATION
