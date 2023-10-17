//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue, VCMediaStreamDelegate;

__attribute__((visibility("hidden")))
@interface VCVirtualTextDevice : NSObject
{
    int _clientPid;	// 8 = 0x8
    long long _state;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    id _sendDelegate;	// 32 = 0x20
    id _mediaStreamDelegate;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_mediaStreamDelegateQueue;	// 48 = 0x30
}

- (void)didReceiveText:(id)arg1;	// IMP=0x00000000002d5879
- (void)sendText:(id)arg1;	// IMP=0x00000000002d5683
- (void)sendCharacter:(unsigned short)arg1;	// IMP=0x00000000002d548c
- (id)setPause:(_Bool)arg1;	// IMP=0x00000000002d546a
- (id)resume;	// IMP=0x00000000002d51d5
- (id)pause;	// IMP=0x00000000002d4f40
- (id)stop;	// IMP=0x00000000002d4d3d
- (id)start;	// IMP=0x00000000002d4a7f
- (id)sendDelegate;	// IMP=0x00000000002d4a71
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *mediaStreamDelegateQueue;
@property(nonatomic) NSObject<VCMediaStreamDelegate> *mediaStreamDelegate;
- (void)dealloc;	// IMP=0x00000000002d498f
- (id)initWithSendDelegate:(id)arg1 clientPid:(int)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;	// IMP=0x00000000002d475f
- (_Bool)setStreamConfig:(id)arg1 withError:(id *)arg2;	// IMP=0x00000000002d4757

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
