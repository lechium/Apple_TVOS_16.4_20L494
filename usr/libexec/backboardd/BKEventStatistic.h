//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface BKEventStatistic : NSObject
{
    _Bool _automaticResetDisabled;	// 8 = 0x8
    _Bool _needsLogging;	// 9 = 0x9
    NSString *_label;	// 16 = 0x10
    NSArray *_associatedStatistics;	// 24 = 0x18
}

+ (id)statisticWithLabel:(id)arg1;	// IMP=0x0020000000048b9d
- (void).cxx_destruct;	// IMP=0x0020000000048b44
@property(nonatomic) _Bool needsLogging; // @synthesize needsLogging=_needsLogging;
@property(nonatomic) _Bool automaticResetDisabled; // @synthesize automaticResetDisabled=_automaticResetDisabled;
@property(copy, nonatomic) NSArray *associatedStatistics; // @synthesize associatedStatistics=_associatedStatistics;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000048aa4
- (void)reset;	// IMP=0x0010000000048969
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x0010000000048864

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
