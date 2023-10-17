//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MTLArgumentDescriptor.h"

__attribute__((visibility("hidden")))
@interface MTLIndirectArgumentDescriptor : MTLArgumentDescriptor
{
}

+ (id)indirectArgumentDescriptor;	// IMP=0x0060000000070d89
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0060000000070d16
+ (id)alloc;	// IMP=0x0060000000070d0c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000070d81

// Remaining properties
@property(nonatomic) unsigned long long access; // @dynamic access;
@property(nonatomic) unsigned long long arrayLength; // @dynamic arrayLength;
@property(nonatomic) unsigned long long constantBlockAlignment; // @dynamic constantBlockAlignment;
@property(nonatomic) unsigned long long dataType; // @dynamic dataType;
@property(nonatomic) unsigned long long index; // @dynamic index;
@property(nonatomic) unsigned long long textureType; // @dynamic textureType;

@end
