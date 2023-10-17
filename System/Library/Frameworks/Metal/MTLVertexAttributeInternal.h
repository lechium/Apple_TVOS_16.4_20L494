//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLVertexAttribute.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MTLVertexAttributeInternal : MTLVertexAttribute
{
    unsigned char _flags;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    unsigned long long _attributeIndex;	// 24 = 0x18
    unsigned long long _attributeType;	// 32 = 0x20
}

- (unsigned long long)attributeType;	// IMP=0x00000000000b4252
- (unsigned long long)attributeIndex;	// IMP=0x00000000000b4241
- (id)name;	// IMP=0x00000000000b4230
- (id)description;	// IMP=0x00000000000b421c
- (id)formattedDescription:(unsigned long long)arg1;	// IMP=0x00000000000b4000
- (void)setAttributeType:(unsigned long long)arg1;	// IMP=0x00000000000b3fef
- (_Bool)isPatchControlPointData;	// IMP=0x00000000000b3fda
- (_Bool)isPatchData;	// IMP=0x00000000000b3fc6
- (_Bool)isActive;	// IMP=0x00000000000b3fb4
- (void)dealloc;	// IMP=0x00000000000b3f72
- (id)initWithName:(id)arg1 attributeIndex:(unsigned long long)arg2 attributeType:(unsigned long long)arg3 flags:(struct MTLAttributeFlags)arg4;	// IMP=0x00000000000b3eea

@end
