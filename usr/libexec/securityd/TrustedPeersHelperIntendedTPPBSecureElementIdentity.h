//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TPPBSecureElementIdentity;

@interface TrustedPeersHelperIntendedTPPBSecureElementIdentity : NSObject
{
    TPPBSecureElementIdentity *_secureElementIdentity;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000001d07ae
+ (id)intendedEmptyIdentity;	// IMP=0x00100000001d0783
- (void).cxx_destruct;	// IMP=0x00200000001d0773
@property(retain) TPPBSecureElementIdentity *secureElementIdentity; // @synthesize secureElementIdentity=_secureElementIdentity;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00100000001d06d7
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000001d0646
- (id)description;	// IMP=0x00100000001d05da
- (id)initWithSecureElementIdentity:(id)arg1;	// IMP=0x00100000001d056f

@end

