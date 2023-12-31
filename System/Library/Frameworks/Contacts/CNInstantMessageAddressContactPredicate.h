//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNPredicate.h"

@class CNInstantMessageAddress;

__attribute__((visibility("hidden")))
@interface CNInstantMessageAddressContactPredicate : CNPredicate
{
    CNInstantMessageAddress *_imAddress;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000000e36a0
- (void).cxx_destruct;	// IMP=0x00000000000e380a
@property(readonly, copy, nonatomic) CNInstantMessageAddress *imAddress; // @synthesize imAddress=_imAddress;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e377c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e36a8
- (id)description;	// IMP=0x00000000000e35b1
- (id)initWithInstantMessageAddress:(id)arg1;	// IMP=0x00000000000e3520

@end

