//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CloudArtworkImporter, NSString;

@interface SubscriptionRequestHandler
{
    CloudArtworkImporter *_artworkImporter;	// 8 = 0x8
}

+ (id)handlers;	// IMP=0x00200000000e68cb
- (void).cxx_destruct;	// IMP=0x00200000000e5dd7
@property(readonly, nonatomic) CloudArtworkImporter *artworkImporter; // @synthesize artworkImporter=_artworkImporter;
- (void)_removeAllSubscriptionContentWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e5a2a
- (void)_importAllItemArtworkWithClientIdentity:(id)arg1;	// IMP=0x00100000000e58f6
- (void)_loadArtworkInfoForSubscriptionPersistentIDs:(id)arg1 artworkType:(long long)arg2 entityType:(long long)arg3 clientIdentity:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000e5064
- (void)environmentMonitorDidChangePower:(id)arg1;	// IMP=0x00100000000e4ec7
- (void)handleMusicAppRemovedWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e4e39
- (void)loadMissingArtworkWithClientIdentity:(id)arg1;	// IMP=0x00100000000e4e27
- (void)loadScreenshotInfoForSubscriptionPersistentIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e4dfd
- (void)loadArtworkInfoForSubscriptionContainerPersistentIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e4dd0
- (void)loadArtworkInfoForSubscriptionItemPersistentIDs:(id)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e4da6
- (void)deprioritizeSubscriptionContainerArtworkForPersistentID:(long long)arg1;	// IMP=0x00100000000e4d55
- (void)deprioritizeSubscriptionScreenshotForPersistentID:(long long)arg1;	// IMP=0x00100000000e4d04
- (void)deprioritizeSubscriptionItemArtworkForPersistentID:(long long)arg1;	// IMP=0x00100000000e4cb3
- (void)importContainerArtworkForPersistentID:(long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e497d
- (void)importScreenshotForPersistentID:(long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e45ec
- (void)importItemArtworkForPersistentID:(long long)arg1 clientIdentity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e425b
- (void)becomeInactiveWithDeauthentication:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000e408a
- (void)becomeActive;	// IMP=0x00100000000e4073
- (id)initWithConfiguration:(id)arg1;	// IMP=0x00100000000e3f9c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

