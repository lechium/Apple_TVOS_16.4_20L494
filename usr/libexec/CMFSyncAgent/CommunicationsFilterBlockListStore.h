//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol CMFSyncAgentDataStore;

@interface CommunicationsFilterBlockListStore : NSObject
{
    id <CMFSyncAgentDataStore> _dataStore;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00400000000017ff
@property(readonly, nonatomic) id <CMFSyncAgentDataStore> dataStore; // @synthesize dataStore=_dataStore;
- (void)handleNSUbiquitousKeyValueStoreDidChangeExternallyNotification:(id)arg1;	// IMP=0x001000000000309c
- (void)_stopSharingFocusStatusWithFilterItem:(id)arg1;	// IMP=0x0010000000002ee9
- (void)_updateStore:(id)arg1 revision:(unsigned long long)arg2 updateKVS:(_Bool)arg3 updateLocal:(_Bool)arg4 itemsNeedConversion:(_Bool)arg5;	// IMP=0x0010000000002a07
- (_Bool)isItemInList:(id)arg1;	// IMP=0x001000000000292c
- (id)_isItemInList:(id)arg1 blockList:(id)arg2;	// IMP=0x0010000000002804
- (id)_copyItems:(_Bool)arg1;	// IMP=0x001000000000274a
- (id)copyAllItems;	// IMP=0x0010000000002736
- (id)copyAllItemsAsDictionaries;	// IMP=0x001000000000271f
- (_Bool)removeItemForAllServices:(id)arg1;	// IMP=0x00100000000025fd
- (_Bool)addItemForAllServices:(id)arg1;	// IMP=0x0010000000001d4d
- (void)_storeDidChangeExternally;	// IMP=0x0010000000001ce3
- (void)updateDataStore;	// IMP=0x0010000000001b64
- (void)synchronizeDataStore;	// IMP=0x0010000000001acb
- (void)migrateLegacyDataStoreIfNeeded;	// IMP=0x0010000000001948
- (void)dealloc;	// IMP=0x001000000000190d
- (id)init;	// IMP=0x0010000000001844

@end

