//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSSetChanges.h"

@class NSMutableArray, NSSet;

__attribute__((visibility("hidden")))
@interface NSConcreteSetChanges : NSSetChanges
{
    NSSet *_backing;	// 8 = 0x8
    NSMutableArray *_changes;	// 16 = 0x10
    _Bool _backingIsMutable;	// 24 = 0x18
}

- (void)dealloc;	// IMP=0x00000000004fb7e5
- (id)description;	// IMP=0x00000000004fb6b7
- (void)_fault;	// IMP=0x00000000004fb63b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004fb5da
- (void)enumerateChanges:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00000000004fb492
- (void)enumerateChangesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000004fb37c
- (unsigned long long)changeCount;	// IMP=0x00000000004fb35f
- (void)transformObjectsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000004fb1ad
- (void)filterObjectsWithTest:(CDUnknownBlockType)arg1;	// IMP=0x00000000004fb044
- (void)unionSet:(id)arg1;	// IMP=0x00000000004faed1
- (void)removeAllObjects;	// IMP=0x00000000004fae89
- (void)minusSet:(id)arg1;	// IMP=0x00000000004fad16
- (void)setSet:(id)arg1;	// IMP=0x00000000004facd9
- (void)intersectSet:(id)arg1;	// IMP=0x00000000004fab0c
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000004faaae
- (void)addObjectsFromArray:(id)arg1;	// IMP=0x00000000004fa9aa
- (void)addChange:(id)arg1;	// IMP=0x00000000004fa93f
- (void)_willChange;	// IMP=0x00000000004fa912
- (id)initWithSet:(id)arg1;	// IMP=0x00000000004fa891
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000004fa859
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x00000000004fa821
- (id)init;	// IMP=0x00000000004fa7e9
- (id)objectEnumerator;	// IMP=0x00000000004fa7a4
- (id)member:(id)arg1;	// IMP=0x00000000004fa75a
- (unsigned long long)count;	// IMP=0x00000000004fa715

@end

