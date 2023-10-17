//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SCNAction.h"

__attribute__((visibility("hidden")))
@interface SCNActionMove : SCNAction
{
    struct SCNCActionMove *_mycaction;	// 8 = 0x8
}

+ (id)moveToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;	// IMP=0x0060000000280815
+ (id)moveTo:(struct SCNVector3)arg1 duration:(double)arg2;	// IMP=0x00600000002807e0
+ (id)moveByX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;	// IMP=0x0060000000280709
+ (id)moveBy:(struct SCNVector3)arg1 duration:(double)arg2;	// IMP=0x00600000002806d4
+ (_Bool)supportsSecureCoding;	// IMP=0x00600000002806cc
- (id)parameters;	// IMP=0x0000000000280a58
- (_Bool)isRelative;	// IMP=0x0000000000280a41
- (id)reversedAction;	// IMP=0x0000000000280984
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002808da
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002803fb
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000280047
- (id)init;	// IMP=0x000000000027ff76

@end

