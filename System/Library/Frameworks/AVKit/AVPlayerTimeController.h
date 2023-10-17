//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVObservationController, AVPlayer, AVValueTiming, NSArray;

__attribute__((visibility("hidden")))
@interface AVPlayerTimeController : NSObject
{
    AVPlayer *_player;	// 8 = 0x8
    AVValueTiming *_timing;	// 16 = 0x10
    AVValueTiming *_minTiming;	// 24 = 0x18
    AVValueTiming *_maxTiming;	// 32 = 0x20
    AVObservationController *_observationController;	// 40 = 0x28
}

+ (id)keyPathsForValuesAffectingReadyToPlay;	// IMP=0x001000000011f693
+ (id)keyPathsForValuesAffectingSeekableTimeRanges;	// IMP=0x001000000011f673
+ (id)keyPathsForValuesAffectingContentDurationWithinEndTimes;	// IMP=0x001000000011f647
+ (id)keyPathsForValuesAffectingContentDuration;	// IMP=0x001000000011f627
+ (id)keyPathsForValuesAffectingForwardPlaybackEndTime;	// IMP=0x001000000011f607
+ (id)keyPathsForValuesAffectingMaxTime;	// IMP=0x001000000011f5e7
+ (id)keyPathsForValuesAffectingReversePlaybackEndTime;	// IMP=0x001000000011f5c7
- (void).cxx_destruct;	// IMP=0x000000000011f3c8
@property(readonly, nonatomic) AVObservationController *observationController; // @synthesize observationController=_observationController;
@property(retain, nonatomic) AVValueTiming *maxTiming; // @synthesize maxTiming=_maxTiming;
@property(retain, nonatomic) AVValueTiming *minTiming; // @synthesize minTiming=_minTiming;
@property(retain, nonatomic) AVValueTiming *timing; // @synthesize timing=_timing;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (void)_updateMinAndMaxTiming;	// IMP=0x000000000011f28d
- (void)_updateTiming;	// IMP=0x000000000011f091
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;	// IMP=0x000000000011f02d
@property(readonly, nonatomic, getter=isReadyToPlay) _Bool readyToPlay;
@property(readonly, nonatomic) double seekToTime;
@property(readonly, nonatomic, getter=isSeeking) _Bool seeking;
@property(readonly, nonatomic) _Bool canSeek;
@property(readonly, nonatomic) _Bool hasSeekableLiveStreamingContent;
@property(readonly, getter=isCompletelySeekable) _Bool completelySeekable;
@property(readonly, nonatomic) NSArray *seekableTimeRanges;
@property(readonly, nonatomic) double contentDurationWithinEndTimes;
@property(readonly, nonatomic) double contentDuration;
- (CDStruct_1b6d18a9)forwardPlaybackEndTime;	// IMP=0x000000000011ee3b
@property(readonly, nonatomic) double maxTime;
- (CDStruct_1b6d18a9)reversePlaybackEndTime;	// IMP=0x000000000011ed30
@property(readonly, nonatomic) double minTime;
- (void)stopTimingObservation;	// IMP=0x000000000011ec72
- (void)startTimingObservation;	// IMP=0x000000000011eadc
- (void)dealloc;	// IMP=0x000000000011ea9a
- (id)initWithPlayer:(id)arg1;	// IMP=0x000000000011ea02

@end
