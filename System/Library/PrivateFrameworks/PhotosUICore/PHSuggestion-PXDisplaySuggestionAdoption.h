//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHSuggestion.h>

@class NSDate, NSDictionary, NSString;

@interface PHSuggestion (PXDisplaySuggestionAdoption)
+ (id)px_keyAssetFilteringPredicate;	// IMP=0x001000000071555a
- (id)fetchKeyAssets;	// IMP=0x0010000000534c07

// Remaining properties
@property(readonly, nonatomic) NSDictionary *actionProperties;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *localIdentifier;
@property(readonly, nonatomic) NSString *localizedSubtitle;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) NSDate *startDate;
@property(readonly, nonatomic) unsigned short state;
@property(readonly, nonatomic) unsigned short subtype;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) unsigned short type;
@end
