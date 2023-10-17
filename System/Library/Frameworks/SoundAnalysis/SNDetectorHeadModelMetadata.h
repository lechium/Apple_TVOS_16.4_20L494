//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface SNDetectorHeadModelMetadata : NSObject
{
    NSNumber *_sampleRate;	// 8 = 0x8
    NSString *_featureExtractorIdentifier;	// 16 = 0x10
    NSNumber *_windowSizeInSamples;	// 24 = 0x18
    NSNumber *_hopSizeInSamples;	// 32 = 0x20
    NSString *_soundIdentifier;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000006d7ca
@property(copy) NSString *soundIdentifier; // @synthesize soundIdentifier=_soundIdentifier;
@property(copy) NSNumber *hopSizeInSamples; // @synthesize hopSizeInSamples=_hopSizeInSamples;
@property(copy) NSNumber *windowSizeInSamples; // @synthesize windowSizeInSamples=_windowSizeInSamples;
@property(copy) NSString *featureExtractorIdentifier; // @synthesize featureExtractorIdentifier=_featureExtractorIdentifier;
@property(copy) NSNumber *sampleRate; // @synthesize sampleRate=_sampleRate;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006d5f4
- (unsigned long long)hash;	// IMP=0x000000000006d4d2
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000006d224

@end
