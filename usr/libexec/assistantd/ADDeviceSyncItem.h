//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSUUID;

@interface ADDeviceSyncItem : NSObject
{
    NSUUID *_UUID;	// 8 = 0x8
    NSDictionary *_properties;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000002683d9
+ (id)newWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x0010000000268066
- (void).cxx_destruct;	// IMP=0x0010000000268633
@property(readonly, copy, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(readonly, copy, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000002685b1
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000002683e1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000002683ce
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000002682c5
- (unsigned long long)hash;	// IMP=0x0010000000268286
- (id)_descriptionWithIndent:(unsigned long long)arg1;	// IMP=0x00100000002681fc
- (id)description;	// IMP=0x00100000002681e8
- (id)initWithUUID:(id)arg1 properties:(id)arg2;	// IMP=0x00100000002680c7
- (id)init;	// IMP=0x00100000002680b3
- (id)initWithBuilder:(CDUnknownBlockType)arg1;	// IMP=0x0010000000267f28
- (id)mutatedCopyWithMutator:(CDUnknownBlockType)arg1;	// IMP=0x00100000002687b4

@end

