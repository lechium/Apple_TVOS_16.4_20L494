//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CATSharingDevice, NSString;
@protocol CATSharingDeviceSession;

__attribute__((visibility("hidden")))
@interface CATDeviceSessionBackedDevicePairingTerminal : NSObject
{
    id <CATSharingDeviceSession> mDeviceSession;	// 8 = 0x8
    CDUnknownBlockType mVerifyPairingCompletion;	// 16 = 0x10
    CDUnknownBlockType mBeginPairingCompletion;	// 24 = 0x18
    CDUnknownBlockType mPINPromptHandler;	// 32 = 0x20
    _Bool _invalidated;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000026203
@property(nonatomic, getter=isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
- (void)removeSessionHandlers;	// IMP=0x000000000002617c
- (void)invalidateWithError:(id)arg1;	// IMP=0x00000000000260f8
- (void)vendConnectionForCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000026004
- (void)pairingCompleteWithError:(id)arg1;	// IMP=0x0000000000025eea
- (void)fetchStableIdentifierFinished:(id)arg1;	// IMP=0x0000000000025ce5
- (void)fetchStableIdentifier;	// IMP=0x0000000000025b44
- (void)sessionHasPromptedForPINWithWaitTime:(unsigned long long)arg1;	// IMP=0x0000000000025a0d
- (void)verifyPairingFinished:(_Bool)arg1;	// IMP=0x0000000000025868
- (void)verifyPairing;	// IMP=0x0000000000025663
- (void)deviceSessionReady;	// IMP=0x00000000000254fd
- (void)deviceSessionEncounteredError:(id)arg1;	// IMP=0x000000000002536b
- (void)deviceSessionInvalidated:(id)arg1;	// IMP=0x00000000000251dc
- (void)addSessionHandlers;	// IMP=0x0000000000024b14
- (void)_invalidate;	// IMP=0x00000000000249bb
- (void)_tryPIN:(id)arg1;	// IMP=0x000000000002489f
- (void)_beginPairing:(CDUnknownBlockType)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x000000000002455f
- (void)_verifyPairingAndFetchStableIdentifierWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000002448c
- (void)invalidate;	// IMP=0x000000000002435f
- (void)tryPIN:(id)arg1;	// IMP=0x00000000000241fd
- (void)beginPairing:(CDUnknownBlockType)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000024023
- (void)verifyPairingAndFetchStableIdentifierWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000023e8b
@property(readonly, nonatomic) CATSharingDevice *device;
- (id)initWithDeviceSession:(id)arg1;	// IMP=0x0000000000023e0a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

