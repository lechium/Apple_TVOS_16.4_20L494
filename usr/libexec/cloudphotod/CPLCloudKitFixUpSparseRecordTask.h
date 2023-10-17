//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;
@protocol CPLEngineStoreUserIdentifier, CPLEngineTransportGroup;

@interface CPLCloudKitFixUpSparseRecordTask
{
    NSArray *_tasks;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000fcd15
@property(readonly, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) NSArray *tasks; // @synthesize tasks=_tasks;
- (void)runOperations;	// IMP=0x00100000000fcb26
- (void)_updateSparseRecords:(id)arg1 currentUserRecordID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000fb90b
- (void)_fetchSparseRecordsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000fb6a8
- (id)initWithController:(id)arg1 tasks:(id)arg2 transportScopeMapping:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000fb5c0

// Remaining properties
@property(nonatomic) _Bool allowsFetchCache;
@property(nonatomic, getter=isBackgroundTask) _Bool backgroundTask;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) id fetchCache;
@property(nonatomic, getter=isForcedTask) _Bool forcedTask;
@property(nonatomic) _Bool foreground;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighPriorityBackground) _Bool highPriorityBackground;
@property(readonly) Class superclass;
@property(retain, nonatomic) id <CPLEngineTransportGroup> transportGroup;
@property(retain, nonatomic) id <CPLEngineStoreUserIdentifier> transportUserIdentifier;

@end

