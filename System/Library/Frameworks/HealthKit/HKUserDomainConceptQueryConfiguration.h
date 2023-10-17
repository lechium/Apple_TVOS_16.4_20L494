//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKQueryServerConfiguration.h"

@class HKQueryAnchor, NSArray;

__attribute__((visibility("hidden")))
@interface HKUserDomainConceptQueryConfiguration : HKQueryServerConfiguration
{
    NSArray *_sortDescriptors;	// 8 = 0x8
    HKQueryAnchor *_anchor;	// 16 = 0x10
    unsigned long long _limit;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000c096d
- (void).cxx_destruct;	// IMP=0x00000000000c0bd0
@property(nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property(copy, nonatomic) HKQueryAnchor *anchor; // @synthesize anchor=_anchor;
@property(copy, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000c0aac
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000c0975
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c08a4

@end

