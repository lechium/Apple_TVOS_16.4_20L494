//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ShareSheet/SDXPCDaemonProtocol-Protocol.h>

@class CKContainerSetupInfo, CKShare, NSArray, NSDictionary, NSNumber, NSString, NSURL, NSUUID, SFCollaborationCloudSharingRequest, UISUIActivityViewControllerConfiguration, _UIActivityDiscoveryContext;

@protocol SDShareSheetSlotManagerProtocol <SDXPCDaemonProtocol>
- (void)shareStatusForFileURL:(NSURL *)arg1 completionHandler:(void (^)(long long, NSError *))arg2;
- (void)isShareOwnerOrAdminForFileURL:(NSURL *)arg1 completionHandler:(void (^)(_Bool, _Bool))arg2;
- (void)requestAddParticipantsAllowedForURL:(NSURL *)arg1 share:(CKShare *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)deleteSharingURL:(NSURL *)arg1 containerSetupInfo:(CKContainerSetupInfo *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)saveCollaborativeMode:(NSNumber *)arg1 forContentIdentifier:(NSString *)arg2;
- (void)requestCollaborativeModeForContentIdentifier:(NSString *)arg1 completionHandler:(void (^)(NSNumber *))arg2;
- (void)requestSharedURLForFileOrFolderURL:(NSURL *)arg1 completionHandler:(void (^)(NSURL *, NSError *))arg2;
- (void)requestDefaultShareModeCollaborationForURL:(NSURL *)arg1 completionHandler:(void (^)(_Bool, NSError *))arg2;
- (void)createSharingURLForCollaborationRequest:(SFCollaborationCloudSharingRequest *)arg1 completionHandler:(void (^)(SFCollaborationCloudSharingResult *))arg2;
- (void)activityViewControllerPerformEditActionsWithSessionID:(NSString *)arg1;
- (void)activityViewControllerWillEnterForegroundWithSessionID:(NSString *)arg1;
- (void)activityViewControllerDidEnterBackgroundWithSessionID:(NSString *)arg1;
- (void)activityViewControllerPerformedActivityWithSessionID:(NSString *)arg1 presentationMs:(unsigned long long)arg2 totalShareTimeMs:(unsigned long long)arg3 activityType:(NSString *)arg4 success:(_Bool)arg5;
- (void)activityViewControllerWithSessionID:(NSString *)arg1 updatedFavoritesProxies:(NSArray *)arg2 activityCategory:(long long)arg3;
- (void)activityViewControllerWithSessionID:(NSString *)arg1 selectedDefaultActivityWithIdentifier:(NSUUID *)arg2 activityCategory:(long long)arg3;
- (void)activityViewControllerWithSessionID:(NSString *)arg1 favoritedActivity:(_Bool)arg2 withIdentifier:(NSUUID *)arg3 activityCategory:(long long)arg4;
- (void)activityViewControllerWithSessionID:(NSString *)arg1 toggledActivityWithIdentifier:(NSUUID *)arg2 activityCategory:(long long)arg3;
- (void)activityViewControllerWithSessionID:(NSString *)arg1 didLongPressShareActivityWithIdentifier:(NSUUID *)arg2;
- (void)activityViewControllerWithSessionID:(NSString *)arg1 provideFeedbackForPeopleSuggestionWithIdentifier:(NSString *)arg2;
- (void)activityViewControllerWithSessionID:(NSString *)arg1 removedPersonWithIdentifier:(NSUUID *)arg2;
- (void)activityViewControllerWithSessionID:(NSString *)arg1 selectedPersonWithIdentifier:(NSUUID *)arg2;
- (void)activityViewControllerWithSessionID:(NSString *)arg1 selectedActionWithIdentifier:(NSUUID *)arg2;
- (void)activityViewControllerWithSessionID:(NSString *)arg1 selectedActivityWithIdentifier:(NSUUID *)arg2;
- (void)requestConfigurationWithSessionID:(NSString *)arg1 completion:(void (^)(UISDShareSheetSessionConfiguration *))arg2;
- (void)sendConfiguration:(UISUIActivityViewControllerConfiguration *)arg1 completion:(void (^)(UISDShareSheetSessionConfiguration *))arg2;
- (void)connectUIServiceToDaemonWithSessionID:(NSString *)arg1;
- (void)connectToDaemonWithContext:(NSDictionary *)arg1 completionHandler:(void (^)(void))arg2;
- (void)connectToDaemonWithSessionID:(NSString *)arg1 discoveryContext:(_UIActivityDiscoveryContext *)arg2 assetIdentifiers:(NSArray *)arg3 urlsBeingShared:(NSArray *)arg4 shouldSuggestFamilyMembers:(NSNumber *)arg5 isSharePlayAvailable:(NSNumber *)arg6 peopleSuggestionBundleIds:(NSArray *)arg7 completionHandler:(void (^)(void))arg8;
@end

