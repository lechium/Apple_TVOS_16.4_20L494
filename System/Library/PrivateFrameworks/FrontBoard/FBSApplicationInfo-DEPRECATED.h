//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/FBSApplicationInfo.h>

@interface FBSApplicationInfo (DEPRECATED)
- (long long)_mapSignatureStateFromTrustState:(unsigned long long)arg1;	// IMP=0x003000000004e74e
- (void)acceptApplicationSignatureIdentity;	// IMP=0x003000000004e647
- (id)_signatureValidationService;	// IMP=0x003000000004e52f
@property(readonly, nonatomic, getter=hasUniversalProvisioningProfile) _Bool universalProvisioningProfile;
@property(readonly, nonatomic, getter=hasFreeDeveloperProvisioningProfile) _Bool freeDeveloperProvisioningProfile;
@property(readonly, nonatomic) long long signatureState;
- (id)_initForProfileManagerTesting;	// IMP=0x003000000004e434
@end

