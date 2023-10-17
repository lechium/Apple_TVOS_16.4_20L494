//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, VCMoments;

__attribute__((visibility("hidden")))
@interface VCMomentsCollector : NSObject
{
    long long _streamToken;	// 8 = 0x8
    VCMoments *_moments;	// 16 = 0x10
}

- (void)cleanupActiveRequests;	// IMP=0x00000000001346d6
- (void)stream:(id)arg1 addAudioSampleBuffer:(struct opaqueVCAudioBufferList *)arg2 timestamp:(unsigned int)arg3;	// IMP=0x00000000001346ba
- (void)stream:(id)arg1 addVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 cameraStatusBits:(unsigned char)arg3 timestamp:(unsigned int)arg4;	// IMP=0x000000000013469b
- (void)dealloc;	// IMP=0x0000000000134570
- (id)initWithStreamToken:(long long)arg1;	// IMP=0x00000000001344a5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

