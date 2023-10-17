//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface TVHKDMAPEntityKind : NSObject
{
    NSArray *_attributes;	// 8 = 0x8
    NSDictionary *_attributesByCode;	// 16 = 0x10
    NSDictionary *_attributesByName;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000079920
@property(copy, nonatomic) NSDictionary *attributesByName; // @synthesize attributesByName=_attributesByName;
@property(copy, nonatomic) NSDictionary *attributesByCode; // @synthesize attributesByCode=_attributesByCode;
@property(copy, nonatomic) NSArray *attributes; // @synthesize attributes=_attributes;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000798b8
- (id)attributeForName:(id)arg1;	// IMP=0x0000000000079835
- (id)attributeForCode:(id)arg1;	// IMP=0x00000000000797b2
- (id)init;	// IMP=0x0000000000079341

@end

