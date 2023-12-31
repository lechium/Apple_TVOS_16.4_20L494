//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPSegment : NSObject
{
    float _sumOfScore;	// 8 = 0x8
    float _curationScore;	// 12 = 0xc
    unsigned long long _numOfFrames;	// 16 = 0x10
    unsigned long long _numOfValidFrames;	// 24 = 0x18
    CDStruct_e83c9415 _timeRange;	// 32 = 0x20
}

@property(nonatomic) float curationScore; // @synthesize curationScore=_curationScore;
@property(readonly, nonatomic) unsigned long long numOfValidFrames; // @synthesize numOfValidFrames=_numOfValidFrames;
@property(readonly, nonatomic) unsigned long long numOfFrames; // @synthesize numOfFrames=_numOfFrames;
@property(nonatomic) CDStruct_e83c9415 timeRange; // @synthesize timeRange=_timeRange;
- (float)sumOfScore;	// IMP=0x000000000005eadc
- (float)score;	// IMP=0x000000000005eaa1
- (_Bool)isContentTooShort;	// IMP=0x000000000005ea5c
- (void)trimSegment:(CDStruct_1b6d18a9)arg1 fromStart:(_Bool)arg2;	// IMP=0x000000000005e931
- (void)updateDuration:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000005e8cb
- (void)copyFrom:(id)arg1;	// IMP=0x000000000005e80a
- (void)mergeSegment:(id)arg1;	// IMP=0x000000000005e6b4
- (void)updateSegment:(CDStruct_e83c9415)arg1 score:(float)arg2 valid:(_Bool)arg3;	// IMP=0x000000000005e5cd
- (void)updateWithFirstFrame:(CDStruct_e83c9415)arg1 score:(float)arg2 valid:(_Bool)arg3;	// IMP=0x000000000005e579
- (id)initWithTimestamp:(CDStruct_1b6d18a9)arg1 score:(float)arg2 valid:(_Bool)arg3;	// IMP=0x000000000005e490
- (id)init;	// IMP=0x000000000005e416

@end

