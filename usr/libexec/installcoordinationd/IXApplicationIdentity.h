//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MobileInstallation/MIAppIdentity.h>

@class NSString;

@interface IXApplicationIdentity : MIAppIdentity
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0020000000008a90
+ (id)identitiesForBundleIdentifiers:(id)arg1;	// IMP=0x00100000000085cd
@property(readonly, nonatomic) MIAppIdentity *miAppIdentity;
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000008cdc
- (id)description;	// IMP=0x0010000000008c69
- (id)possibleSerializationsForPlistKey;	// IMP=0x0010000000008b77
- (id)canonicalSerializationForPlistKey;	// IMP=0x0010000000008b0b
@property(readonly, nonatomic) NSString *uniqueIdentifier;
- (id)initWithPlistKeySerialization:(id)arg1;	// IMP=0x001000000000882b
- (id)initUsingPersonaFromCurrentThreadAndBundleIdentifier:(id)arg1;	// IMP=0x0010000000008812
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x00100000000087f9
- (id)initWithBundleIdentifier:(id)arg1 personaUniqueString:(id)arg2;	// IMP=0x001000000000879f

@end

