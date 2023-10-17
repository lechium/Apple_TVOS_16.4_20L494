//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AdCore/ADIDManager.h>

@class NSString;

@interface ADIDManager (Private)
+ (void)initialize;	// IMP=0x00100000000054d4
- (void)checkForLateReconcile;	// IMP=0x0010000000009948
- (void)setReconcileOperations:(id)arg1;	// IMP=0x001000000000991f
- (id)reconcileOperations;	// IMP=0x001000000000990e
- (_Bool)reconcileInProgress;	// IMP=0x00100000000098d6
- (void)checkOnTask:(id)arg1 activity:(id)arg2;	// IMP=0x00100000000096bf
- (_Bool)runTask:(id)arg1;	// IMP=0x001000000000921a
- (_Bool)scheduleDailyUpdate;	// IMP=0x0010000000009065
- (_Bool)scheduleReconciliation:(double)arg1;	// IMP=0x0010000000008d62
- (void)cancelPendingReconcile;	// IMP=0x0010000000008d17
- (void)handleAccountChange:(CDUnknownBlockType)arg1;	// IMP=0x00100000000087cb
- (void)reconcile:(CDUnknownBlockType)arg1;	// IMP=0x0010000000007f09
- (void)updateAccountData:(CDUnknownBlockType)arg1;	// IMP=0x00100000000078bc
- (void)finishedReconciling:(CDUnknownBlockType)arg1 withError:(id)arg2;	// IMP=0x0010000000007094
- (void)performOperationAfterReconcile:(CDUnknownBlockType)arg1;	// IMP=0x0010000000007002
- (void)performOperationWhenNotReconciling:(CDUnknownBlockType)arg1;	// IMP=0x0010000000006f2c
- (id)saveAndNotifyIfNecessary;	// IMP=0x0010000000006e71
- (id)save;	// IMP=0x0010000000006626
- (void)saveDataForPCD;	// IMP=0x0010000000006563
- (void)incrementMonthlyResetCount;	// IMP=0x00100000000062ba
- (void)notifyActiveRecordChanged;	// IMP=0x0010000000006215
- (void)deleteRecords:(CDUnknownBlockType)arg1;	// IMP=0x0010000000006012
- (void)prepareForPushNotification;	// IMP=0x0010000000005fd0
- (void)setDSID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000005890
- (id)init;	// IMP=0x0010000000005504

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
