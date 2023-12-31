//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSFrequentURISuggester, IDSKeychainWrapper, NSMutableDictionary;

@interface IDSOpportunisticCache : NSObject
{
    NSMutableDictionary *_keychainCache;	// 8 = 0x8
    long long _accessCount;	// 16 = 0x10
    IDSKeychainWrapper *_keychainWrapper;	// 24 = 0x18
    IDSFrequentURISuggester *_uriSuggester;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000000b560
@property(retain, nonatomic) IDSFrequentURISuggester *uriSuggester; // @synthesize uriSuggester=_uriSuggester;
@property(retain, nonatomic) IDSKeychainWrapper *keychainWrapper; // @synthesize keychainWrapper=_keychainWrapper;
@property(nonatomic) long long accessCount; // @synthesize accessCount=_accessCount;
@property(retain, nonatomic) NSMutableDictionary *keychainCache; // @synthesize keychainCache=_keychainCache;
- (id)description;	// IMP=0x001000000000b370
- (id)dataForService:(id)arg1 identifier:(id)arg2;	// IMP=0x001000000000b0c0
- (id)selectDataForDestination:(id)arg1;	// IMP=0x001000000000a490
- (void)selectServicesForKeychainCacheFromDictionary:(id)arg1;	// IMP=0x001000000000a300
- (void)limitDataInDictionary:(id)arg1 forService:(id)arg2;	// IMP=0x0010000000009cd0
- (void)mergeKeychainCacheDataIntoDictionary:(id)arg1 forService:(id)arg2;	// IMP=0x0010000000009810
- (void)mergeKeychainCacheIntoDictionary:(id)arg1;	// IMP=0x00100000000095d0
- (void)syncCacheWithKeychain;	// IMP=0x0010000000009500
- (_Bool)removeDataWithIdentifier:(id)arg1 serviceName:(id)arg2 withError:(id *)arg3;	// IMP=0x0010000000009330
- (_Bool)addData:(id)arg1 withError:(id *)arg2;	// IMP=0x0010000000008b30
- (_Bool)clearKeychainWithError:(id *)arg1;	// IMP=0x00100000000089e0
- (void)copyCacheWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000084a0
- (_Bool)saveOpportunisticCache:(id)arg1 withError:(id *)arg2;	// IMP=0x0010000000008210
- (id)fetchOpportunisticCacheWithError:(id *)arg1;	// IMP=0x0010000000007da0
- (id)initWithKeychainWrapper:(id)arg1 uriSuggester:(id)arg2;	// IMP=0x0010000000007c80
- (id)init;	// IMP=0x0010000000007be0

@end

