//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface TVHKMediaEntityPropertyDescriptorCollection : NSObject
{
    NSArray *_propertyDescriptors;	// 8 = 0x8
    NSDictionary *_propertyDescriptorByName;	// 16 = 0x10
}

+ (id)new;	// IMP=0x001000000002281d
- (void).cxx_destruct;	// IMP=0x0000000000022e10
@property(copy, nonatomic) NSDictionary *propertyDescriptorByName; // @synthesize propertyDescriptorByName=_propertyDescriptorByName;
@property(readonly, copy, nonatomic) NSArray *propertyDescriptors; // @synthesize propertyDescriptors=_propertyDescriptors;
- (id)description;	// IMP=0x0000000000022d51
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000022d36
- (id)deepCopy;	// IMP=0x0000000000022cfa
- (id)sortingPropertyDescriptorForName:(id)arg1;	// IMP=0x0000000000022c34
- (id)propertyDescriptorForName:(id)arg1;	// IMP=0x0000000000022bb1
- (void)setPropertyDescriptors:(id)arg1 copy:(_Bool)arg2;	// IMP=0x000000000002292e
- (id)initWithPropertyDescriptors:(id)arg1 copyPropertyDescriptors:(_Bool)arg2;	// IMP=0x00000000000228bb
- (id)init;	// IMP=0x000000000002284c

@end

