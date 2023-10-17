//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CHLogger.h"

@class CallHistoryDBClientHandle, NSString, TransactionManager;

__attribute__((visibility("hidden")))
@interface SyncManager : CHLogger
{
    TransactionManager *_transactionManager;	// 8 = 0x8
    CallHistoryDBClientHandle *_dbHandle;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000019d9b
@property(readonly, nonatomic) CallHistoryDBClientHandle *dbHandle; // @synthesize dbHandle=_dbHandle;
- (id)archiveCallObject:(id)arg1;	// IMP=0x0000000000019ce1
- (void)resetTimers;	// IMP=0x0000000000019ca4
- (double)timerOutgoing;	// IMP=0x0000000000019c31
- (double)timerIncoming;	// IMP=0x0000000000019bbe
- (double)timerLifetime;	// IMP=0x0000000000019b4b
- (void)addUpdateTransactions:(id)arg1;	// IMP=0x00000000000198eb
- (void)updateAllObjects:(id)arg1;	// IMP=0x0000000000019849
- (void)updateObjects:(id)arg1;	// IMP=0x00000000000197a7
- (void)deleteObjectsWithLimits:(id)arg1;	// IMP=0x00000000000192d4
- (void)deleteAllObjects;	// IMP=0x0000000000018ec1
- (void)deleteObjectsWithUniqueIds:(id)arg1;	// IMP=0x0000000000018b31
- (void)deleteObjectWithUniqueId:(id)arg1;	// IMP=0x000000000001895a
- (id)fetchObjectsWithLimits:(id)arg1;	// IMP=0x000000000001882e
- (id)predicateForLimits:(id)arg1;	// IMP=0x00000000000185c2
- (id)predicateForCallKinds:(id)arg1;	// IMP=0x00000000000183c8
- (id)predicateForCallKind:(id)arg1;	// IMP=0x0000000000018122
- (id)fetchObjectWithUniqueId:(id)arg1;	// IMP=0x000000000001809f
- (id)fetchAllObjects;	// IMP=0x000000000001804f
- (id)fetchCoalescedCallsWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5;	// IMP=0x0000000000017f99
- (unsigned long long)fetchCoalescedCallCountWithPredicate:(id)arg1 sortDescriptors:(id)arg2;	// IMP=0x0000000000017f0e
- (id)fetchCallIdentifiersWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5;	// IMP=0x0000000000017e58
- (id)fetchCallsWithPredicate:(id)arg1 sortDescriptors:(id)arg2 limit:(unsigned long long)arg3 offset:(unsigned long long)arg4 batchSize:(unsigned long long)arg5;	// IMP=0x0000000000017da2
- (unsigned long long)fetchCallCountWithPredicate:(id)arg1 sortDescriptors:(id)arg2;	// IMP=0x0000000000017d17
- (long long)deleteCallsWithPredicate:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000017c76
- (long long)setRead:(_Bool)arg1 forCallsWithPredicate:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000017a94
- (void)insertRecordsWithoutTransactions:(id)arg1;	// IMP=0x0000000000017a22
- (void)insertWithoutTransaction:(id)arg1;	// IMP=0x00000000000179b0
- (void)insert:(id)arg1;	// IMP=0x0000000000017853
- (void)initDBHandle;	// IMP=0x00000000000177e3
- (id)init;	// IMP=0x000000000001775a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

