//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, SCNNode;

__attribute__((visibility("hidden")))
@interface AVTPhysicalizedSkeletonDescriptor : NSObject
{
    float _simulationFactor;	// 8 = 0x8
    SCNNode *_referenceNode;	// 16 = 0x10
    SCNNode *_drivingNode;	// 24 = 0x18
    SCNNode *_rootJoint;	// 32 = 0x20
    NSArray *_targetNodes;	// 40 = 0x28
    unsigned long long _side;	// 48 = 0x30
    MISSING_TYPE *_upDownRotation;	// 64 = 0x40
    MISSING_TYPE *_leftRightRotation;	// 80 = 0x50
    MISSING_TYPE *_forwardBackRotation;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000003dfbb

@end

