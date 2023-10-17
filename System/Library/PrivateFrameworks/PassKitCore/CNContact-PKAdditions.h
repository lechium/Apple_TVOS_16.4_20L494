//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNContact.h>

@class NSString;

@interface CNContact (PKAdditions)
+ (id)pk_predicateForContactsMatchingPhoneNumber:(id)arg1;	// IMP=0x002000000000fb13
+ (id)pk_predicateForContactsMatchingEmailAddress:(id)arg1;	// IMP=0x002000000000fafa
+ (id)pkContactWithNameComponents:(id)arg1 postalAddresses:(id)arg2 emailAddresses:(id)arg3 phoneNumbers:(id)arg4;	// IMP=0x002000000000d27c
+ (id)pkContactWithNameFromContact:(id)arg1 labeledValue:(id)arg2 property:(id)arg3;	// IMP=0x002000000000d14a
+ (id)pkContactWithNameComponents:(id)arg1 labeledValues:(id)arg2;	// IMP=0x002000000000cf67
+ (id)contactWithPkDictionary:(id)arg1;	// IMP=0x002000000000c47d
+ (id)pkPassbookRequiredKeys;	// IMP=0x002000000000c3b1
- (_Bool)representsContact:(id)arg1 forContactKeys:(id)arg2;	// IMP=0x001000000000fb2c
- (id)pkDeconstructContactUsingKey:(id)arg1 substring:(id)arg2;	// IMP=0x001000000000f38c
- (id)pkDeconstructContactUsingKey:(id)arg1;	// IMP=0x001000000000f111
- (id)pk_displayName;	// IMP=0x001000000000f07f
- (id)pkContactWithCleanedUpCountryCode;	// IMP=0x001000000000ee0d
- (id)contactWithCleanedUpDistrict;	// IMP=0x001000000000ecd8
- (id)sanitizedContact;	// IMP=0x001000000000e715
- (id)nameComponents;	// IMP=0x001000000000e34e
- (id)_phoneticNameFromComponents:(id)arg1 style:(long long)arg2;	// IMP=0x001000000000e243
- (id)_fullNameFromComponents:(id)arg1 style:(long long)arg2;	// IMP=0x001000000000e170
- (id)pkFullAndPhoneticName;	// IMP=0x001000000000e02e
- (id)pkPhoneticName;	// IMP=0x001000000000dfca
- (id)pkFullName;	// IMP=0x001000000000df66
- (id)pkFullyQualifiedName;	// IMP=0x001000000000df02
@property(nonatomic) unsigned long long formattingConstrained;
@property(copy, nonatomic) NSString *valueSource;
@property(nonatomic) _Bool recentFromContactInformation;
- (_Bool)isSubsetOfMeCard;	// IMP=0x001000000000d839
@property(nonatomic) unsigned long long contactSource;
- (id)recentContact;	// IMP=0x001000000000d75f
- (void)setRecentContact:(id)arg1;	// IMP=0x001000000000d749
- (id)pkSingleLineFormattedContactAddressIncludingCountryName:(_Bool)arg1;	// IMP=0x001000000000d63b
- (id)pkSingleLineFormattedContactAddress;	// IMP=0x001000000000d624
- (id)pkFormattedContactAddressIncludingPhoneticName:(_Bool)arg1 showName:(_Bool)arg2;	// IMP=0x001000000000d3cd
- (id)pkFormattedContactAddressIncludingPhoneticName:(_Bool)arg1;	// IMP=0x001000000000d3b6
- (id)pkFormattedContactAddressWithoutName;	// IMP=0x001000000000d3a0
- (id)pkFormattedContactAddress;	// IMP=0x001000000000d38c
- (void)pkAddLabeledValues:(id)arg1 withProperty:(id)arg2;	// IMP=0x001000000000d26a
- (id)pkDictionaryForProperty:(id)arg1;	// IMP=0x001000000000c98f
@end

