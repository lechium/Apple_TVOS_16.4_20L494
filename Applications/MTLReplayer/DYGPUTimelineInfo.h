//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData;

@interface DYGPUTimelineInfo : NSObject
{
    unsigned int _numPeriodicSamples;	// 8 = 0x8
    NSData *_timestamps;	// 16 = 0x10
    NSData *_derivedCounters;	// 24 = 0x18
    NSArray *_derivedCounterNames;	// 32 = 0x20
    NSData *_activeShadersPerPeriodicSample;	// 40 = 0x28
    NSData *_activeCoreInfoMasksPerPeriodicSample;	// 48 = 0x30
    NSData *_numActiveShadersPerPeriodicSample;	// 56 = 0x38
    NSData *_encoderTimelineInfos;	// 64 = 0x40
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000006eb1
- (void).cxx_destruct;	// IMP=0x0020000000006e52
@property(retain, nonatomic) NSData *encoderTimelineInfos; // @synthesize encoderTimelineInfos=_encoderTimelineInfos;
@property(retain, nonatomic) NSData *numActiveShadersPerPeriodicSample; // @synthesize numActiveShadersPerPeriodicSample=_numActiveShadersPerPeriodicSample;
@property(retain, nonatomic) NSData *activeCoreInfoMasksPerPeriodicSample; // @synthesize activeCoreInfoMasksPerPeriodicSample=_activeCoreInfoMasksPerPeriodicSample;
@property(retain, nonatomic) NSData *activeShadersPerPeriodicSample; // @synthesize activeShadersPerPeriodicSample=_activeShadersPerPeriodicSample;
@property(retain, nonatomic) NSArray *derivedCounterNames; // @synthesize derivedCounterNames=_derivedCounterNames;
@property(retain, nonatomic) NSData *derivedCounters; // @synthesize derivedCounters=_derivedCounters;
@property(retain, nonatomic) NSData *timestamps; // @synthesize timestamps=_timestamps;
@property(nonatomic) unsigned int numPeriodicSamples; // @synthesize numPeriodicSamples=_numPeriodicSamples;
- (void)enumerateActiveShadersForSampleAtIndex:(unsigned int)arg1 withBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000006c33
- (void)enumerateActiveShadersForAllSamples:(CDUnknownBlockType)arg1;	// IMP=0x0010000000006ab2
- (id)init;	// IMP=0x0010000000006a64
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000006961
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000064ad
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000006211

@end

