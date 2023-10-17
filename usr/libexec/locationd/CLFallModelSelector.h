//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface CLFallModelSelector : NSObject
{
    NSMutableDictionary *fSelectionFeatures;	// 8 = 0x8
    struct FallModel fTripFallModel;	// 16 = 0x10
    struct FallModel fSlipFallModel;	// 812 = 0x32c
    struct FallModel fOtherFallModel;	// 1608 = 0x648
    struct FallThresholds fThresholds;	// 2404 = 0x964
}

- (id).cxx_construct;	// IMP=0x0020000000155a32
- (_Bool)fillFallThresholds:(struct FallThresholds *)arg1;	// IMP=0x0010000000155a04
- (_Bool)fillOtherFallModel:(struct FallModel *)arg1;	// IMP=0x00100000001557d5
- (_Bool)fillSlipFallModel:(struct FallModel *)arg1;	// IMP=0x00100000001555a6
- (_Bool)fillTripFallModel:(struct FallModel *)arg1;	// IMP=0x001000000015538f
- (_Bool)selectModels;	// IMP=0x00100000001535e4
- (_Bool)setSelectionFeatureValue:(id)arg1 value:(id)arg2;	// IMP=0x00100000001535c2
- (void)dealloc;	// IMP=0x0010000000153587
- (id)init;	// IMP=0x001000000015353e

@end
