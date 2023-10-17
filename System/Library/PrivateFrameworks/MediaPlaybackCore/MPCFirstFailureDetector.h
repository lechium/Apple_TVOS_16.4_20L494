//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCAudioFailure;

__attribute__((visibility("hidden")))
@interface MPCFirstFailureDetector : NSObject
{
    long long _state;	// 8 = 0x8
    double _dT;	// 16 = 0x10
    double _limit;	// 24 = 0x18
    unsigned long long _currentSample;	// 32 = 0x20
    unsigned long long _currentFailureStartSample;	// 40 = 0x28
    unsigned long long _lastFailureSample;	// 48 = 0x30
    unsigned long long _failureCount;	// 56 = 0x38
    MPCAudioFailure *_singleSampleFailure;	// 64 = 0x40
    MPCAudioFailure *_multiSamplesFailure;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000001ab0f7
@property(readonly, nonatomic) MPCAudioFailure *multiSamplesFailure; // @synthesize multiSamplesFailure=_multiSamplesFailure;
@property(readonly, nonatomic) MPCAudioFailure *singleSampleFailure; // @synthesize singleSampleFailure=_singleSampleFailure;
@property(readonly, nonatomic) double samplingTime;
- (_Bool)processSample:(id)arg1;	// IMP=0x00000000001aae21
- (id)initWithSamplingTime:(double)arg1 renderingLimit:(double)arg2;	// IMP=0x00000000001aadc7

@end

