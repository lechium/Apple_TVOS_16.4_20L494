//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibraryServicesCore/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSProgress, NSSet, NSString, NSURL;

@protocol PLAssetsdCloudInternalServiceProtocol <NSObject>
- (void)markResourcesPurgeableWithUrgency:(long long)arg1 assetUuids:(NSArray *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)unsharePendingAssetsSharedToScopeWithIdentifier:(NSString *)arg1;
- (void)getLibraryScopeStatusCountsForScopeWithIdentifier:(NSString *)arg1 reply:(void (^)(CPLScopeStatusCounts *, NSError *))arg2;
- (void)forceParticipantAssetTrashNotificationWithReply:(void (^)(NSString *))arg1;
- (void)userViewedSharedLibraryParticipantAssetTrashNotificationWithReply:(void (^)(NSError *))arg1;
- (void)sharedLibraryRampCheckWithReply:(void (^)(_Bool, NSError *))arg1;
- (void)removeParticipantsWithParticipantUUIDs:(NSArray *)arg1 fromLibraryScopeWithIdentifier:(NSString *)arg2 retentionPolicy:(long long)arg3 exitSource:(long long)arg4 reply:(void (^)(NSError *))arg5;
- (void)startExitFromLibraryScopeWithIdentifier:(NSString *)arg1 retentionPolicy:(long long)arg2 exitSource:(long long)arg3 reply:(void (^)(NSError *))arg4;
- (void)resetLocalOnlyLibraryScopesAndAllLibraryScopeAssetStatesWithReply:(void (^)(_Bool, NSError *))arg1;
- (void)requestDeviceLibraryConfigurationChange:(long long)arg1 reply:(void (^)(_Bool, long long, NSError *))arg2;
- (void)confirmAllRemainingOnboardingPreviewAssetsOnLibraryScopeWithUUID:(NSString *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (NSProgress *)markOnboardingPreviewAssetsByProcessingRulesOnLibraryScopeWithUUID:(NSString *)arg1 excludePersonUUIDs:(NSSet *)arg2 reply:(void (^)(_Bool, NSError *))arg3;
- (void)deactivateLibraryScopeWithUUID:(NSString *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (NSProgress *)activateLibraryScopeWithUUID:(NSString *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)getResetSyncStatusWithReply:(void (^)(unsigned long long))arg1;
- (void)queryUserIdentitiesWithEmails:(NSArray *)arg1 phoneNumbers:(NSArray *)arg2 reply:(void (^)(_Bool, NSDictionary *, NSError *))arg3;
- (void)forceSyncMomentShareWithUUID:(NSString *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)acceptShareWithUUID:(NSString *)arg1 reply:(void (^)(_Bool, NSError *))arg2;
- (void)fetchShareWithURL:(NSURL *)arg1 ignoreExistingShare:(_Bool)arg2 reply:(void (^)(_Bool, NSString *, NSError *))arg3;
- (void)publishShareWithUUID:(NSString *)arg1 reply:(void (^)(_Bool, NSURL *, NSError *))arg2;
- (void)overrideSystemBudgetsForSyncSession:(_Bool)arg1 pauseReason:(NSString *)arg2 systemBudgets:(unsigned long long)arg3 reply:(void (^)(_Bool, NSError *))arg4;
- (void)getSystemBudgetsWithReply:(void (^)(_Bool, _Bool, NSError *))arg1;
- (void)getNotUploadedCount:(void (^)(unsigned long long, unsigned long long, unsigned long long, NSError *))arg1;
- (void)getCurrentTransferProgress:(void (^)(unsigned long long, unsigned long long, unsigned long long, unsigned long long))arg1;
- (void)rampingRequestForResourceType:(unsigned long long)arg1 numRequested:(unsigned long long)arg2 reply:(void (^)(_Bool, unsigned long long, NSError *))arg3;
- (void)setCloudPhotoLibraryPauseState:(_Bool)arg1 reason:(short)arg2;
- (void)setCloudPhotoLibraryEnabledState:(_Bool)arg1;
- (void)syncCloudPhotoLibrary;
- (void)shouldAutoEnableiCPLOnOSXWithReply:(void (^)(_Bool, NSError *))arg1;
- (void)isReadyForAnalysisWithReply:(void (^)(_Bool))arg1;
- (void)isReadyForCloudPhotoLibraryWithReply:(void (^)(_Bool))arg1;
- (void)setPersonInfoDictionary:(NSDictionary *)arg1 forPersonID:(NSString *)arg2;
- (void)personInfoDictionaryForPersonID:(NSString *)arg1 reply:(void (^)(NSDictionary *, NSError *))arg2;
- (void)emailAddressForKey:(long long)arg1 reply:(void (^)(NSString *, NSError *))arg2;
- (void)keyForEmailAddress:(NSString *)arg1 reply:(void (^)(long long, NSError *))arg2;
- (void)cloudSharingSpaceManagementRequestWithType:(unsigned long long)arg1 optionalBytesToPurge:(unsigned long long)arg2 reply:(void (^)(unsigned long long, NSError *))arg3;
- (void)updateSharedAlbumsCachedServerConfigurationLimits;
- (void)enablePhotostreamsWithStreamID:(NSString *)arg1;
- (void)createPhotostreamAlbumWithStreamID:(NSString *)arg1;
@end

