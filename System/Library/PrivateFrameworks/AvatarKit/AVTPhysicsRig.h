//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, SCNNode, SCNPhysicsBody, SCNPhysicsConeTwistJoint;

__attribute__((visibility("hidden")))
@interface AVTPhysicsRig : NSObject
{
    float _coneConstraintLength;	// 8 = 0x8
    float _coneConstraintSinusAngularLimit;	// 12 = 0xc
    SCNNode *_rig;	// 16 = 0x10
    SCNNode *_chainRoot;	// 24 = 0x18
    SCNPhysicsBody *_physicsBody;	// 32 = 0x20
    SCNPhysicsConeTwistJoint *_physicsBehavior;	// 40 = 0x28
    double _downForceFactor;	// 48 = 0x30
    MISSING_TYPE *_restPosition_chainRoot;	// 64 = 0x40
    MISSING_TYPE *_restGravityVector_chainRoot;	// 80 = 0x50
    CDStruct_8e0628e6 _coneConstraintBasis_chainParent;	// 96 = 0x60
    CDStruct_14d5dc5e _coneConstraintAnchorB;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x000000000000b548

@end

