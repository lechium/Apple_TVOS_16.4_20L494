//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VSKeychainStore : NSObject
{
}

- (_Bool)_fixUpdateConflictForItemWithAttributes:(id)arg1 andAttributesToUpdate:(id)arg2;	// IMP=0x0000000000088024
- (_Bool)deleteItemsMatchingQuery:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000087fb4
- (_Bool)updateAttributes:(id)arg1 ofItemsMatchingQuery:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000087ea1
- (id)findItemsMatchingQuery:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000087ddb
- (id)addItem:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000087c03

@end
