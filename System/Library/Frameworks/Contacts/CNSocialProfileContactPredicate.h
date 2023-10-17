//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class CNSocialProfile;

__attribute__((visibility("hidden")))
@interface CNSocialProfileContactPredicate : CNPredicate
{
    CNSocialProfile *_socialProfile;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000003a022
- (void).cxx_destruct;	// IMP=0x000000000003a37a
@property(readonly, copy, nonatomic) CNSocialProfile *socialProfile; // @synthesize socialProfile=_socialProfile;
- (unsigned long long)hash;	// IMP=0x000000000003a2b4
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003a17b
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000003a0fe
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000003a02a
- (id)description;	// IMP=0x0000000000039f33
- (id)initWithSocialProfile:(id)arg1;	// IMP=0x0000000000039ea2

@end
