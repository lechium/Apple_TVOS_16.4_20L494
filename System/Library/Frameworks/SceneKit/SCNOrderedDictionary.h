//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SCNOrderedDictionary : NSObject
{
    NSMutableArray *_keys;	// 8 = 0x8
    NSMutableDictionary *_keyValues;	// 16 = 0x10
}

- (id)description;	// IMP=0x00000000001c0077
- (id)copy;	// IMP=0x00000000001c0042
- (void)_setupFrom:(id)arg1;	// IMP=0x00000000001bffe6
- (id)keys;	// IMP=0x00000000001bffdc
- (id)dictionary;	// IMP=0x00000000001bffd2
- (id)allValues;	// IMP=0x00000000001bffbc
- (unsigned long long)count;	// IMP=0x00000000001bffa6
- (void)applyBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001bfe61
- (void)applyFunction:(CDUnknownFunctionPointerType)arg1 withContext:(void *)arg2;	// IMP=0x00000000001bfd19
- (id)allKeys;	// IMP=0x00000000001bfcfb
- (void)removeAllObjects;	// IMP=0x00000000001bfcd0
- (void)removeObjectForKey:(id)arg1;	// IMP=0x00000000001bfc39
- (id)objectAtIndex:(long long)arg1;	// IMP=0x00000000001bfc04
- (id)objectForKey:(id)arg1;	// IMP=0x00000000001bfbee
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000001bfb5d
- (id)valueForKey:(id)arg1;	// IMP=0x00000000001bfb4b
- (void)setValue:(id)arg1 forKey:(id)arg2;	// IMP=0x00000000001bfb39
- (void)dealloc;	// IMP=0x00000000001bfaef

@end
