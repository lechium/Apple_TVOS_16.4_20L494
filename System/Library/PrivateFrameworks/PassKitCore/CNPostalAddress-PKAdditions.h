//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNPostalAddress.h>

@interface CNPostalAddress (PKAdditions)
+ (id)_CNKeyFromABKey:(id)arg1;	// IMP=0x00600000005153b8
+ (id)_ABKeyFromCNKey:(id)arg1;	// IMP=0x006000000051525e
+ (id)postalAddressFromWebServiceDictionaryRepresentation:(id)arg1;	// IMP=0x0060000000514f42
+ (id)backwardsCompatiblePostalAddressDictionary:(id)arg1;	// IMP=0x0060000000514c87
- (id)_countryCodeForCountryName:(id)arg1;	// IMP=0x0010000000514a48
- (id)suggestedCountryCode;	// IMP=0x00100000005149e9
- (id)redactedPostalAddress;	// IMP=0x00100000005147d7
- (id)redactedStreetAddress;	// IMP=0x0010000000514783
- (id)webServiceDictionaryRepresentation;	// IMP=0x00100000005144e5
- (id)backwardsCompatibleDictionaryRepresentation;	// IMP=0x00100000005141d4
@end

