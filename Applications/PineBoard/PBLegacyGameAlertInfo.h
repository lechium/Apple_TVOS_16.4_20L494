//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;

@interface PBLegacyGameAlertInfo : NSObject
{
    NSSet *_userProfileIdentifiers;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000012570d
- (void).cxx_destruct;	// IMP=0x002000000012571f
@property(readonly, nonatomic) NSSet *userProfileIdentifiers; // @synthesize userProfileIdentifiers=_userProfileIdentifiers;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000125639
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000012549f
- (unsigned long long)hash;	// IMP=0x001000000012542f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000125315
- (id)initWithUserProfileIdentifiers:(id)arg1;	// IMP=0x001000000012521d

@end
