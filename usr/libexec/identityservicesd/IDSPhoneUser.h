//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IDSPhoneUser : NSObject
{
    _Bool _isDefaultUser;	// 8 = 0x8
    NSString *_phoneNumber;	// 16 = 0x10
    NSString *_phoneBookNumber;	// 24 = 0x18
    NSString *_labelID;	// 32 = 0x20
    NSString *_countryCode;	// 40 = 0x28
    NSString *_networkCode;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000002a0f60
- (void).cxx_destruct;	// IMP=0x00200000002a1780
@property(retain, nonatomic) NSString *networkCode; // @synthesize networkCode=_networkCode;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(nonatomic) _Bool isDefaultUser; // @synthesize isDefaultUser=_isDefaultUser;
@property(readonly, nonatomic) NSString *labelID; // @synthesize labelID=_labelID;
@property(retain, nonatomic) NSString *phoneBookNumber; // @synthesize phoneBookNumber=_phoneBookNumber;
@property(retain, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000002a13a0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000002a1290
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000002a0f80
- (_Bool)differsFromPhoneNumber:(id)arg1;	// IMP=0x00100000002a0cc0
- (_Bool)isIdenticalToUser:(id)arg1;	// IMP=0x00100000002a0a80
- (_Bool)isEqualToUser:(id)arg1;	// IMP=0x00100000002a0a20
- (_Bool)isEqualToPhoneUser:(id)arg1;	// IMP=0x00100000002a0650
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000002a05b0
@property(readonly) unsigned long long hash;
- (_Bool)shouldReplace:(id)arg1;	// IMP=0x00100000002a03f0
- (id)storageIdentifier;	// IMP=0x00100000002a03c0
- (id)unprefixedIdentifier;	// IMP=0x00100000002a0310
- (id)realmPrefixedIdentifier;	// IMP=0x00100000002a01a0
- (long long)realm;	// IMP=0x00100000002a0190
- (id)uniqueIdentifier;	// IMP=0x00100000002a0160
- (id)phoneUserWithUpdatedDefaultUser:(_Bool)arg1 countryCode:(id)arg2 networkCode:(id)arg3;	// IMP=0x00100000002a0050
- (id)phoneUserWithUpdatedPhoneNumber:(id)arg1;	// IMP=0x001000000029ffa0
- (id)phoneUserWithUpdatedPhoneNumber:(id)arg1 phoneBookNumber:(id)arg2;	// IMP=0x001000000029feb0
- (id)initWithLabelID:(id)arg1 phoneBookNumber:(id)arg2 isDefaultUser:(_Bool)arg3 countryCode:(id)arg4 networkCode:(id)arg5;	// IMP=0x001000000029fd30
- (id)initWithLabelID:(id)arg1 phoneBookNumber:(id)arg2;	// IMP=0x001000000029fc40
- (id)initWithLabelID:(id)arg1;	// IMP=0x001000000029fb80

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

