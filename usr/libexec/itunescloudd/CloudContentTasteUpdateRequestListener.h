//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSXPCListener;
@protocol OS_dispatch_queue;

@interface CloudContentTasteUpdateRequestListener : NSObject
{
    NSXPCListener *_listener;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_accessQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 24 = 0x18
    NSMutableDictionary *_contentTasteRequestHandlerToDSIDMap;	// 32 = 0x20
    _Bool _musicAppIsInstalled;	// 40 = 0x28
}

+ (id)sharedContentTasteRequestListener;	// IMP=0x0020000000114e7b
- (void).cxx_destruct;	// IMP=0x0020000000113aef
- (void)_postContentTasteChangesForPendingItems;	// IMP=0x0010000000113777
- (void)_cancelAllContentTasteRequestHandlers;	// IMP=0x0010000000113719
- (void)_updateContentTasteForItem:(id)arg1 invalidatingLocalCache:(_Bool)arg2 configuration:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000001135bc
- (id)_contentTasteRequestHandlerForConfiguration:(id)arg1 outError:(id *)arg2;	// IMP=0x001000000011338b
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000113146
- (void)updateContentTasteForMediaItemsAndInvalidateLocalCache:(_Bool)arg1 configuration:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000011312d
- (void)setContentTaste:(long long)arg1 forAlbumStoreID:(long long)arg2 configuration:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000113080
- (void)setContentTaste:(long long)arg1 forPlaylistGlobalID:(id)arg2 configuration:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000112f8b
- (void)setContentTaste:(long long)arg1 forMediaItem:(long long)arg2 storeIdentifier:(long long)arg3 configuration:(id)arg4 timeStamp:(id)arg5 withCompletionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000112e74
- (void)removeContentTasteOperationsForConnectionConfiguration:(id)arg1;	// IMP=0x0010000000112de7
- (void)updateContentTasteForConnectionConfiguration:(id)arg1 invalidateLocalCache:(_Bool)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000112d30
- (void)handleContentTasteChangedNotification;	// IMP=0x0010000000112ce5
- (void)handleMusicAppRemoved;	// IMP=0x0010000000112c9a
- (void)handleMusicAppInstalled;	// IMP=0x0010000000112c4f
- (void)stop;	// IMP=0x0010000000112b70
- (void)start;	// IMP=0x0010000000112a91
- (id)_init;	// IMP=0x001000000011299a
- (id)init;	// IMP=0x0010000000112958

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

