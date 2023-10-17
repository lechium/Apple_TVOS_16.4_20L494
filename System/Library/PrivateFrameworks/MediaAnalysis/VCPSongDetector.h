//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioPCMBuffer, SHMutableSignature;

__attribute__((visibility("hidden")))
@interface VCPSongDetector : NSObject
{
    AVAudioPCMBuffer *_pcmBuffer;	// 8 = 0x8
    long long _framePosition;	// 16 = 0x10
    float _sampleRate;	// 24 = 0x18
    SHMutableSignature *_signature;	// 32 = 0x20
    CDStruct_1b6d18a9 _startTime;	// 40 = 0x28
    CDStruct_1b6d18a9 _endTime;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000025afb4
- (id)results;	// IMP=0x000000000025ac7a
- (int)finalizeAnalysisAtTime:(const CDStruct_1b6d18a9 *)arg1;	// IMP=0x000000000025ac72
- (int)processAudioSamples:(struct AudioBufferList *)arg1 timestamp:(struct AudioTimeStamp)arg2;	// IMP=0x000000000025aa3c
- (int)setupWithSample:(struct opaqueCMSampleBuffer *)arg1 andSampleBatchSize:(int)arg2;	// IMP=0x000000000025a892
- (id)init;	// IMP=0x000000000025a810

@end

