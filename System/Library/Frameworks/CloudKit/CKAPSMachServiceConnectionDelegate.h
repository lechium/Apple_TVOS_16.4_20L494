//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSConnection, CKAPSMachServiceConnectionKey, NSString;

@interface CKAPSMachServiceConnectionDelegate : NSObject
{
    APSConnection *_connection;	// 8 = 0x8
    CKAPSMachServiceConnectionKey *_key;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000185bd0
@property(copy, nonatomic) CKAPSMachServiceConnectionKey *key; // @synthesize key=_key;
@property(nonatomic) __weak APSConnection *connection; // @synthesize connection=_connection;
- (void)connectionDidReconnect:(id)arg1;	// IMP=0x0000000000185a33
- (void)connection:(id)arg1 didChangeConnectedStatus:(_Bool)arg2;	// IMP=0x000000000018588b
- (void)connection:(id)arg1 didFailToSendOutgoingMessage:(id)arg2 error:(id)arg3;	// IMP=0x00000000001856ad
- (void)connection:(id)arg1 didSendOutgoingMessage:(id)arg2;	// IMP=0x0000000000185508
- (void)connection:(id)arg1 didReceiveMessageForTopic:(id)arg2 userInfo:(id)arg3;	// IMP=0x000000000018532a
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;	// IMP=0x0000000000185185
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;	// IMP=0x0000000000184f73
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;	// IMP=0x0000000000184dce
- (id)initWithConnection:(id)arg1 key:(id)arg2;	// IMP=0x0000000000184d16

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

