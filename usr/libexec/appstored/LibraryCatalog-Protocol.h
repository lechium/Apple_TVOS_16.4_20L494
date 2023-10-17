//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class NSPredicate, NSSet;
@protocol LibraryCatalogObserver;

@protocol LibraryCatalog <NSObject>
@property __weak id <LibraryCatalogObserver> observer;
- (void)executeQuery:(NSPredicate *)arg1 excludingBundleIDs:(NSSet *)arg2 usingBlock:(void (^)(NSArray *, NSError *))arg3;
@end

