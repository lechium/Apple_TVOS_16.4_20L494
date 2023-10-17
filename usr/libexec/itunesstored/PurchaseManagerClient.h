//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

@interface PurchaseManagerClient
{
    _Bool _finishesPurchases;	// 48 = 0x30
    NSMutableArray *_purchases;	// 56 = 0x38
    long long _uniqueIdentifier;	// 64 = 0x40
    _Bool _useRemoteAuthentication;	// 72 = 0x48
}

@property _Bool useRemoteAuthentication;
@property(readonly) long long URLBagType;
@property long long uniqueIdentifier;
@property _Bool finishesPurchases;
- (void)postNotificationWithResponse:(id)arg1;	// IMP=0x00100000001a67b7
- (void)sendResponses:(id)arg1;	// IMP=0x00100000001a6572
- (void)sendResponse:(id)arg1 forPurchases:(id)arg2;	// IMP=0x00100000001a62f4
- (void)sendResponse:(id)arg1;	// IMP=0x00100000001a6297
- (void)sendError:(id)arg1 forPurchases:(id)arg2;	// IMP=0x00100000001a61ca
- (void)sendAuthenticateRequestWithContext:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000001a5776
- (void)ackConnection;	// IMP=0x00100000001a5624
- (void)dealloc;	// IMP=0x00100000001a55e2
- (id)initWithInputConnection:(id)arg1;	// IMP=0x00100000001a5575

@end

