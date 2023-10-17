//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPAVItem.h>

@class MPModelGenericObject, MPModelMediaClip, NSString;

__attribute__((visibility("hidden")))
@interface MPCModelMediaClipAVItem : MPAVItem
{
    MPModelGenericObject *_modelGenericObject;	// 112 = 0x70
    MPModelMediaClip *_mediaClip;	// 120 = 0x78
}

+ (id)requiredMediaClipProperties;	// IMP=0x00100000001bedca
- (void).cxx_destruct;	// IMP=0x00000000001bed5c
@property(readonly, nonatomic) MPModelMediaClip *mediaClip; // @synthesize mediaClip=_mediaClip;
- (_Bool)_isVideoAsset;	// IMP=0x00000000001bebec
- (id)_currentPreferredStaticAsset;	// IMP=0x00000000001be644
- (void)_applyLoudnessInfo;	// IMP=0x00000000001be43f
- (_Bool)_allowsCellularPlayback;	// IMP=0x00000000001be3ca
@property(readonly, nonatomic) long long rtcReportingAssetType;
- (id)rtcReportingServiceIdentifier;	// IMP=0x00000000001be3b2
- (CDUnknownBlockType)artworkCatalogBlock;	// IMP=0x00000000001be327
- (_Bool)allowsExternalPlayback;	// IMP=0x00000000001be31f
- (_Bool)allowsAirPlayFromCloud;	// IMP=0x00000000001be317
- (_Bool)supportsRateChange;	// IMP=0x00000000001be30f
- (void)reevaluateType;	// IMP=0x00000000001be2ce
- (_Bool)prefersSeekOverSkip;	// IMP=0x00000000001be2c6
- (id)modelGenericObject;	// IMP=0x00000000001be1fc
- (id)mainTitle;	// IMP=0x00000000001be1df
- (void)loadAssetAndPlayerItem;	// IMP=0x00000000001bdf1d
- (_Bool)isValidPlayerSubstituteForItem:(id)arg1;	// IMP=0x00000000001bde97
- (_Bool)isStreamable;	// IMP=0x00000000001bde8f
- (_Bool)isAssetURLValid;	// IMP=0x00000000001bddf7
- (double)durationFromExternalMetadata;	// IMP=0x00000000001bdd79
@property(readonly, copy) NSString *description;
- (id)initWithMediaClip:(id)arg1;	// IMP=0x00000000001bdc6d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
