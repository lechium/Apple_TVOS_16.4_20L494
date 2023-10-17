//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DownloadPipeline, DownloadPolicyManager, ExternalDownloadState, NSMutableDictionary, NSString, SSSQLiteDatabase;
@protocol OS_dispatch_source;

@interface DownloadsDatabase : NSObject
{
    SSSQLiteDatabase *_database;	// 8 = 0x8
    NSMutableDictionary *_dirtyProgressByID;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_dirtyProgressTimer;	// 24 = 0x18
    ExternalDownloadState *_externalState;	// 32 = 0x20
    DownloadPipeline *_pipeline;	// 40 = 0x28
    DownloadPolicyManager *_policyManager;	// 48 = 0x30
    NSObject<OS_dispatch_source> *_progressTickTimer;	// 56 = 0x38
}

+ (id)downloadsDatabase;	// IMP=0x00200000000030bd
+ (void)_setupDatabase:(id)arg1;	// IMP=0x0010000000002b88
- (void).cxx_destruct;	// IMP=0x0020000000004ef2
- (void)_notifyProgressTickTimer;	// IMP=0x0010000000004eec
- (id)_newSessionDescription;	// IMP=0x0010000000004e77
- (id)_modifyUsingTransaction:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00100000000045d1
- (void)_commitExternalChangesForChangeset:(id)arg1;	// IMP=0x0010000000003c1e
- (void)downloadHandlerManagerHandlersDidChange:(id)arg1;	// IMP=0x0010000000003c18
- (void)downloadHandlerManager:(id)arg1 sessionsDidChange:(id)arg2;	// IMP=0x0010000000003b43
- (void)readUsingTransactionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000039c1
- (id)newDispatchSourceWithType:(struct dispatch_source_type_s *)arg1;	// IMP=0x00100000000039ab
- (id)modifyUsingTransactionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000003908
- (id)modifyUsingPurchaseTransactionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000003865
- (id)modifyExternalUsingTransactionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000360c
- (void)modifyExternalAsyncUsingTransactionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000003554
- (void)modifyAsyncUsingTransactionBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000349c
- (void)modifyAsyncUsingPurchaseTransactionBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000033b4
- (void)dispatchBlockSync:(CDUnknownBlockType)arg1;	// IMP=0x001000000000339e
- (void)dispatchBlockAsync:(CDUnknownBlockType)arg1;	// IMP=0x001000000000327b
- (void)dispatchAfter:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x001000000000314a
- (void)dealloc;	// IMP=0x001000000000302c
- (id)init;	// IMP=0x0010000000002c74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

