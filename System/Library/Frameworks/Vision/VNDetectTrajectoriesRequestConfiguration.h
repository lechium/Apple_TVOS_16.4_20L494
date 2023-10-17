//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNDetectTrajectoriesRequestConfiguration
{
    float _objectMinimumNormalizedRadius;	// 8 = 0x8
    float _objectMaximumNormalizedRadius;	// 12 = 0xc
    long long _trajectoryLength;	// 16 = 0x10
    CDStruct_1b6d18a9 _targetFrameTime;	// 24 = 0x18
}

@property(nonatomic) CDStruct_1b6d18a9 targetFrameTime; // @synthesize targetFrameTime=_targetFrameTime;
@property(nonatomic) float objectMaximumNormalizedRadius; // @synthesize objectMaximumNormalizedRadius=_objectMaximumNormalizedRadius;
@property(nonatomic) float objectMinimumNormalizedRadius; // @synthesize objectMinimumNormalizedRadius=_objectMinimumNormalizedRadius;
@property(nonatomic) long long trajectoryLength; // @synthesize trajectoryLength=_trajectoryLength;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005d1b4
- (id)initWithRequestClass:(Class)arg1;	// IMP=0x000000000005d164

@end

