//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Accounts/ACAccountStore.h>

@interface ACAccountStore (RemoteManagement)
+ (id)rm_defaultStore;	// IMP=0x00600000000021aa
- (id)rm_remoteManagementAccountForProfileIdentifier:(id)arg1;	// IMP=0x0010000000002e14
- (id)rm_remoteManagementAccountForEnrollmentURL:(id)arg1;	// IMP=0x0010000000002c2c
- (id)rm_remoteManagementAccountForIdentifier:(id)arg1;	// IMP=0x0010000000002a44
- (id)rm_remoteManagementAccountForDSID:(id)arg1;	// IMP=0x001000000000285c
- (id)rm_remoteManagementAccountForAltDSID:(id)arg1;	// IMP=0x0010000000002674
- (id)_rm_AccountAssociatedWithRemoteManagementWithAccountTypeIdentifier:(id)arg1 altDSID:(id)arg2;	// IMP=0x0010000000002401
- (id)_rm_AccountAssociatedWithRemoteManagementWithAccountTypeIdentifier:(id)arg1;	// IMP=0x0010000000002334
- (id)rm_iTunesAccountForRemoteManagingAccountWithAltDSID:(id)arg1;	// IMP=0x0010000000002315
- (id)rm_iTunesAccountForRemoteManagingAccount;	// IMP=0x00100000000022f9
- (id)rm_iCloudAccountForRemoteManagingAccountWithAltDSID:(id)arg1;	// IMP=0x00100000000022da
- (id)rm_iCloudAccountForRemoteManagingAccount;	// IMP=0x00100000000022be
- (id)rm_RemoteManagementAccounts;	// IMP=0x001000000000225f
- (id)rm_RemoteManagementAccountType;	// IMP=0x0010000000002243
@end
