//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKQueryServerConfiguration.h"

@class NSArray, NSDate, NSDateComponents;

__attribute__((visibility("hidden")))
@interface HKValueHistogramCollectionQueryServerConfiguration : HKQueryServerConfiguration
{
    NSDate *_anchorDate;	// 8 = 0x8
    NSDateComponents *_intervalComponents;	// 16 = 0x10
    NSArray *_quantityRanges;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000001f764d
- (void).cxx_destruct;	// IMP=0x00000000001f78c9
@property(copy, nonatomic) NSArray *quantityRanges; // @synthesize quantityRanges=_quantityRanges;
@property(copy, nonatomic) NSDateComponents *intervalComponents; // @synthesize intervalComponents=_intervalComponents;
@property(copy, nonatomic) NSDate *anchorDate; // @synthesize anchorDate=_anchorDate;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001f77a9
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000001f7655
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001f75d9

@end
