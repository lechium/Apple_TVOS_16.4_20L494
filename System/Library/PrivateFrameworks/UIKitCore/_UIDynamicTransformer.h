//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIBezierPath;

__attribute__((visibility("hidden")))
@interface _UIDynamicTransformer : NSObject
{
    struct CGPoint _center;	// 8 = 0x8
    CDUnknownBlockType _action;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000bf3f24
@property(nonatomic) struct CGAffineTransform transform;
@property(readonly, nonatomic) struct CGRect bounds;
@property(nonatomic) struct CGPoint center;
- (id)initWithActionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000bf3db7

// Remaining properties
@property(readonly, nonatomic) UIBezierPath *collisionBoundingPath;
@property(readonly, nonatomic) unsigned long long collisionBoundsType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

