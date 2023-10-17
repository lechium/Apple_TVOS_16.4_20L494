//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, RequestStore;
@protocol OS_dispatch_queue;

@interface RequesterStore : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSMutableDictionary *_itemIdentifierStore;	// 16 = 0x10
    NSMutableDictionary *_requestIdentifierStore;	// 24 = 0x18
    NSMutableDictionary *_requestItems;	// 32 = 0x20
    RequestStore *_requestStore;	// 40 = 0x28
}

+ (id)sharedStore;	// IMP=0x0020000000001c47
- (void).cxx_destruct;	// IMP=0x0020000000003d64
@property(readonly, nonatomic) RequestStore *requestStore; // @synthesize requestStore=_requestStore;
@property(readonly, nonatomic) NSMutableDictionary *requestItems; // @synthesize requestItems=_requestItems;
@property(readonly, nonatomic) NSMutableDictionary *requestIdentifierStore; // @synthesize requestIdentifierStore=_requestIdentifierStore;
@property(readonly, nonatomic) NSMutableDictionary *itemIdentifierStore; // @synthesize itemIdentifierStore=_itemIdentifierStore;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
- (id)_migrationItems;	// IMP=0x0010000000003841
- (void)_loadItemsIntoMemory;	// IMP=0x0010000000003319
- (void)_saveChanges;	// IMP=0x0010000000003073
- (id)_requesterRequestWithStoreItem:(id)arg1;	// IMP=0x0010000000003026
- (void)storeRequest:(id)arg1;	// IMP=0x0010000000002e88
- (id)requestWithIdentifier:(id)arg1;	// IMP=0x0010000000002a58
- (id)requestIdentifierWithItemIdentifier:(id)arg1;	// IMP=0x00100000000026e8
- (_Bool)containsRequestWithIdentifier:(id)arg1;	// IMP=0x0010000000002398
- (void)clearRequests;	// IMP=0x00100000000021ac
- (void)clearExpiredRequests;	// IMP=0x0010000000001c9c
- (id)init;	// IMP=0x0010000000001afb

@end
