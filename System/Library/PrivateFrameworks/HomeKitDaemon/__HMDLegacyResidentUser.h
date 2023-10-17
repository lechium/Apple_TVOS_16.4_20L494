//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "HMDUser.h"

@class HMDResidentUser;

__attribute__((visibility("hidden")))
@interface __HMDLegacyResidentUser : HMDUser
{
    HMDResidentUser *_residentUser;	// 336 = 0x150
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0060000000a84e17
+ (void)initialize;	// IMP=0x0060000000a84dbb
- (void).cxx_destruct;	// IMP=0x0000000000a84da8
@property(readonly, nonatomic) HMDResidentUser *residentUser; // @synthesize residentUser=_residentUser;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000a84d25
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000a84d17
- (_Bool)isRemoteGateway;	// IMP=0x0000000000a84d0f
- (id)initWithResidentUser:(id)arg1;	// IMP=0x0000000000a84bdf

@end

