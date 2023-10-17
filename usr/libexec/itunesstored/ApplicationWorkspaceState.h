//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSSQLiteEntity.h>

@interface ApplicationWorkspaceState : SSSQLiteEntity
{
}

+ (_Bool)_incompleteNotification:(id)arg1 forDownload:(long long)arg2 bundleIdentifier:(id)arg3;	// IMP=0x004000000004aab2
+ (_Bool)_completeNotification:(id)arg1 bundleIdentifier:(id)arg2;	// IMP=0x001000000004a942
+ (_Bool)incompleteNotificationForInstallingDownload:(long long)arg1 bundleIdentifier:(id)arg2;	// IMP=0x001000000004a920
+ (_Bool)incompleteNotificationForFailedDownload:(long long)arg1 bundleIdentifier:(id)arg2;	// IMP=0x001000000004a8fe
+ (_Bool)incompleteNotificationForCanceledDownload:(long long)arg1 bundleIdentifier:(id)arg2;	// IMP=0x001000000004a8dc
+ (_Bool)deleteIncompleteNotification:(id)arg1 forBundleIdentifier:(id)arg2;	// IMP=0x001000000004a8ca
+ (_Bool)completeNotificationForInstallingBundleIdentifier:(id)arg1;	// IMP=0x001000000004a8ab
+ (_Bool)completeNotificationForFailedBundleIdentifier:(id)arg1;	// IMP=0x001000000004a88c
+ (_Bool)completeNotificationForCanceledBundleIdentifier:(id)arg1;	// IMP=0x001000000004a86d
+ (id)databaseTable;	// IMP=0x001000000004a860

@end
