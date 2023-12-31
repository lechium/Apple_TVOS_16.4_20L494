//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNContact.h>

@class NSArray, NSData, NSString;

@interface CNContact (UIAdditions)
+ (id)contactWithStateRestorationCoder:(id)arg1 store:(id)arg2 keys:(id)arg3;	// IMP=0x0020000000082093
+ (id)multiValuePropertiesSupportingPredicateValidation;	// IMP=0x0020000000081ae3
+ (id)descriptorForAllUIKeys;	// IMP=0x0020000000081786
+ (_Bool)settableMeCardEnabled;	// IMP=0x002000000008171b
+ (_Bool)quickActionsEnabled;	// IMP=0x00200000000816b0
+ (_Bool)suggestionsShownInEditMode;	// IMP=0x0020000000081645
+ (_Bool)suggestionsEnabled;	// IMP=0x00200000000815da
@property(readonly, nonatomic) NSData *vCardRepresentation;
- (id)validPropertiesByEvaluatingPredicate:(id)arg1 onMultiValueProperties:(id)arg2;	// IMP=0x0010000000081c02
@property(readonly, nonatomic) NSArray *birthdays;
@property(readonly, nonatomic) NSString *personName;
@property(readonly, nonatomic) _Bool supportsInstantMessageService;
@property(readonly, nonatomic) _Bool hasNonPersistedData;
@property(readonly, nonatomic, getter=isUnknown) _Bool unknown;
@end

