//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CATOperationQueue, CATSharingDevice, NSError, NSString;
@protocol CATSharingConnectionDelegate, CATSharingDeviceSession, CATTimer, CATTimerSource;

__attribute__((visibility("hidden")))
@interface CATSharingDeviceSessionConnection : NSObject
{
    id <CATSharingDeviceSession> mDeviceSession;	// 8 = 0x8
    id <CATTimerSource> mTimerSource;	// 16 = 0x10
    _Bool mIsClosing;	// 24 = 0x18
    id <CATTimer> mTombstoneTimer;	// 32 = 0x20
    CATOperationQueue *mOutgoingQueue;	// 40 = 0x28
    CATOperationQueue *mCatalystQueue;	// 48 = 0x30
    _Bool _closed;	// 56 = 0x38
    id <CATSharingConnectionDelegate> _delegate;	// 64 = 0x40
    NSError *_closedError;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000156fd
@property(retain, nonatomic) NSError *closedError; // @synthesize closedError=_closedError;
@property(nonatomic, getter=isClosed) _Bool closed; // @synthesize closed=_closed;
@property(nonatomic) __weak id <CATSharingConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sendTearDownMessageWithError:(id)arg1;	// IMP=0x00000000000153d7
- (void)handleSentMessage:(id)arg1;	// IMP=0x00000000000152dd
- (void)handleCloseMessage:(id)arg1;	// IMP=0x0000000000015202
- (void)handleUnparsableMessageDictionary:(id)arg1;	// IMP=0x000000000001512c
- (void)didReceiveMessage:(id)arg1;	// IMP=0x0000000000014fec
- (void)removeDeviceSessionHandlers;	// IMP=0x0000000000014f8d
- (void)addDeviceSessionHandlers;	// IMP=0x0000000000014c84
- (void)tombstoneWithError:(id)arg1;	// IMP=0x0000000000014b98
- (void)closeWithError:(id)arg1 reportToRemote:(_Bool)arg2;	// IMP=0x0000000000014b03
- (void)sendMessage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014823
- (void)_close;	// IMP=0x00000000000147bd
- (void)_sendData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000146a7
- (void)close;	// IMP=0x000000000001457a
- (void)sendData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000143e8
@property(readonly, nonatomic) CATSharingDevice *remoteDevice;
- (id)initWithDeviceSession:(id)arg1 timerSource:(id)arg2;	// IMP=0x00000000000142c6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

