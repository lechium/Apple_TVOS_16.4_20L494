//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSArray.h"

__attribute__((visibility("hidden")))
@interface __NSSingleObjectArrayI : NSArray
{
    id _object;	// 8 = 0x8
}

+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x006000000017090e
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;	// IMP=0x0060000000170740
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001709db
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001709d5
- (void)dealloc;	// IMP=0x000000000017096c
- (id)objectEnumerator;	// IMP=0x00000000001708cd
- (id)lastObject;	// IMP=0x00000000001708c1
- (_Bool)isEqualToArray:(id)arg1;	// IMP=0x0000000000170829
- (id)firstObject;	// IMP=0x000000000017081d
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000017079c
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000000170743
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000001706ca
- (id)objectAtIndex:(unsigned long long)arg1;	// IMP=0x000000000017065a
- (unsigned long long)count;	// IMP=0x0000000000170654

@end
