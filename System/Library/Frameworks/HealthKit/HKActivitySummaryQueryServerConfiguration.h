//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKQueryServerConfiguration.h"

__attribute__((visibility("hidden")))
@interface HKActivitySummaryQueryServerConfiguration : HKQueryServerConfiguration
{
    _Bool _shouldIncludeActivitySummaryPrivateProperties;	// 8 = 0x8
    _Bool _shouldIncludeActivitySummaryStatistics;	// 9 = 0x9
    _Bool _orderByDateAscending;	// 10 = 0xa
    unsigned long long _limit;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000ed20f
@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property(nonatomic) _Bool orderByDateAscending; // @synthesize orderByDateAscending=_orderByDateAscending;
@property(nonatomic) _Bool shouldIncludeActivitySummaryStatistics; // @synthesize shouldIncludeActivitySummaryStatistics=_shouldIncludeActivitySummaryStatistics;
@property(nonatomic) _Bool shouldIncludeActivitySummaryPrivateProperties; // @synthesize shouldIncludeActivitySummaryPrivateProperties=_shouldIncludeActivitySummaryPrivateProperties;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ed2f2
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ed217
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ed166

@end

