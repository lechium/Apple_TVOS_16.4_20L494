//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ISOperationQueue, NSMutableArray;
@protocol OS_dispatch_queue;

@interface StorePreorderQueue : NSObject
{
    NSMutableArray *_clients;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    ISOperationQueue *_operationQueue;	// 24 = 0x18
}

+ (void)registerManagerWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00400000000fd025
+ (void)observeXPCServer:(id)arg1;	// IMP=0x00100000000fcf98
+ (void)getPreordersWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000fcaf5
+ (void)checkQueueWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000fc8c9
+ (void)cancelPreordersWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000fc128
+ (id)sharedPreorderQueue;	// IMP=0x00100000000fb366
- (void)_sendChangeNotificationForKinds:(id)arg1;	// IMP=0x00200000000fecfd
- (id)_preorderQueryWithAccountID:(id)arg1 database:(id)arg2;	// IMP=0x00100000000fecb1
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingReplyBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000febc3
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000feb02
- (void)_handleLoadQueueFinish:(id)arg1;	// IMP=0x00100000000fdf2b
- (void)_handleCheckQueueFinish:(id)arg1;	// IMP=0x00100000000fda7f
- (id)_copyPreorderAccountIdentifiers;	// IMP=0x00100000000fd879
- (id)_clientForConnection:(id)arg1;	// IMP=0x00100000000fd6db
- (void)_clientDisconnectNotification:(id)arg1;	// IMP=0x00100000000fd49c
- (void)removePreordersWithPreorderIdentifiers:(id)arg1;	// IMP=0x00100000000fbce0
- (void)checkPreorderQueue;	// IMP=0x00100000000fb901
- (void)addPreordersWithItems:(id)arg1 accountID:(id)arg2;	// IMP=0x00100000000fb3e3
- (void)dealloc;	// IMP=0x00100000000fb2aa
- (id)init;	// IMP=0x00100000000fb1b4

@end

