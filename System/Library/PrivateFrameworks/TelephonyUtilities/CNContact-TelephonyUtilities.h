//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNContact.h>

@class NSArray, NSPersonNameComponents, NSString, NSURL;

@interface CNContact (TelephonyUtilities)
+ (id)keysToFetchForFaceTime;	// IMP=0x0010000000022acf
+ (id)tu_contactHandlesForHandle:(id)arg1;	// IMP=0x00100000000d2da2
- (id)allTUHandles;	// IMP=0x001000000000d2b0
- (id)tuHandlesForEmailAddresses;	// IMP=0x001000000000d07f
- (id)tuHandlesForPhoneNumbers;	// IMP=0x001000000000cdda
- (id)tu_labeledValueForSocialProfileWithUsername:(id)arg1;	// IMP=0x001000000000cb81
- (id)tu_labeledValueForPhoneNumber:(id)arg1;	// IMP=0x001000000000c946
- (id)tu_labeledValueForHandle:(id)arg1;	// IMP=0x001000000000c74d
- (id)tu_labeledValueForEmailAddress:(id)arg1;	// IMP=0x001000000000c512
@property(readonly, copy, nonatomic) NSPersonNameComponents *personNameComponents;
@property(readonly, nonatomic) NSArray *emailAddressStrings;
@property(readonly, nonatomic) NSArray *phoneNumberStrings;
@property(readonly, nonatomic) NSURL *faceTimeQuicklookURL;
@property(readonly, nonatomic) NSString *anyDestinationID;
@property(readonly, nonatomic) NSArray *allIDSDestinations;
@property(readonly) NSArray *idsCanonicalDestinations;
@property(readonly) _Bool mostRecentCallWasMissed;
@property(readonly) long long mostRecentCallType;
@property(readonly) NSArray *handles;
@property(readonly) NSString *isoCountryCode;
@property(readonly) NSString *destinationId;
@property(readonly) NSString *backingContactIdentifier;
@property(readonly) NSString *backingContactId;
@property(readonly) CNContact *backingContact;
@property(readonly) NSString *callerId;
@property(readonly) NSString *displayName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

