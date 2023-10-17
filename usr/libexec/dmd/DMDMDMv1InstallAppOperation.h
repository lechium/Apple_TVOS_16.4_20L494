//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DMDMDMv1InstallAppOperation
{
}

+ (id)whitelistedClassesForRequest;	// IMP=0x0010000000055018
+ (id)descriptionForChangeType:(long long)arg1;	// IMP=0x0010000000056514
- (void)_setTapToPayScreenLock:(id)arg1;	// IMP=0x00200000000599bf
- (void)_setRemovability:(id)arg1;	// IMP=0x0010000000059853
- (void)_resetTapToPayScreenLock;	// IMP=0x0010000000059759
- (void)_resetRemovabilityWithBundleIdentifier:(id)arg1;	// IMP=0x001000000005967d
- (void)_endOperationWithBundleIdentifier:(id)arg1;	// IMP=0x00100000000595c7
- (_Bool)_canManageBundleIdentifier:(id)arg1;	// IMP=0x0010000000059563
- (void)_updateManagementInfoWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000592f9
- (void)_setUnusedRedemptionCode:(id)arg1;	// IMP=0x001000000005918a
- (void)_setRedemptionCode:(id)arg1;	// IMP=0x001000000005901b
- (void)_setState:(unsigned long long)arg1;	// IMP=0x0010000000058efd
- (void)_showInstallationFailurePromptIfNeeded;	// IMP=0x0010000000058c21
- (void)_showStorePromptToSignInAndInstallAppForRequest:(id)arg1;	// IMP=0x0010000000058946
- (void)_promptToSignInAndInstallAppForRequest:(id)arg1;	// IMP=0x00100000000585d4
- (void)_promptIfNeededWithMessageFormat:(id)arg1 success:(CDUnknownBlockType)arg2;	// IMP=0x0010000000057e59
- (void)_applyManagementPiecesForRequest:(id)arg1;	// IMP=0x0010000000057cb3
- (void)_downloadStoreAppForRequest:(id)arg1 type:(long long)arg2;	// IMP=0x00100000000572c0
- (void)_purchaseFreeAppForRequest:(id)arg1;	// IMP=0x00100000000572a9
- (void)_redownloadUserAppForRequest:(id)arg1;	// IMP=0x0010000000057292
- (void)_redownloadDeviceAppForRequest:(id)arg1;	// IMP=0x001000000005727b
- (void)_attemptSINFSwapForRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000056ff2
- (void)_installStoreAppForRequest:(id)arg1;	// IMP=0x001000000005655c
- (void)_installSystemAppWithBundleIdentifier:(id)arg1;	// IMP=0x001000000005627a
- (void)_installEnterpriseAppForRequest:(id)arg1;	// IMP=0x001000000005596a
- (void)_redeemAppWithRedemptionCode:(id)arg1;	// IMP=0x00100000000555d9
- (id)_getRequiredAppIDFromDisk;	// IMP=0x001000000005551e
- (id)_storeAppFormat;	// IMP=0x0010000000055464
- (void)installAppForRequest:(id)arg1;	// IMP=0x001000000005510c
- (void)endOperationWithError:(id)arg1;	// IMP=0x00100000000550ab
- (void)endOperationWithResultObject:(id)arg1;	// IMP=0x001000000005504a

@end
