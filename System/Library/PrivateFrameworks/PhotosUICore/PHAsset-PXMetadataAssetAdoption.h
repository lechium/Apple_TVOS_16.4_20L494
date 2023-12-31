//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHAsset.h>

@class CLLocation, NSAttributedString, NSData, NSDate, NSNumber, NSSet, NSString, PFVideoAdjustments, PXDebugValueList;
@protocol PXDisplayAsset;

@interface PHAsset (PXMetadataAssetAdoption)
+ (void)px_generateResourceFilesForAssets:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000031f552
+ (id)addressWithoutUnitedStatesZipCode:(id)arg1;	// IMP=0x001000000031f3e4
+ (id)px_orderedAssetsFromAssets:(id)arg1 sortDescriptors:(id)arg2;	// IMP=0x001000000031f18d
+ (id)px_fetchPlacesAssetsInAssetCollection:(id)arg1 options:(id)arg2;	// IMP=0x001000000031ee63
+ (id)px_fetchAssetsInArray:(id)arg1 photoLibrary:(id)arg2;	// IMP=0x001000000031edb1
@property(readonly, nonatomic) struct CGPoint positionOffset;
@property(readonly, nonatomic) struct CGAffineTransform transform;
- (float)px_playbackScore;	// IMP=0x00100000000ecea4
- (double)weightUsingWeightingScheme:(long long)arg1;	// IMP=0x00100000000ecc11
- (double)weightUsingCriterion:(long long)arg1;	// IMP=0x00100000000ecbba
@property(readonly, nonatomic) double weight;
@property(readonly, nonatomic) struct CGSize size;
- (_Bool)px_isRecommendationSeenForVariationType:(long long)arg1;	// IMP=0x0010000000271fb4
- (_Bool)px_isVariationTypeRecommended:(long long)arg1;	// IMP=0x0010000000271e92
- (id)px_coreDataBrowserURL;	// IMP=0x001000000031e3f7
- (id)_userFeedbackScoreInfo;	// IMP=0x001000000031e008
- (id)_imageProcessingFlags;	// IMP=0x001000000031dda9
@property(readonly, nonatomic) _Bool px_shotWithNightMode;
- (id)_videoDeferredProcessingNeededString:(unsigned short)arg1;	// IMP=0x001000000031dcde
- (id)_deferredProcessingStringWithEnum:(unsigned short)arg1;	// IMP=0x001000000031dcb9
- (id)_junkClassificationStringWithClassifications:(id)arg1;	// IMP=0x001000000031d6c6
- (id)_sdClassificationStringWithClassifications:(id)arg1;	// IMP=0x001000000031d446
- (id)_sceneClassificationStringWithClassifications:(id)arg1;	// IMP=0x001000000031cee7
- (id)_ocrStrings;	// IMP=0x001000000031ceda
- (id)stringMinutesTimeRangeFromTimeRange:(CDStruct_3c1748cc)arg1;	// IMP=0x001000000031cde7
@property(readonly, nonatomic) PXDebugValueList *px_curationDebugValues;
- (id)px_detailedDebugDescriptionInLibrary:(id)arg1;	// IMP=0x001000000031a587
@property(readonly, nonatomic) NSString *px_exportFilename;
@property(readonly, nonatomic) NSAttributedString *px_curationDebugString;
- (id)px_slHighlightWithError:(id *)arg1;	// IMP=0x0010000000319998
@property(readonly, nonatomic) _Bool px_canLoadSyndicationAttributionInfo;
@property(readonly, nonatomic) _Bool px_wasSavedThroughExternalApp;
@property(readonly, nonatomic) _Bool px_wasSavedThroughSyndication;
@property(readonly, nonatomic) _Bool px_isUnsavedSyndicatedAsset;
@property(readonly, nonatomic) _Bool px_isSyndicatedAsset;
@property(readonly, nonatomic) _Bool px_isSyndicationPhotoLibraryAsset;
@property(readonly, nonatomic) long long px_currentVariationType;
- (id)px_singleLineMailingAddress;	// IMP=0x001000000031944e
@property(readonly, copy, nonatomic) NSString *px_adjustmentUuid;
@property(readonly, nonatomic) NSData *fetchColorNormalizationData;
@property(readonly, nonatomic) CDStruct_198678f7 livePhotoVideoDuration;
@property(readonly, nonatomic) float audioScore;
@property(readonly, nonatomic) _Bool isEligibleForAutoPlayback;
@property(readonly, nonatomic) _Bool isAutoPlaybackEligibilityEstimated;
@property(readonly, nonatomic) NSDate *importDate;
- (struct CGRect)bestCropRectForAspectRatioV2:(double)arg1 verticalContentMode:(long long)arg2 cropMode:(long long)arg3;	// IMP=0x0010000000535a93
- (struct CGRect)bestCropRectForAspectRatio:(double)arg1 verticalContentMode:(long long)arg2 cropMode:(long long)arg3;	// IMP=0x00100000005357d3
- (struct CGRect)bestCropRectForAspectRatio:(double)arg1;	// IMP=0x00100000005357ac
@property(readonly, nonatomic) unsigned long long thumbnailVersion;
- (long long)isContentEqualTo:(id)arg1;	// IMP=0x00100000005356c0
@property(readonly, nonatomic) Class defaultImageProviderClass;
- (id)localizedDetailedGeoDescriptionForRTL:(_Bool)arg1;	// IMP=0x00100000005354d0
@property(readonly, nonatomic) NSString *localizedGeoDescription;
@property(readonly, nonatomic) struct CGRect faceAreaRect;
@property(readonly, nonatomic) long long originalFileSize;
@property(readonly, nonatomic) _Bool isInSharedLibrary;
@property(readonly, nonatomic) _Bool isInCloud;
- (id)_faceNamesStringForAsset;	// IMP=0x00100000005f05b3
- (id)px_accessibilityLabelForStyles:(unsigned long long)arg1;	// IMP=0x00100000005f012f
@property(readonly, nonatomic) _Bool requiresConfidentiality;
- (_Bool)px_isSupportedApp:(id)arg1;	// IMP=0x001000000072f7d8
@property(readonly, nonatomic) long long px_storyResourceFetchFaceCount;
@property(readonly, nonatomic) double px_storyResourceFetchCurationScore;
@property(readonly, nonatomic) NSSet *px_storyResourceFetchSceneClassifications;
@property(readonly, nonatomic) NSData *px_storyResourceFetchNormalizationData;
@property(readonly, nonatomic) struct CGRect px_storyResourceFetchBestPlaybackRect;
@property(readonly, nonatomic) CDStruct_3c1748cc px_storyResourceFetchBestPlaybackRange;
@property(readonly, nonatomic) PFVideoAdjustments *px_storyResourceFetchVideoAdjustments;
@property(readonly, nonatomic) id <PXDisplayAsset> px_storyResourceDisplayAsset;
@property(readonly, nonatomic) long long px_storyResourceKind;
@property(readonly, nonatomic) NSString *px_storyResourceIdentifier;

// Remaining properties
@property(readonly, nonatomic) struct CGRect acceptableCropRect;
@property(readonly, nonatomic) double aspectRatio;
@property(readonly, nonatomic) unsigned long long burstSelectionTypes;
@property(readonly, nonatomic) _Bool cloudIsDeletable;
@property(readonly, nonatomic) NSDate *creationDate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic, getter=isFavorite) _Bool favorite;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSNumber *hdrGain;
@property(readonly, nonatomic) NSDate *localCreationDate;
@property(readonly, nonatomic) CLLocation *location;
@property(readonly, nonatomic) unsigned long long mediaSubtypes;
@property(readonly, nonatomic) long long mediaType;
@property(readonly, nonatomic) unsigned long long pixelHeight;
@property(readonly, nonatomic) unsigned long long pixelWidth;
@property(readonly, nonatomic) long long playbackStyle;
@property(readonly, nonatomic) long long playbackVariation;
@property(readonly, nonatomic) struct CGRect preferredCropRect;
@property(readonly, nonatomic) _Bool representsBurst;
@property(readonly) Class superclass;
@property(readonly, nonatomic) unsigned long long thumbnailIndex;
@property(readonly, nonatomic) NSString *uuid;
@end

