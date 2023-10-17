//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCNPhysicsField.h"

__attribute__((visibility("hidden")))
@interface SCNPhysicsNoiseField : SCNPhysicsField
{
    double _smoothness;	// 128 = 0x80
    double _animationSpeed;	// 136 = 0x88
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000053044
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000052f6a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000052ee4
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x0000000000052e1c
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x0000000000052d6d
- (_Bool)supportsDirection;	// IMP=0x0000000000052d65
- (_Bool)supportsOffset;	// IMP=0x0000000000052d5d
@property(nonatomic) double animationSpeed;
@property(nonatomic) double smoothness;
- (struct c3dPhysicsField *)_createField;	// IMP=0x0000000000052b5d
- (id)init;	// IMP=0x0000000000052b05

@end

