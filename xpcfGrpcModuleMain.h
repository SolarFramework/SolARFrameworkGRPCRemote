// Class Header generated with xpcf_grpc_gen


#ifndef XPCFGRPCMODULEMAIN_H
#define XPCFGRPCMODULEMAIN_H
#include "I2DOverlay_grpcProxy.h"
#include "I2DOverlay_grpcServer.h"
#include "I3DOverlay_grpcProxy.h"
#include "I3DOverlay_grpcServer.h"
#include "I3DPointsViewer_grpcProxy.h"
#include "I3DPointsViewer_grpcServer.h"
#include "IImageViewer_grpcProxy.h"
#include "IImageViewer_grpcServer.h"
#include "IMatchesOverlay_grpcProxy.h"
#include "IMatchesOverlay_grpcServer.h"
#include "IContoursExtractor_grpcProxy.h"
#include "IContoursExtractor_grpcServer.h"
#include "IContoursFilter_grpcProxy.h"
#include "IContoursFilter_grpcServer.h"
#include "ICornerRefinement_grpcProxy.h"
#include "ICornerRefinement_grpcServer.h"
#include "IDescriptorMatcher_grpcProxy.h"
#include "IDescriptorMatcher_grpcServer.h"
#include "IDescriptorMatcherGeometric_grpcProxy.h"
#include "IDescriptorMatcherGeometric_grpcServer.h"
#include "IDescriptorMatcherRegion_grpcProxy.h"
#include "IDescriptorMatcherRegion_grpcServer.h"
#include "IDescriptorMatcherStereo_grpcProxy.h"
#include "IDescriptorMatcherStereo_grpcServer.h"
#include "IDescriptorsExtractor_grpcProxy.h"
#include "IDescriptorsExtractor_grpcServer.h"
#include "IDescriptorsExtractorFromImage_grpcProxy.h"
#include "IDescriptorsExtractorFromImage_grpcServer.h"
#include "IDescriptorsExtractorSBPattern_grpcProxy.h"
#include "IDescriptorsExtractorSBPattern_grpcServer.h"
#include "IFeatureWithDepthFromStereo_grpcProxy.h"
#include "IFeatureWithDepthFromStereo_grpcServer.h"
#include "IImageMatcher_grpcProxy.h"
#include "IImageMatcher_grpcServer.h"
#include "IKeypointDetector_grpcProxy.h"
#include "IKeypointDetector_grpcServer.h"
#include "IKeypointDetectorRegion_grpcProxy.h"
#include "IKeypointDetectorRegion_grpcServer.h"
#include "IKeypointsReIndexer_grpcProxy.h"
#include "IKeypointsReIndexer_grpcServer.h"
#include "IMatchesFilter_grpcProxy.h"
#include "IMatchesFilter_grpcServer.h"
#include "ISBPatternReIndexer_grpcProxy.h"
#include "ISBPatternReIndexer_grpcServer.h"
#include "IVisualInertialFusion_grpcProxy.h"
#include "IVisualInertialFusion_grpcServer.h"
#include "I2DPointsRectification_grpcProxy.h"
#include "I2DPointsRectification_grpcServer.h"
#include "I2DTransform_grpcProxy.h"
#include "I2DTransform_grpcServer.h"
#include "I3DTransform_grpcProxy.h"
#include "I3DTransform_grpcServer.h"
#include "IDepthEstimation_grpcProxy.h"
#include "IDepthEstimation_grpcServer.h"
#include "IImage2WorldMapper_grpcProxy.h"
#include "IImage2WorldMapper_grpcServer.h"
#include "IProject_grpcProxy.h"
#include "IProject_grpcServer.h"
#include "IReprojectionStereo_grpcProxy.h"
#include "IReprojectionStereo_grpcServer.h"
#include "IUndistortPoints_grpcProxy.h"
#include "IUndistortPoints_grpcServer.h"
#include "IUnproject_grpcProxy.h"
#include "IUnproject_grpcServer.h"
#include "IImageConvertor_grpcProxy.h"
#include "IImageConvertor_grpcServer.h"
#include "IImageFilter_grpcProxy.h"
#include "IImageFilter_grpcServer.h"
#include "IImageLoader_grpcProxy.h"
#include "IImageLoader_grpcServer.h"
#include "IImageRectification_grpcProxy.h"
#include "IImageRectification_grpcServer.h"
#include "IPerspectiveController_grpcProxy.h"
#include "IPerspectiveController_grpcServer.h"
#include "IARDevice_grpcProxy.h"
#include "IARDevice_grpcServer.h"
#include "ICamera_grpcProxy.h"
#include "ICamera_grpcServer.h"
#include "ICameraCalibration_grpcProxy.h"
#include "ICameraCalibration_grpcServer.h"
#include "IDepthCamera_grpcProxy.h"
#include "IDepthCamera_grpcServer.h"
#include "IDevice_grpcProxy.h"
#include "IDevice_grpcServer.h"
#include "IIMU_grpcProxy.h"
#include "IIMU_grpcServer.h"
#include "IRGBDCamera_grpcProxy.h"
#include "IRGBDCamera_grpcServer.h"
#include "IStereoCameraCalibration_grpcProxy.h"
#include "IStereoCameraCalibration_grpcServer.h"
#include "IPointCloudLoader_grpcProxy.h"
#include "IPointCloudLoader_grpcServer.h"
#include "ITrackableLoader_grpcProxy.h"
#include "ITrackableLoader_grpcServer.h"
#include "ILoopClosureDetector_grpcProxy.h"
#include "ILoopClosureDetector_grpcServer.h"
#include "ILoopCorrector_grpcProxy.h"
#include "ILoopCorrector_grpcServer.h"
#include "IOverlapDetector_grpcProxy.h"
#include "IOverlapDetector_grpcServer.h"
#include "IMapUpdatePipeline_grpcProxy.h"
#include "IMapUpdatePipeline_grpcServer.h"
#include "IMappingPipeline_grpcProxy.h"
#include "IMappingPipeline_grpcServer.h"
#include "IRelocalizationPipeline_grpcProxy.h"
#include "IRelocalizationPipeline_grpcServer.h"
#include "IPCFilter_grpcProxy.h"
#include "IPCFilter_grpcServer.h"
#include "IPCFilterCentroid_grpcProxy.h"
#include "IPCFilterCentroid_grpcServer.h"
#include "IKeyframeRetriever_grpcProxy.h"
#include "IKeyframeRetriever_grpcServer.h"
#include "IRegression_grpcProxy.h"
#include "IRegression_grpcServer.h"
#include "IRelocalizer_grpcProxy.h"
#include "IRelocalizer_grpcServer.h"
#include "IBootstrapper_grpcProxy.h"
#include "IBootstrapper_grpcServer.h"
#include "IMapping_grpcProxy.h"
#include "IMapping_grpcServer.h"
#include "ITracking_grpcProxy.h"
#include "ITracking_grpcServer.h"
#include "IBundler_grpcProxy.h"
#include "IBundler_grpcServer.h"
#include "IMapFilter_grpcProxy.h"
#include "IMapFilter_grpcServer.h"
#include "IMapUpdate_grpcProxy.h"
#include "IMapUpdate_grpcServer.h"
#include "ITriangulator_grpcProxy.h"
#include "ITriangulator_grpcServer.h"
#include "I2D3DCorrespondencesFinder_grpcProxy.h"
#include "I2D3DCorrespondencesFinder_grpcServer.h"
#include "I2DTransformFinder_grpcProxy.h"
#include "I2DTransformFinder_grpcServer.h"
#include "I2Dto3DTransformDecomposer_grpcProxy.h"
#include "I2Dto3DTransformDecomposer_grpcServer.h"
#include "I2Dto3DTransformDecomposerValidation_grpcProxy.h"
#include "I2Dto3DTransformDecomposerValidation_grpcServer.h"
#include "I3D3DCorrespondencesFinder_grpcProxy.h"
#include "I3D3DCorrespondencesFinder_grpcServer.h"
#include "I3DTransformFinderFrom2D2D_grpcProxy.h"
#include "I3DTransformFinderFrom2D2D_grpcServer.h"
#include "I3DTransformFinderFrom2D3D_grpcProxy.h"
#include "I3DTransformFinderFrom2D3D_grpcServer.h"
#include "I3DTransformFinderFrom3D3D_grpcProxy.h"
#include "I3DTransformFinderFrom3D3D_grpcServer.h"
#include "I3DTransformSACFinderFrom2D3D_grpcProxy.h"
#include "I3DTransformSACFinderFrom2D3D_grpcServer.h"
#include "I3DTransformSACFinderFrom3D3D_grpcProxy.h"
#include "I3DTransformSACFinderFrom3D3D_grpcServer.h"
#include "IHomographyValidation_grpcProxy.h"
#include "IHomographyValidation_grpcServer.h"
#include "ITrackablePose_grpcProxy.h"
#include "ITrackablePose_grpcServer.h"
#include "ICovisibilityGraphManager_grpcProxy.h"
#include "ICovisibilityGraphManager_grpcServer.h"
#include "IKeyframesManager_grpcProxy.h"
#include "IKeyframesManager_grpcServer.h"
#include "IMapManager_grpcProxy.h"
#include "IMapManager_grpcServer.h"
#include "IPointCloudManager_grpcProxy.h"
#include "IPointCloudManager_grpcServer.h"
#include "IOpticalFlowEstimator_grpcProxy.h"
#include "IOpticalFlowEstimator_grpcServer.h"
#endif