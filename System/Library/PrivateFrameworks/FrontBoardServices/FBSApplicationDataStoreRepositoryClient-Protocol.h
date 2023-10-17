//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol FBSApplicationDataStoreRepositoryClientObserver;

@protocol FBSApplicationDataStoreRepositoryClient <NSObject>
- (void)removeObserver:(id <FBSApplicationDataStoreRepositoryClientObserver>)arg1;
- (void)addObserver:(id <FBSApplicationDataStoreRepositoryClientObserver>)arg1;
- (_Bool)prefetchedObjectIfAvailableForKey:(NSString *)arg1 application:(NSString *)arg2 outObject:(id *)arg3;
- (void)removeAllObjectsForApplication:(NSString *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)removeObjectForKey:(NSString *)arg1 forApplication:(NSString *)arg2 withCompletion:(void (^)(NSError *))arg3;
- (void)setObject:(id)arg1 forKey:(NSString *)arg2 forApplication:(NSString *)arg3 withCompletion:(void (^)(NSError *))arg4;
- (id)objectForKey:(NSString *)arg1 forApplication:(NSString *)arg2;
- (NSArray *)availableDataStores;
- (void)synchronizeWithCompletion:(void (^)(NSError *))arg1;
- (void)invalidate;
- (void)removePrefetchedKeys:(NSArray *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)addPrefetchedKeys:(NSArray *)arg1;
@end

