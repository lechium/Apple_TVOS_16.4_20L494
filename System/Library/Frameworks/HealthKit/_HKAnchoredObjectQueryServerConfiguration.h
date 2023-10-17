//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKQueryServerConfiguration.h"

@class HKQueryAnchor, NSArray;

__attribute__((visibility("hidden")))
@interface _HKAnchoredObjectQueryServerConfiguration : HKQueryServerConfiguration
{
    _Bool _includeDeletedObjects;	// 8 = 0x8
    _Bool _includeAutomaticTimeZones;	// 9 = 0x9
    _Bool _includeContributorInformation;	// 10 = 0xa
    HKQueryAnchor *_anchor;	// 16 = 0x10
    unsigned long long _limit;	// 24 = 0x18
    double _collectionInterval;	// 32 = 0x20
    NSArray *_queryDescriptors;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000008bfd
- (void).cxx_destruct;	// IMP=0x00000000000179cb
@property(nonatomic) _Bool includeContributorInformation; // @synthesize includeContributorInformation=_includeContributorInformation;
@property(nonatomic) _Bool includeAutomaticTimeZones; // @synthesize includeAutomaticTimeZones=_includeAutomaticTimeZones;
@property(nonatomic) _Bool includeDeletedObjects; // @synthesize includeDeletedObjects=_includeDeletedObjects;
@property(copy, nonatomic) NSArray *queryDescriptors; // @synthesize queryDescriptors=_queryDescriptors;
@property(nonatomic) double collectionInterval; // @synthesize collectionInterval=_collectionInterval;
@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property(copy, nonatomic) HKQueryAnchor *anchor; // @synthesize anchor=_anchor;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e2d4d
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000281c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e2c5a

@end

