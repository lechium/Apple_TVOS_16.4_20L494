//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIStatisticsDistribution
{
}

- (void)recordTimingForObject:(id)arg1;	// IMP=0x0000000001047897
- (void)cancelTimingForObject:(id)arg1;	// IMP=0x0000000001047880
- (void)startTimingForObject:(id)arg1;	// IMP=0x00000000010477f0
- (_Bool)isTimingForObject:(id)arg1;	// IMP=0x00000000010477bf
- (void)recordDistributionValue:(double)arg1;	// IMP=0x00000000010477ad
- (void)resetDistributionToValue:(double)arg1;	// IMP=0x000000000104779b
- (void)resetDistribution;	// IMP=0x0000000001047789

@end
