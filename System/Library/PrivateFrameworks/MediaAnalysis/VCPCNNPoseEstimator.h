//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPCNNPoseEstimator : NSObject
{
}

+ (id)estimator;	// IMP=0x008000000019aa10
- (int)detectPoseForFace:(struct CGRect)arg1 inBuffer:(struct __CVBuffer *)arg2 yaw:(long long *)arg3;	// IMP=0x000000000019aa95
- (int)computePoseScore:(float *)arg1;	// IMP=0x000000000019aa8a
- (float *)getInputBuffer;	// IMP=0x000000000019aa82

@end

