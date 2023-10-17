//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface _UILazyMapTable : NSObject
{
    CDUnknownBlockType _mappingBlock;	// 8 = 0x8
    NSMapTable *_keysToClientTables;	// 16 = 0x10
    NSMapTable *_keysToValues;	// 24 = 0x18
    NSMapTable *_valuesToKeys;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000001036683
- (void)unregisterClient:(id)arg1 ofObjectForKey:(id)arg2;	// IMP=0x0000000001036587
- (void)registerClient:(id)arg1 ofObjectForKey:(id)arg2;	// IMP=0x00000000010364bc
- (id)cachedObjectEnumerable;	// IMP=0x00000000010364ae
- (id)keyEnumerable;	// IMP=0x00000000010364a0
- (id)cachedObjects;	// IMP=0x0000000001036492
- (id)keys;	// IMP=0x0000000001036484
- (_Bool)hasCachedObjectForKey:(id)arg1;	// IMP=0x000000000103644d
- (id)objectForKey:(id)arg1;	// IMP=0x0000000001036363
- (unsigned long long)count;	// IMP=0x000000000103634d
- (id)description;	// IMP=0x00000000010362d0
- (id)initWithMappingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000010361cb

@end

