//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface VariantDescriptor : NSObject
{
    NSArray *_components;	// 8 = 0x8
    _Bool _universal;	// 16 = 0x10
    long long _version;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000007f91e
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000007f76e
- (unsigned long long)hash;	// IMP=0x001000000007f749
- (id)description;	// IMP=0x001000000007f6e0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000007f6d5

@end

