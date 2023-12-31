//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXAssetsActivityTransactionManager, AXAssetsXPCServer, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface AXAssetsDaemon : NSObject
{
    AXAssetsActivityTransactionManager *_activityTransactionManager;	// 8 = 0x8
    AXAssetsXPCServer *_xpcServer;	// 16 = 0x10
    NSMutableArray *_managedAssets;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_notificationQueue;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0020000000015750
- (void).cxx_destruct;	// IMP=0x00200000000168a0
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue; // @synthesize notificationQueue=_notificationQueue;
@property(retain, nonatomic) NSMutableArray *managedAssets; // @synthesize managedAssets=_managedAssets;
@property(retain, nonatomic) AXAssetsXPCServer *xpcServer; // @synthesize xpcServer=_xpcServer;
@property(retain, nonatomic) AXAssetsActivityTransactionManager *activityTransactionManager; // @synthesize activityTransactionManager=_activityTransactionManager;
- (void)willBecomeIdle:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000016490
- (void)_updateAssetForAssetType:(id)arg1;	// IMP=0x00100000000163e0
- (void)_refreshAssetCatalogForAssetType:(id)arg1 withOverrideTimeout:(id)arg2 forceCatalogRefresh:(_Bool)arg3;	// IMP=0x00100000000162f0
- (id)_managedAssetForAssetType:(id)arg1;	// IMP=0x0010000000015fe0
- (void)run;	// IMP=0x0010000000015d70
- (void)registerManagedAssets:(id)arg1;	// IMP=0x0010000000015cf0
- (void)registerManagedAsset:(id)arg1;	// IMP=0x0010000000015c70
- (id)_init;	// IMP=0x0010000000015820

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

