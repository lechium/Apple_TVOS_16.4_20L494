//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface NIDeviceCapabilities : NSObject
{
    _Bool _supportsPreciseDistanceMeasurement;	// 8 = 0x8
    _Bool _supportsDirectionMeasurement;	// 9 = 0x9
    _Bool _supportsCameraAssistance;	// 10 = 0xa
    _Bool _supportsCoarseDistanceMeasurement;	// 11 = 0xb
    _Bool _supportsFineRanging;	// 12 = 0xc
    _Bool _supportsCoarseRanging;	// 13 = 0xd
    _Bool _supportsAoA;	// 14 = 0xe
    _Bool _supportsSyntheticAperture;	// 15 = 0xf
}

+ (id)new;	// IMP=0x001000000001918c
@property(readonly) _Bool supportsSyntheticAperture; // @synthesize supportsSyntheticAperture=_supportsSyntheticAperture;
@property(readonly) _Bool supportsAoA; // @synthesize supportsAoA=_supportsAoA;
@property(readonly) _Bool supportsCoarseRanging; // @synthesize supportsCoarseRanging=_supportsCoarseRanging;
@property(readonly) _Bool supportsFineRanging; // @synthesize supportsFineRanging=_supportsFineRanging;
@property(readonly, nonatomic) _Bool supportsCoarseDistanceMeasurement; // @synthesize supportsCoarseDistanceMeasurement=_supportsCoarseDistanceMeasurement;
@property(readonly, nonatomic) _Bool supportsCameraAssistance; // @synthesize supportsCameraAssistance=_supportsCameraAssistance;
@property(readonly, nonatomic) _Bool supportsDirectionMeasurement; // @synthesize supportsDirectionMeasurement=_supportsDirectionMeasurement;
@property(readonly, nonatomic) _Bool supportsPreciseDistanceMeasurement; // @synthesize supportsPreciseDistanceMeasurement=_supportsPreciseDistanceMeasurement;
- (id)init;	// IMP=0x0000000000019169
- (id)initWithFineRangingSupport:(_Bool)arg1 coarseRangingSupport:(_Bool)arg2 aoaSupport:(_Bool)arg3 syntheticApertureSupport:(_Bool)arg4;	// IMP=0x00000000000190fe
- (id)initWithFineRangingSupport:(_Bool)arg1 aoaSupport:(_Bool)arg2 syntheticApertureSupport:(_Bool)arg3;	// IMP=0x00000000000190e4

@end
