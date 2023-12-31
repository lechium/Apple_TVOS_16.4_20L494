//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHAsset.h>

@class NSData, NSDate, NSString;

@interface PHAsset (PVAssetProtocol)
+ (id)vcp_fetchOptionsForLibrary:(id)arg1 forTaskID:(unsigned long long)arg2;	// IMP=0x001000000018f419
+ (double)vcp_ocrGatingThreshold;	// IMP=0x00100000001914e4
+ (id)vcp_fetchAssetsMatchingFingerprint:(id)arg1 forPhotoLibrary:(id)arg2;	// IMP=0x00100000001eaedd
+ (_Bool)vcp_usePHFaceExpression;	// IMP=0x0010000000262327
+ (_Bool)vcp_usePHFace;	// IMP=0x001000000026231f
+ (unsigned long long)vcp_fullAnalysisTypesForAssetType:(unsigned long long)arg1;	// IMP=0x001000000027169a
- (id)clsDistanceIdentity;	// IMP=0x00100000000a33ac
- (_Bool)vcp_needsProcessingForTask:(unsigned long long)arg1;	// IMP=0x0010000000190a40
- (unsigned long long)vcp_majorDimensionForResource:(id)arg1 withTargetResolution:(unsigned long long)arg2;	// IMP=0x0010000000190377
- (unsigned long long)vcp_targetMajorDimensionForImageWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 andMinPreferredMinorDimension:(unsigned long long)arg3;	// IMP=0x0010000000190068
- (_Bool)vcp_hasAdjustments:(id)arg1;	// IMP=0x001000000018fea0
- (_Bool)vcp_eligibleForVideoDownload:(id)arg1;	// IMP=0x001000000018f128
- (id)vcp_modificationDate;	// IMP=0x001000000018f040
- (struct CGSize)vcp_originalSize;	// IMP=0x001000000018efd0
- (id)vcp_typeDescription;	// IMP=0x001000000018eeac
- (_Bool)vcp_isSdofPhoto;	// IMP=0x0010000000190bc3
- (_Bool)vcp_isLivePhoto;	// IMP=0x0010000000190baa
- (_Bool)vcp_isPano;	// IMP=0x0010000000190b95
- (_Bool)vcp_isMontageWithTaskID:(unsigned long long)arg1;	// IMP=0x0010000000190c54
- (_Bool)vcp_isShortMovie;	// IMP=0x0010000000190c0e
- (_Bool)vcp_isVideoTimelapse;	// IMP=0x0010000000190bf5
- (_Bool)vcp_isVideoSlowmo;	// IMP=0x0010000000190bdc
- (unsigned long long)vcp_abnormalImageDimensionForSceneNet;	// IMP=0x001000000019127d
- (id)vcp_confidenceForSceneIdentifier:(unsigned int)arg1;	// IMP=0x0010000000190f8f
- (_Bool)vcp_needSceneProcessing;	// IMP=0x0010000000190e9c
- (unsigned long long)vcp_ocrMajorDimensionForResource:(id)arg1;	// IMP=0x0010000000191a06
- (id)vcp_passedOCRGating;	// IMP=0x00100000001914f2
- (_Bool)vcp_isDownloadGated;	// IMP=0x0010000000191482
- (_Bool)vcp_needsOCRProcessing;	// IMP=0x0010000000191371
- (_Bool)vcp_needsVisualSearchProcessing;	// IMP=0x0010000000191c68
- (id)vcp_fingerprint:(id)arg1;	// IMP=0x00100000001eaadc
- (_Bool)vcp_needFaceProcessing;	// IMP=0x001000000026322e
- (_Bool)vcp_quickFaceClassificationDone;	// IMP=0x00100000002630fb
- (id)vcp_PHFaces:(id)arg1;	// IMP=0x0010000000262ff3
- (int)vcp_queryPHFaces:(unsigned long long *)arg1 results:(id *)arg2;	// IMP=0x0010000000262685
- (struct CGRect)vcp_faceRectFrom:(id)arg1;	// IMP=0x0010000000262403
- (unsigned long long)vcp_flagsForPHFace:(id)arg1 withFaceRect:(struct CGRect)arg2;	// IMP=0x001000000026232f
- (unsigned long long)vcp_fullAnalysisTypesForResources:(id)arg1;	// IMP=0x00100000002718e7
- (unsigned long long)vcp_fullAnalysisTypes;	// IMP=0x0010000000271768

// Remaining properties
@property(readonly, nonatomic) NSString *cloudIdentifier;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSData *distanceIdentity;
@property(readonly, nonatomic) NSString *filename;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *localIdentifier;
@property(readonly, nonatomic) struct CLLocationCoordinate2D locationCoordinate;
@property(readonly, nonatomic) NSString *originalFilename;
@property(readonly, nonatomic) unsigned long long pixelHeight;
@property(readonly, nonatomic) unsigned long long pixelWidth;
@property(readonly) Class superclass;
@end

