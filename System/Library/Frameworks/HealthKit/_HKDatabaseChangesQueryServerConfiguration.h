//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HKQueryServerConfiguration.h"

@class HKQueryAnchor, NSSet;

__attribute__((visibility("hidden")))
@interface _HKDatabaseChangesQueryServerConfiguration : HKQueryServerConfiguration
{
    _Bool _includeChangeDetails;	// 8 = 0x8
    NSSet *_sampleTypes;	// 16 = 0x10
    HKQueryAnchor *_anchor;	// 24 = 0x18
    long long _changeDetailsQueryStrategy;	// 32 = 0x20
    long long _anchorStrategyChangeCountLimit;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000201ee0
- (void).cxx_destruct;	// IMP=0x0000000000202214
@property(nonatomic) long long anchorStrategyChangeCountLimit; // @synthesize anchorStrategyChangeCountLimit=_anchorStrategyChangeCountLimit;
@property(nonatomic) long long changeDetailsQueryStrategy; // @synthesize changeDetailsQueryStrategy=_changeDetailsQueryStrategy;
@property(nonatomic) _Bool includeChangeDetails; // @synthesize includeChangeDetails=_includeChangeDetails;
@property(copy, nonatomic) HKQueryAnchor *anchor; // @synthesize anchor=_anchor;
@property(copy, nonatomic) NSSet *sampleTypes; // @synthesize sampleTypes=_sampleTypes;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000202070
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000201ee8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000201e21

@end

