//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface SubscriptionEntitlementsCoordinator : NSObject
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 8 = 0x8
    NSNumber *_lastAccountID;	// 16 = 0x10
    NSData *_newsEntitlementsData;	// 24 = 0x18
    NSData *_appStoreEntitlementsData;	// 32 = 0x20
    NSData *_activityEntitlementsData;	// 40 = 0x28
    NSData *_musicEntitlementsData;	// 48 = 0x30
    NSData *_tvEntitlementsData;	// 56 = 0x38
    NSData *_iCloudEntitlementsData;	// 64 = 0x40
    NSData *_podcastEntitlementsData;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_backgroundQueue;	// 80 = 0x50
    NSMutableDictionary *_completionHandlersBySegment;	// 88 = 0x58
}

+ (id)sharedInstance;	// IMP=0x0020000000120c04
- (void).cxx_destruct;	// IMP=0x0020000000125f2c
- (void)_handleAccountStoreDidChangeNotification:(id)arg1;	// IMP=0x00100000001250fb
- (void)pushService:(id)arg1 didReceiveMessage:(id)arg2;	// IMP=0x0010000000122c74
- (void)setCachedSubscriptionEntitlements:(id)arg1 forAccountID:(id)arg2 segment:(unsigned long long)arg3;	// IMP=0x00100000001221fa
- (void)dealloc;	// IMP=0x00100000001216ff
- (id)init;	// IMP=0x0010000000120c89

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

