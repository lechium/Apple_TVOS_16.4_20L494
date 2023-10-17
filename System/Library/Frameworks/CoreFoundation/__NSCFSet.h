//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSMutableSet.h"

__attribute__((visibility("hidden")))
@interface __NSCFSet : NSMutableSet
{
    unsigned char _cfinfo[4];	// 8 = 0x8
    unsigned int _rc;	// 12 = 0xc
    unsigned int _bits[4];	// 16 = 0x10
    void *_callbacks;	// 32 = 0x20
    id *_values;	// 40 = 0x28
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x006000000019e6f1
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x006000000019e537
- (void)getObjects:(id *)arg1;	// IMP=0x000000000019ea6a
- (void)removeAllObjects;	// IMP=0x000000000019ea14
- (void)removeObject:(id)arg1;	// IMP=0x000000000019e99a
- (void)addObject:(id)arg1;	// IMP=0x000000000019e920
- (id)objectEnumerator;	// IMP=0x000000000019e8c6
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x000000000019e872
- (unsigned long long)_trueCount;	// IMP=0x000000000019e86d
- (id)member:(id)arg1;	// IMP=0x000000000019e7ec
- (unsigned long long)count;	// IMP=0x000000000019e7b1
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000019e772
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000019e71a
- (Class)classForCoder;	// IMP=0x000000000019e6f4
- (id)description;	// IMP=0x000000000019e642
- (unsigned long long)retainCount;	// IMP=0x000000000019e63d
- (_Bool)_isDeallocating;	// IMP=0x000000000019e62d
- (_Bool)_tryRetain;	// IMP=0x000000000019e61c
- (oneway void)release;	// IMP=0x000000000019e617
- (id)retain;	// IMP=0x000000000019e5ff
- (unsigned long long)hash;	// IMP=0x000000000019e5fa
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000019e54f

@end

