//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVAssetWriterInputPassDescription;

__attribute__((visibility("hidden")))
@interface AVAssetWriterInputFigAssetWriterEndPassOperation
{
    struct OpaqueFigAssetWriter *_figAssetWriter;	// 32 = 0x20
    int _trackID;	// 40 = 0x28
    AVAssetWriterInputPassDescription *_nextPassDescription;	// 48 = 0x30
}

@property(readonly, nonatomic) AVAssetWriterInputPassDescription *descriptionForNextPass; // @synthesize descriptionForNextPass=_nextPassDescription;
- (void)_notifyWhetherMorePassesAreNeeded:(_Bool)arg1 timeRanges:(id)arg2 forTrackWithID:(int)arg3;	// IMP=0x00000000000b16c4
- (void)start;	// IMP=0x00000000000b1462
- (_Bool)isAsynchronous;	// IMP=0x00000000000b145a
- (void)dealloc;	// IMP=0x00000000000b1403
- (id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg1 trackID:(int)arg2;	// IMP=0x00000000000b12d3
- (id)init;	// IMP=0x00000000000b126d

@end
