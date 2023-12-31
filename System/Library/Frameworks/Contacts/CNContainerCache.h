//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore, CNCache, CNContactStore, CNContainer;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CNContainerCache : NSObject
{
    CNContainer *_primaryiCloudContainer;	// 8 = 0x8
    CNContactStore *_contactStore;	// 16 = 0x10
    ACAccountStore *_accountStore;	// 24 = 0x18
    CNCache *_cachedAccounts;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_workQueue;	// 40 = 0x28
}

+ (id)os_log;	// IMP=0x00600000000faffd
- (void).cxx_destruct;	// IMP=0x00000000000fbbf6
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(retain, nonatomic) CNCache *cachedAccounts; // @synthesize cachedAccounts=_cachedAccounts;
@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(nonatomic) __weak CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(retain, nonatomic) CNContainer *primaryiCloudContainer; // @synthesize primaryiCloudContainer=_primaryiCloudContainer;
- (void)resetPrimaryiCloudContainer;	// IMP=0x00000000000fbb63
- (void)resetAccountCache;	// IMP=0x00000000000fbb4f
- (id)cnAccountForContainer:(id)arg1;	// IMP=0x00000000000fb9f3
- (id)accountForContainer:(id)arg1;	// IMP=0x00000000000fb75f
- (id)onWorkQueue_findPrimaryiCloudContainer;	// IMP=0x00000000000fb50c
- (void)dealloc;	// IMP=0x00000000000fb2d4
- (void)contactStoreDidChange;	// IMP=0x00000000000fb24d
- (void)accountStoreDidChange;	// IMP=0x00000000000fb1c6
- (id)initWithContactStore:(id)arg1;	// IMP=0x00000000000fb059

@end

