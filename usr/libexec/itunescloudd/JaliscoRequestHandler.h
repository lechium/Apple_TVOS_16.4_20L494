//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICConnectionConfiguration, JaliscoArtworkImporter, JaliscoLibrary, JaliscoMediaUpdateOperation, ML3MusicLibrary, NSMutableArray;
@protocol ICDCloudMusicLibraryJaliscoUpdateTaskHelper, OS_dispatch_queue;

@interface JaliscoRequestHandler : NSObject
{
    ICConnectionConfiguration *_configuration;	// 8 = 0x8
    ML3MusicLibrary *_musicLibrary;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_calloutQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_updateLibraryQueue;	// 32 = 0x20
    id <ICDCloudMusicLibraryJaliscoUpdateTaskHelper> _updateTaskHelper;	// 40 = 0x28
    JaliscoLibrary *_jaliscoLibrary;	// 48 = 0x30
    JaliscoArtworkImporter *_artworkImporter;	// 56 = 0x38
    JaliscoMediaUpdateOperation *_updateLibraryOperation;	// 64 = 0x40
    NSMutableArray *_updateLibraryCompletionHandlers;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0020000000098d4f
@property(readonly, copy, nonatomic) NSMutableArray *updateLibraryCompletionHandlers; // @synthesize updateLibraryCompletionHandlers=_updateLibraryCompletionHandlers;
@property(retain, nonatomic) JaliscoMediaUpdateOperation *updateLibraryOperation; // @synthesize updateLibraryOperation=_updateLibraryOperation;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *updateLibraryQueue; // @synthesize updateLibraryQueue=_updateLibraryQueue;
@property(readonly, nonatomic) JaliscoArtworkImporter *artworkImporter; // @synthesize artworkImporter=_artworkImporter;
- (id)_DAAPMediaKindFromJaliscoSupportedMediaKind:(long long)arg1;	// IMP=0x0010000000098cf7
- (void)_updateJaliscoLibraryWithClientIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000098c35
- (void)_addLibraryOperation:(id)arg1 priority:(int)arg2 noLibraryHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000098b68
- (void)loadBooksForStoreIDs:(id)arg1 clientIdentity:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000989a0
- (void)cancelAllOperationsAndWaitForOperationsToFinish:(_Bool)arg1;	// IMP=0x001000000009886d
- (void)cancelAllOperations;	// IMP=0x0010000000098859
- (void)isMediaKindDisabledForJaliscoLibrary:(long long)arg1 withClientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009873b
- (void)updateJaliscoLibraryByRemovingMediaKind:(long long)arg1 withClientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000009861d
- (void)updateJaliscoLibraryWithClientIdentity:(id)arg1 byAddingMediaKind:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000984ff
- (void)increasePriorityForAllOperations;	// IMP=0x0010000000098383
- (void)decreasePriorityForAllOperations;	// IMP=0x0010000000098207
- (void)cancelOperationsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000980f3
- (void)removeLibraryWithClientIdentity:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000097f77
- (void)loadMissingArtworkWithClientIdentity:(id)arg1;	// IMP=0x0010000000097f61
- (void)loadScreenshotInfoForPurchaseHistoryIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000097984
- (void)loadArtworkInfoForPurchaseHistoryIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000975d6
- (void)deprioritizeScreenshotForPurchaseHistoryID:(unsigned long long)arg1;	// IMP=0x0010000000097585
- (void)deprioritizeItemArtworkForPurchaseHistoryID:(unsigned long long)arg1;	// IMP=0x0010000000097534
- (void)importScreenshotForPurchaseHistoryID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000097415
- (void)importItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000972f6
- (void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2 clientIdentity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000970ea
- (void)hideItemsWithPurchaseHistoryIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000096ea2
- (void)updateLibraryWithClientIdentity:(id)arg1 reason:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000096570
- (float)updateProgress;	// IMP=0x0010000000096499
- (_Bool)isUpdateInProgressWithIsInitialImport:(_Bool *)arg1;	// IMP=0x0010000000096379
- (id)jaliscoLibraryWithReason:(long long)arg1;	// IMP=0x00100000000960d6
@property(readonly, nonatomic) JaliscoLibrary *jaliscoLibrary; // @synthesize jaliscoLibrary=_jaliscoLibrary;
- (void)cancelPendingChanges;	// IMP=0x00100000000960ae
- (void)cancelPendingChangesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000095f46
- (void)addOperation:(id)arg1 priority:(int)arg2;	// IMP=0x0010000000095ec8
- (void)dealloc;	// IMP=0x0010000000095d29
- (id)initWithConfiguration:(id)arg1 updateTaskHelper:(id)arg2;	// IMP=0x0010000000095bba

@end

