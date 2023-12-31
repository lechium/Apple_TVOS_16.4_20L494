//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface VCTextJitterBuffer : NSObject
{
    struct tagVCTextJitterBufferConfiguration _configuration;	// 8 = 0x8
    _Bool _resetRequested;	// 24 = 0x18
    id _delegate;	// 32 = 0x20
    struct JitterPreloadQueue_t *_preloadQueue;	// 40 = 0x28
    struct JitterQueue_t *_jitterQueue;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_heartbeat;	// 56 = 0x38
    unsigned int _lastSequenceNumber;	// 64 = 0x40
    _Bool _firstFrameReceived;	// 68 = 0x44
}

- (void)heartbeat;	// IMP=0x00000000002fce5b
- (void)stopHeartbeat;	// IMP=0x00000000002fce2c
- (_Bool)startHeartbeat;	// IMP=0x00000000002fca63
- (void)jitterQueuePushPacket:(struct tagAudioPacket *)arg1;	// IMP=0x00000000002fc9e4
- (void)enqueuePacket:(struct tagAudioPacket *)arg1;	// IMP=0x00000000002fc9d3
- (void)stop;	// IMP=0x00000000002fc811
- (_Bool)start;	// IMP=0x00000000002fc64b
- (void)releaseTextFrame:(struct tagAudioFrame *)arg1;	// IMP=0x00000000002fc63a
- (struct tagAudioFrame *)allocTextFrame;	// IMP=0x00000000002fc62c
- (void)releaseTextPacket:(struct tagAudioPacket *)arg1;	// IMP=0x00000000002fc5db
- (struct tagAudioPacket *)allocTextPacket;	// IMP=0x00000000002fc5cd
- (void)setDelegate:(id)arg1;	// IMP=0x00000000002fc5bc
- (id)delegate;	// IMP=0x00000000002fc5ae
- (void)dealloc;	// IMP=0x00000000002fc3b7
- (id)initWithConfiguration:(struct tagVCTextJitterBufferConfiguration *)arg1;	// IMP=0x00000000002fc17b

@end

