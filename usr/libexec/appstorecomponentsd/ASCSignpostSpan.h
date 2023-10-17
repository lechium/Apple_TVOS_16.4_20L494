//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSDate, NSDateInterval, NSMutableSet, NSSet;

@interface ASCSignpostSpan : NSObject
{
    unsigned long long _primaryTag;	// 8 = 0x8
    MISSING_TYPE *_mutableSupplementaryTags;	// 16 = 0x10
    NSDate *_startDate;	// 24 = 0x18
    NSDate *_endDate;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000019168
- (void).cxx_destruct;	// IMP=0x00200000000199b4
@property(copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) NSMutableSet *mutableSupplementaryTags; // @synthesize mutableSupplementaryTags=_mutableSupplementaryTags;
@property(readonly, nonatomic) unsigned long long primaryTag; // @synthesize primaryTag=_primaryTag;
- (id)description;	// IMP=0x0010000000019839
- (void)endEmitting;	// IMP=0x0010000000019729
- (void)beginEmitting;	// IMP=0x0010000000019668
- (void)addSupplementaryTag:(unsigned long long)arg1;	// IMP=0x00100000000195f2
@property(readonly, copy, nonatomic) NSDateInterval *dateRange;
@property(readonly, copy, nonatomic) NSSet *supplementaryTags;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000001933c
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000019170
- (id)init;	// IMP=0x00100000000190fd

@end
