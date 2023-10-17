//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MPCAudioFailure : NSObject
{
    long long _type;	// 8 = 0x8
    double _startTime;	// 16 = 0x10
    double _duration;	// 24 = 0x18
}

+ (id)multiSamplesFailure:(double)arg1 duration:(double)arg2;	// IMP=0x00600000001aad7d
+ (id)singleSampleFailure:(double)arg1 duration:(double)arg2;	// IMP=0x00600000001aad36
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)initWithType:(long long)arg1 startTime:(double)arg2 duration:(double)arg3;	// IMP=0x00000000001aacbb

@end
