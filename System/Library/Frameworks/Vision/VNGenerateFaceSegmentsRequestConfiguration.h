//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VNGenerateFaceSegmentsRequestConfiguration
{
    float _faceBoundingBoxExpansionRatio;	// 8 = 0x8
}

+ (_Bool)expansionRatioWithinValidRange:(float)arg1;	// IMP=0x00400000001df3ab
+ (float)defaultFaceBoundingBoxExpansionRatio;	// IMP=0x00400000001df39d
+ (float)endRangeFaceBoundingBoxExpansionRatio;	// IMP=0x00400000001df38f
+ (float)beginRangeFaceBoundingBoxExpansionRatio;	// IMP=0x00400000001df381
@property(nonatomic) float faceBoundingBoxExpansionRatio;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001df2ba
- (id)initWithRequestClass:(Class)arg1;	// IMP=0x00000000001df227

@end

