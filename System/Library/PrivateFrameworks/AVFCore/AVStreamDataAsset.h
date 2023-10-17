//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AVAsset.h"

@class AVAssetSynchronousInspectorLoader, AVDispatchOnce, AVStreamDataAssetInspector, AVStreamDataParser, NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface AVStreamDataAsset : AVAsset
{
    AVStreamDataParser *_weakReferenceToParser;	// 16 = 0x10
    AVStreamDataAssetInspector *_inspector;	// 24 = 0x18
    AVAssetSynchronousInspectorLoader *_inspectorLoader;	// 32 = 0x20
    AVDispatchOnce *_tracksOnce;	// 40 = 0x28
    NSArray *_tracks;	// 48 = 0x30
    NSDictionary *_trackDictsByTrackID;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000f8e0d
- (Class)_classForTrackInspectors;	// IMP=0x00000000000f8dfc
- (id)_assetInspectorLoader;	// IMP=0x00000000000f8deb
- (id)_assetInspector;	// IMP=0x00000000000f8dda
- (struct OpaqueFigFormatReader *)_formatReader;	// IMP=0x00000000000f8dd2
- (id)tracks;	// IMP=0x00000000000f8b6a
- (id)formatDescriptionsForTrackID:(int)arg1;	// IMP=0x00000000000f8ac0
- (id)mediaTypeForTrackID:(int)arg1;	// IMP=0x00000000000f8a4e
- (id)copyAssetRemovingTrackID:(int)arg1;	// IMP=0x00000000000f89b0
- (id)copyAssetWithReplacementFormatDescription:(struct opaqueCMFormatDescription *)arg1 forTrackID:(int)arg2;	// IMP=0x00000000000f88b7
- (id)copyAssetWithAdditionalTrackID:(int)arg1 mediaType:(id)arg2;	// IMP=0x00000000000f87e3
- (id)parser;	// IMP=0x00000000000f87d2
- (void)dealloc;	// IMP=0x00000000000f8750
- (id)initWithParser:(id)arg1 tracks:(id)arg2;	// IMP=0x00000000000f8657

@end
