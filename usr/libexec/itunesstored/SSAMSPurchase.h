//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSPurchase.h>

@class NSNumber, NSString;

@interface SSAMSPurchase : AMSPurchase
{
    _Bool _preauthenticated;	// 8 = 0x8
    NSNumber *_accountIdentifier;	// 16 = 0x10
    NSString *_mediaType;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000017706c
- (void).cxx_destruct;	// IMP=0x002000000017739c
@property(nonatomic, getter=isPreauthenticated) _Bool preauthenticated; // @synthesize preauthenticated=_preauthenticated;
@property(copy, nonatomic) NSString *mediaType; // @synthesize mediaType=_mediaType;
@property(copy, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (_Bool)isEqualToPurchase:(id)arg1;	// IMP=0x00100000001771a2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000177136
- (unsigned long long)hash;	// IMP=0x0010000000177074
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000176f5f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000176e67

@end

