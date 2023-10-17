//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface VCStreamInputAudio
{
    CDUnknownFunctionPointerType _sampleBufferDelegateCallback;	// 40 = 0x28
    void *_sampleBufferDelegateCallbackContext;	// 48 = 0x30
    struct os_unfair_lock_s _sampleBufferDelegateCallbackLock;	// 56 = 0x38
}

- (void)registerSampleBufferCallback:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;	// IMP=0x00000000002edf7c
- (void)dealloc;	// IMP=0x00000000002edef2
- (id)initWithStreamInputID:(id)arg1 format:(struct opaqueCMFormatDescription *)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 remoteQueue:(id)arg5;	// IMP=0x00000000002ede04

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

