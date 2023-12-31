//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IAPHistoryService : NSObject
{
}

- (void)getAppStoreConsumedIntroOfferFamilyIdsWithResultHandler:(CDUnknownBlockType)arg1;	// IMP=0x00400000000a9c36
- (void)getCachedSubscriptionEntitlementsForSegment:(unsigned long long)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a9a7c
- (void)getSubscriptionEntitlementsForSegment:(unsigned long long)arg1 ignoreCaches:(_Bool)arg2 requestingBundleId:(id)arg3 withReplyHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000a9830
- (void)setSubscriptionEntitlementsWithDictionary:(id)arg1 forAccountID:(id)arg2 segment:(unsigned long long)arg3;	// IMP=0x00100000000a964b
- (void)refreshIAPsForActiveAccountWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a94b4
- (void)getIAPsForActiveAccountWithAdamIDs:(id)arg1 withReplyHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a91a8
- (void)getAllIAPsForActiveAccountWithReplyHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a9011

@end

