//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSOrderedSet.h"

__attribute__((visibility("hidden")))
@interface __NSOrderedSetI : NSOrderedSet
{
    unsigned int _used:56;	// 8 = 0x8
    unsigned int _stride:2;	// 15 = 0xf
    unsigned int _szidx:6;	// 15 = 0xf
    id _list[0];	// 16 = 0x10
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0060000000007673
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0060000000007201
- (void)dealloc;	// IMP=0x0000000000007a0c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000766d
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000000734d
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000072d6
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000007204
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000000718b
- (unsigned long long)indexOfObject:(id)arg1;	// IMP=0x000000000000702d
- (unsigned long long)count;	// IMP=0x000000000000700c

@end

