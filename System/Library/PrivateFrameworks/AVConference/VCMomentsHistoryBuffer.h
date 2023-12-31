//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCMomentsHistoryBuffer : NSObject
{
    id _delegate;	// 8 = 0x8
    int _bufferLength;	// 16 = 0x10
    NSMutableArray *_timestampQueue;	// 24 = 0x18
    NSMutableDictionary *_sampleMap;	// 32 = 0x20
    unsigned int _lastTimestamp;	// 40 = 0x28
}

- (unsigned int)getUpdatedTimestampWithTimestamp:(unsigned int)arg1;	// IMP=0x00000000000de05d
- (void)enqueueWithSample:(struct opaqueCMSampleBuffer *)arg1 timestamp:(unsigned int)arg2;	// IMP=0x00000000000ddf53
- (void)dequeueOneFrame;	// IMP=0x00000000000dde1a
- (id)delegate;	// IMP=0x00000000000dde0c
- (int)getCount;	// IMP=0x00000000000dddf6
- (void)flushBuffer;	// IMP=0x00000000000ddda2
- (struct opaqueCMSampleBuffer *)getClosestSampleForTimestamp:(unsigned int)arg1;	// IMP=0x00000000000ddb1f
- (void)updateBufferWithSample:(struct opaqueCMSampleBuffer *)arg1 timestamp:(unsigned int)arg2;	// IMP=0x00000000000dd99a
- (void)dealloc;	// IMP=0x00000000000dd915
- (id)initWithDelegate:(id)arg1 bufferLength:(int)arg2 dispatchQueue:(id)arg3;	// IMP=0x00000000000dd82a

@end

