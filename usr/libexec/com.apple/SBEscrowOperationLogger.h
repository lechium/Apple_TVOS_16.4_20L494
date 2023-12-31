//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableOrderedSet, SecureBackupLog;
@protocol ESAEscrowTransactionStorageProvider, OS_dispatch_queue;

@interface SBEscrowOperationLogger : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 16 = 0x10
    _Bool _hasIncompleteActivities;	// 24 = 0x18
    SecureBackupLog *_currentLog;	// 32 = 0x20
    id <ESAEscrowTransactionStorageProvider> _storageProvider;	// 40 = 0x28
    NSMutableOrderedSet *_observers;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000014eb9
@property(readonly) SecureBackupLog *currentLog;
- (void)updateExistingOperations;	// IMP=0x0010000000014da9
- (void)updateExistingOperationsWithContext:(id)arg1;	// IMP=0x0010000000014d92
- (void)updateStoreWithEvent:(id)arg1;	// IMP=0x0010000000014d33
- (void)updateStoreWithEvent:(id)arg1 context:(id)arg2;	// IMP=0x00100000000146df
- (void)removeObserver:(id)arg1;	// IMP=0x00100000000145db
- (id)addObserver:(id)arg1;	// IMP=0x001000000001448a
- (id)addOneShotObserverBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000001434a
- (id)addObserverBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000142c0
- (id)initWithStorageProvider:(id)arg1;	// IMP=0x0010000000014197
- (id)init;	// IMP=0x0010000000014157

@end

