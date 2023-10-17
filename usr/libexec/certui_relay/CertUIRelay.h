//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSTimer;

@interface CertUIRelay : NSObject
{
    NSMutableDictionary *_promptsForDigest;	// 8 = 0x8
    _Bool _waitingOnPrompt;	// 16 = 0x10
    long long _outstandingRequestCount;	// 24 = 0x18
    NSTimer *_killTimer;	// 32 = 0x20
    NSData *_previousPromptDigest;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000002207
- (id)init;	// IMP=0x001000000000206c
- (void)_trustInfoMessageReceived:(id)arg1 userInfo:(id)arg2 auditToken:(CDStruct_6ad76789 *)arg3;	// IMP=0x0010000000001df5
- (id)_uniqueDigest;	// IMP=0x0010000000001d67
- (void)_showNextPrompt;	// IMP=0x00100000000018e8
- (void)_registerReply;	// IMP=0x0010000000001877
- (void)_registerNewRequest;	// IMP=0x0010000000001841
- (void)_centerDiedWithNotification:(id)arg1;	// IMP=0x0010000000001708
- (void)_killTimerFired;	// IMP=0x00100000000016f6
- (void)_shutdown;	// IMP=0x0010000000001631
- (id)_relayCenter;	// IMP=0x001000000000160e

@end
