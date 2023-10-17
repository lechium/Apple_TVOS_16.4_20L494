//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSMapTable.h"

__attribute__((visibility("hidden")))
@interface NSClassicMapTable : NSMapTable
{
    struct {
        CDUnknownFunctionPointerType hash;
        CDUnknownFunctionPointerType isEqual;
        CDUnknownFunctionPointerType retain;
        CDUnknownFunctionPointerType release;
        CDUnknownFunctionPointerType describe;
        void *notAKeyMarker;
    } _keyCallBacks;	// 8 = 0x8
    struct {
        CDUnknownFunctionPointerType retain;
        CDUnknownFunctionPointerType release;
        CDUnknownFunctionPointerType describe;
    } _valueCallBacks;	// 56 = 0x38
    struct __CFBasicHash *_ht;	// 80 = 0x50
}

- (unsigned long long)getKeys:(const void **)arg1 values:(const void **)arg2;	// IMP=0x0000000000482941
- (id)allValues;	// IMP=0x0000000000482744
- (id)allKeys;	// IMP=0x0000000000482547
- (id)description;	// IMP=0x0000000000482307
- (void)_reclaim;	// IMP=0x0000000000482301
- (unsigned long long)count;	// IMP=0x00000000004822ec
- (void)removeObjectForKey:(id)arg1;	// IMP=0x0000000000482296
- (void *)existingItemForSetItem:(const void *)arg1 forAbsentKey:(const void *)arg2;	// IMP=0x00000000004821d3
- (void)setItem:(const void *)arg1 forKnownAbsentKey:(const void *)arg2;	// IMP=0x00000000004820cf
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000482079
- (id)objectForKey:(id)arg1;	// IMP=0x0000000000482022
- (_Bool)mapMember:(const void *)arg1 originalKey:(const void **)arg2 value:(const void **)arg3;	// IMP=0x0000000000481fa3
- (id)copy;	// IMP=0x0000000000481eb3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000481e66
- (void)removeAllItems;	// IMP=0x0000000000481e47
- (void)dealloc;	// IMP=0x0000000000481de3
- (id)init;	// IMP=0x0000000000481dda

@end
