//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSSet.h"

__attribute__((visibility("hidden")))
@interface __NSSetI : NSSet
{
    unsigned int _used:58;	// 8 = 0x8
    unsigned int _szidx:6;	// 15 = 0xf
    id _list[0];	// 16 = 0x10
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0060000000089c21
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x00600000000890f6
- (void)dealloc;	// IMP=0x0000000000089d20
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000089d1b
- (id)mutableCopy;	// IMP=0x0000000000089c30
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000089c2b
- (id)copy;	// IMP=0x0000000000089c26
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000089776
- (void)getObjects:(id *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000896d9
- (unsigned long long)countForObject:(id)arg1;	// IMP=0x0000000000089592
- (_Bool)containsObject:(id)arg1;	// IMP=0x0000000000089450
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x00000000000893b9
- (double)clumpingInterestingThreshold;	// IMP=0x0000000000089347
- (double)clumpingFactor;	// IMP=0x00000000000890f9
- (id)objectEnumerator;	// IMP=0x00000000000890c0
- (id)member:(id)arg1;	// IMP=0x0000000000088f49
- (unsigned long long)count;	// IMP=0x0000000000088f33

@end

