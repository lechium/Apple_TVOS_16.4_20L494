//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIViewCubicTimingFunction : NSObject
{
    struct CGPoint _point1;	// 8 = 0x8
    struct CGPoint _point2;	// 24 = 0x18
}

- (id)description;	// IMP=0x0000000000093f62
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000093e3f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000093db6
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000093cc4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000093c6b
- (id)_mediaTimingFunction;	// IMP=0x0000000000093c3b
@property(readonly, nonatomic) struct CGPoint controlPoint2;
@property(readonly, nonatomic) struct CGPoint controlPoint1;
- (id)initWithControlPoint1:(struct CGPoint)arg1 controlPoint2:(struct CGPoint)arg2;	// IMP=0x0000000000093bb0
- (id)init;	// IMP=0x0000000000093b24

@end

