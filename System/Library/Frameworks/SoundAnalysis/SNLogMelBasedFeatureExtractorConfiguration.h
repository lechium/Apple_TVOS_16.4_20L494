//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SNMLModel;

__attribute__((visibility("hidden")))
@interface SNLogMelBasedFeatureExtractorConfiguration : NSObject
{
    id <SNMLModel> _model;	// 8 = 0x8
    unsigned int _stepSizeFrames;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000037a40
@property(readonly) unsigned int stepSizeFrames; // @synthesize stepSizeFrames=_stepSizeFrames;
- (id)createProcessorWithError:(id *)arg1;	// IMP=0x0000000000037a09
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003797d
@property(readonly) unsigned long long hash;
@property(readonly) unsigned int outputFeatureSize; // @dynamic outputFeatureSize;
@property(readonly) unsigned int windowLengthFrames; // @dynamic windowLengthFrames;
@property(readonly) double sampleRate; // @dynamic sampleRate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

