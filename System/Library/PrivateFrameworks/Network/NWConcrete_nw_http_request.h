//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NWConcrete_nw_http_field, NWConcrete_nw_http_fields;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_http_request : NSObject
{
    NWConcrete_nw_http_field *method;	// 8 = 0x8
    NWConcrete_nw_http_field *scheme;	// 16 = 0x10
    NWConcrete_nw_http_field *authority;	// 24 = 0x18
    NWConcrete_nw_http_field *path;	// 32 = 0x20
    NWConcrete_nw_http_fields *fields;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000006cdb00
- (id)description;	// IMP=0x00000000006cda70
- (void)dealloc;	// IMP=0x00000000006cd9e0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000006cd9d0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006cd970
- (id)init;	// IMP=0x00000000006cd6f0

@end

