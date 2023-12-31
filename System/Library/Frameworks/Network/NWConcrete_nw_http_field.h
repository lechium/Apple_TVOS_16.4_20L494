//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_http_field : NSObject
{
    char *name;	// 8 = 0x8
    char *name_canonical;	// 16 = 0x10
    char *name_well_known;	// 24 = 0x18
    char *value;	// 32 = 0x20
    char *value_original;	// 40 = 0x28
    unsigned long long name_length;	// 48 = 0x30
    unsigned long long value_length;	// 56 = 0x38
    CDUnknownFunctionPointerType value_setter;	// 64 = 0x40
    CDUnknownFunctionPointerType value_deallocator;	// 72 = 0x48
    void *value_deallocator_context;	// 80 = 0x50
    int indexing_strategy;	// 88 = 0x58
    unsigned int name_is_canonical:1;	// 92 = 0x5c
}

- (id)description;	// IMP=0x00000000006cb4c0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006cb4b0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006cb450
- (void)dealloc;	// IMP=0x00000000006cb410
- (id)init;	// IMP=0x00000000006cb190

@end

