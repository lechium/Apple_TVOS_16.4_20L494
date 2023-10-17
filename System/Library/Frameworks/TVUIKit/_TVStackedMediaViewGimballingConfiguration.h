//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _TVStackedMediaViewGimballingConfiguration : NSObject
{
    double _peakCount;	// 8 = 0x8
    double _min;	// 16 = 0x10
    double _max;	// 24 = 0x18
    double _curve;	// 32 = 0x20
}

+ (id)defaultConfiguration;	// IMP=0x0060000000019548
+ (id)configurationWithPeakCount:(double)arg1 min:(double)arg2 max:(double)arg3 curve:(double)arg4;	// IMP=0x00600000000194bb
@property(nonatomic) double curve; // @synthesize curve=_curve;
@property(nonatomic) double max; // @synthesize max=_max;
@property(nonatomic) double min; // @synthesize min=_min;
@property(nonatomic) double peakCount; // @synthesize peakCount=_peakCount;
- (id)description;	// IMP=0x0000000000019668
- (double)gimballingAmountForLayerIndex:(long long)arg1 layerCount:(long long)arg2;	// IMP=0x0000000000019619
- (double)maxGimballingAmountForLayerCount:(long long)arg1;	// IMP=0x000000000001957a

@end

