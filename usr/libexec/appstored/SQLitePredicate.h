//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SQLitePredicate : NSObject
{
}

- (_Bool)isEqual:(id)arg1;	// IMP=0x004000000013e0ee
- (unsigned long long)hash;	// IMP=0x001000000013e0d4
- (id)SQLJoinClausesForEntityClass:(Class)arg1;	// IMP=0x001000000013e0cc
- (id)SQLForEntityClass:(Class)arg1;	// IMP=0x001000000013e0c4
- (void)applyBinding:(id)arg1 atIndex:(inout int *)arg2;	// IMP=0x001000000013e0be
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000013e0b3

@end

