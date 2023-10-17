//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HAPDeviceID, HAPPairingIdentity, NSData, NSDictionary, NSSet, NSString;
@protocol HAP2StorageDelegate;

@protocol HAP2Storage <NSObject>
@property(nonatomic) __weak id <HAP2StorageDelegate> delegate;
- (void)removeCacheForIdentifier:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)saveCacheForIdentifier:(NSString *)arg1 data:(NSData *)arg2 completion:(void (^)(NSError *))arg3;
- (void)fetchCacheForIdentifier:(NSString *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
- (void)saveControllerIdentity:(HAPPairingIdentity *)arg1 completion:(void (^)(NSDictionary *))arg2;
- (void)removeControllerKeyWithCompletion:(void (^)(NSError *))arg1;
- (void)fetchControllerKeyForDeviceId:(HAPDeviceID *)arg1 completion:(void (^)(HAPPairingIdentity *, NSError *))arg2;
- (void)removeKeysForIdentifiers:(NSSet *)arg1 completion:(void (^)(NSDictionary *))arg2;
- (void)saveKeysForIdentifiers:(NSDictionary *)arg1 completion:(void (^)(NSDictionary *))arg2;
- (void)fetchKeysForIdentifiers:(NSSet *)arg1 completion:(void (^)(NSDictionary *, NSDictionary *))arg2;
- (void)hasKeysForIdentifiers:(NSSet *)arg1 completion:(void (^)(NSDictionary *, NSDictionary *))arg2;

@optional
- (void)shutDownWithCompletion:(void (^)(NSError *))arg1;
- (void)startUpWithCompletion:(void (^)(NSError *))arg1;
@end

