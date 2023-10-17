//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCVocalAttenuationModel;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPCVocalAttenuationProcessorImplementation : NSObject
{
    struct AudioTimeStamp _timestamp;	// 8 = 0x8
    long long _previousContiguousSampleIndex;	// 72 = 0x48
    long long _nextContiguousSampleIndex;	// 80 = 0x50
    struct AudioBufferList *_ioBuffer;	// 88 = 0x58
    struct AudioStreamBasicDescription _audioFormat;	// 96 = 0x60
    unsigned int _maxFrames;	// 136 = 0x88
    struct OpaqueAudioComponentInstance *_processingAU;	// 144 = 0x90
    NSObject<OS_dispatch_queue> *_creationQueue;	// 152 = 0x98
    _Bool _enabled;	// 160 = 0xa0
    float _level;	// 164 = 0xa4
    float _minLevel;	// 168 = 0xa8
    float _maxLevel;	// 172 = 0xac
    long long _state;	// 176 = 0xb0
    MPCVocalAttenuationModel *_model;	// 184 = 0xb8
}

- (void).cxx_destruct;	// IMP=0x000000000027c8e3
@property(readonly, nonatomic) float maxLevel; // @synthesize maxLevel=_maxLevel;
@property(readonly, nonatomic) float minLevel; // @synthesize minLevel=_minLevel;
@property(nonatomic) float level; // @synthesize level=_level;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) MPCVocalAttenuationModel *model; // @synthesize model=_model;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (void)_applyAttenuationLevelToAudioUnit;	// IMP=0x000000000027c580
- (_Bool)_initializeAudioUnit:(id *)arg1;	// IMP=0x000000000027c2b7
- (_Bool)_setupAudioUnitWithModel:(id)arg1 error:(id *)arg2;	// IMP=0x000000000027a6db
- (_Bool)_createAudioUnit:(id *)arg1;	// IMP=0x000000000027a37f
- (void)_prepareWithModel:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000027a09e
- (_Bool)_registerUnsearchableComponents;	// IMP=0x000000000027a040
- (void)resetAudioUnit;	// IMP=0x000000000027a019
- (_Bool)processAudioBuffer:(struct AudioBufferList *)arg1 sampleIndex:(long long)arg2 numberFrames:(unsigned int)arg3 error:(id *)arg4;	// IMP=0x0000000000279529
- (_Bool)isCompatibleWithAudioFormat:(struct AudioStreamBasicDescription)arg1 maxFrames:(unsigned int)arg2;	// IMP=0x00000000002792d9
@property(readonly, nonatomic) double renderingLimit;
@property(readonly, nonatomic) double sampleTime;
@property(readonly, nonatomic, getter=isAvailable) _Bool available;
- (void)tearDownWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000278f7a
- (void)prepareWithModel:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000278dba
- (id)initWithMaxAttenuationLevel:(float)arg1 audioFormat:(struct AudioStreamBasicDescription)arg2 maxFrames:(unsigned int)arg3;	// IMP=0x0000000000278cf6
- (id)init;	// IMP=0x0000000000278c57

@end

