//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPAnonymousShareAddResponse, CKDPAnonymousShareRemoveResponse, CKDPArchiveRecordsResponse, CKDPAssetUploadTokenRetrieveResponse, CKDPBundlesForContainerResponse, CKDPCodeFunctionInvokeResponse, CKDPDeleteContainerResponse, CKDPFetchArchivedRecordsResponse, CKDPMarkAssetBrokenResponse, CKDPMergeableDeltaMetadataRetrieveResponse, CKDPMergeableDeltaReplaceResponse, CKDPMergeableDeltaRetrieveResponse, CKDPMergeableDeltaSaveResponse, CKDPNotificationMarkReadResponse, CKDPNotificationSyncResponse, CKDPOperation, CKDPQueryRetrieveResponse, CKDPRecordDeleteResponse, CKDPRecordMoveResponse, CKDPRecordResolveTokenResponse, CKDPRecordRetrieveChangesResponse, CKDPRecordRetrieveResponse, CKDPRecordRetrieveVersionsResponse, CKDPRecordSaveResponse, CKDPResponseOperationHeader, CKDPResponseOperationResult, CKDPSetBadgeCountResponse, CKDPShareAcceptResponse, CKDPShareDeclineResponse, CKDPShareVettingInitiateResponse, CKDPSubscriptionCreateResponse, CKDPSubscriptionDeleteResponse, CKDPSubscriptionRetrieveResponse, CKDPTokenRegistrationResponse, CKDPTokenUnregistrationResponse, CKDPUpdateMissingAssetStatusResponse, CKDPUserAvailableQuotaResponse, CKDPUserPrivacySettingsBatchLookupResponse, CKDPUserPrivacySettingsResetResponse, CKDPUserPrivacySettingsRetrieveResponse, CKDPUserPrivacySettingsUpdateResponse, CKDPUserQueryResponse, CKDPUserRetrieveResponse, CKDPWebAuthTokenRetrieveResponse, CKDPZoneDeleteResponse, CKDPZoneRetrieveChangesResponse, CKDPZoneRetrieveResponse, CKDPZoneSaveResponse;

@interface CKDPResponseOperation : PBCodable
{
    CKDPAnonymousShareAddResponse *_anonymousShareAddResponse;	// 8 = 0x8
    CKDPAnonymousShareRemoveResponse *_anonymousShareRemoveResponse;	// 16 = 0x10
    CKDPArchiveRecordsResponse *_archiveRecordsResponse;	// 24 = 0x18
    CKDPAssetUploadTokenRetrieveResponse *_assetUploadTokenRetrieveResponse;	// 32 = 0x20
    CKDPBundlesForContainerResponse *_bundlesForContainerResponse;	// 40 = 0x28
    CKDPDeleteContainerResponse *_deleteContainerResponse;	// 48 = 0x30
    CKDPFetchArchivedRecordsResponse *_fetchArchivedRecordsResponse;	// 56 = 0x38
    CKDPCodeFunctionInvokeResponse *_functionInvokeResponse;	// 64 = 0x40
    CKDPResponseOperationHeader *_header;	// 72 = 0x48
    CKDPMarkAssetBrokenResponse *_markAssetBrokenResponse;	// 80 = 0x50
    CKDPMergeableDeltaMetadataRetrieveResponse *_mergeableDeltaMetadataRetrieveResponse;	// 88 = 0x58
    CKDPMergeableDeltaReplaceResponse *_mergeableDeltaReplaceResponse;	// 96 = 0x60
    CKDPMergeableDeltaRetrieveResponse *_mergeableDeltaRetrieveResponse;	// 104 = 0x68
    CKDPMergeableDeltaSaveResponse *_mergeableDeltaSaveResponse;	// 112 = 0x70
    CKDPNotificationMarkReadResponse *_notificationMarkReadResponse;	// 120 = 0x78
    CKDPNotificationSyncResponse *_notificationSyncResponse;	// 128 = 0x80
    CKDPQueryRetrieveResponse *_queryRetrieveResponse;	// 136 = 0x88
    CKDPRecordDeleteResponse *_recordDeleteResponse;	// 144 = 0x90
    CKDPRecordMoveResponse *_recordMoveResponse;	// 152 = 0x98
    CKDPRecordResolveTokenResponse *_recordResolveTokenResponse;	// 160 = 0xa0
    CKDPRecordRetrieveChangesResponse *_recordRetrieveChangesResponse;	// 168 = 0xa8
    CKDPRecordRetrieveResponse *_recordRetrieveResponse;	// 176 = 0xb0
    CKDPRecordRetrieveVersionsResponse *_recordRetrieveVersionsResponse;	// 184 = 0xb8
    CKDPRecordSaveResponse *_recordSaveResponse;	// 192 = 0xc0
    CKDPOperation *_response;	// 200 = 0xc8
    CKDPResponseOperationResult *_result;	// 208 = 0xd0
    CKDPSetBadgeCountResponse *_setBadgeCountResponse;	// 216 = 0xd8
    CKDPShareAcceptResponse *_shareAcceptResponse;	// 224 = 0xe0
    CKDPShareDeclineResponse *_shareDeclineResponse;	// 232 = 0xe8
    CKDPShareVettingInitiateResponse *_shareVettingInitiateResponse;	// 240 = 0xf0
    CKDPSubscriptionCreateResponse *_subscriptionCreateResponse;	// 248 = 0xf8
    CKDPSubscriptionDeleteResponse *_subscriptionDeleteResponse;	// 256 = 0x100
    CKDPSubscriptionRetrieveResponse *_subscriptionRetrieveResponse;	// 264 = 0x108
    CKDPTokenRegistrationResponse *_tokenRegistrationResponse;	// 272 = 0x110
    CKDPTokenUnregistrationResponse *_tokenUnregistrationResponse;	// 280 = 0x118
    CKDPUpdateMissingAssetStatusResponse *_updateMissingAssetStatusResponse;	// 288 = 0x120
    CKDPUserAvailableQuotaResponse *_userAvailableQuotaResponse;	// 296 = 0x128
    CKDPUserPrivacySettingsBatchLookupResponse *_userPrivacySettingsBatchLookupResponse;	// 304 = 0x130
    CKDPUserPrivacySettingsResetResponse *_userPrivacySettingsResetResponse;	// 312 = 0x138
    CKDPUserPrivacySettingsRetrieveResponse *_userPrivacySettingsRetrieveResponse;	// 320 = 0x140
    CKDPUserPrivacySettingsUpdateResponse *_userPrivacySettingsUpdateResponse;	// 328 = 0x148
    CKDPUserQueryResponse *_userQueryResponse;	// 336 = 0x150
    CKDPUserRetrieveResponse *_userRetrieveResponse;	// 344 = 0x158
    CKDPWebAuthTokenRetrieveResponse *_webAuthTokenRetrieveResponse;	// 352 = 0x160
    CKDPZoneDeleteResponse *_zoneDeleteResponse;	// 360 = 0x168
    CKDPZoneRetrieveChangesResponse *_zoneRetrieveChangesResponse;	// 368 = 0x170
    CKDPZoneRetrieveResponse *_zoneRetrieveResponse;	// 376 = 0x178
    CKDPZoneSaveResponse *_zoneSaveResponse;	// 384 = 0x180
}

- (void).cxx_destruct;	// IMP=0x0000000000147271
@property(retain, nonatomic) CKDPResponseOperationHeader *header; // @synthesize header=_header;
@property(retain, nonatomic) CKDPResponseOperationResult *result; // @synthesize result=_result;
@property(retain, nonatomic) CKDPOperation *response; // @synthesize response=_response;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001466ff
- (unsigned long long)hash;	// IMP=0x00000000001461ad
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000145791
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000144f97
- (void)copyTo:(id)arg1;	// IMP=0x0000000000144974
- (void)writeTo:(id)arg1;	// IMP=0x00000000001443e1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001443d4
- (id)dictionaryRepresentation;	// IMP=0x000000000014246e
- (id)description;	// IMP=0x00000000001423bf
@property(readonly, nonatomic) _Bool hasHeader;
@property(readonly, nonatomic) _Bool hasResult;
@property(readonly, nonatomic) _Bool hasResponse;
@property(retain, nonatomic) CKDPCodeFunctionInvokeResponse *functionInvokeResponse;
@property(readonly, nonatomic) _Bool hasFunctionInvokeResponse;
@property(retain, nonatomic) CKDPMergeableDeltaRetrieveResponse *mergeableDeltaRetrieveResponse;
@property(readonly, nonatomic) _Bool hasMergeableDeltaRetrieveResponse;
@property(retain, nonatomic) CKDPMergeableDeltaReplaceResponse *mergeableDeltaReplaceResponse;
@property(readonly, nonatomic) _Bool hasMergeableDeltaReplaceResponse;
@property(retain, nonatomic) CKDPMergeableDeltaMetadataRetrieveResponse *mergeableDeltaMetadataRetrieveResponse;
@property(readonly, nonatomic) _Bool hasMergeableDeltaMetadataRetrieveResponse;
@property(retain, nonatomic) CKDPMergeableDeltaSaveResponse *mergeableDeltaSaveResponse;
@property(readonly, nonatomic) _Bool hasMergeableDeltaSaveResponse;
@property(retain, nonatomic) CKDPShareVettingInitiateResponse *shareVettingInitiateResponse;
@property(readonly, nonatomic) _Bool hasShareVettingInitiateResponse;
@property(retain, nonatomic) CKDPZoneSaveResponse *zoneSaveResponse;
@property(readonly, nonatomic) _Bool hasZoneSaveResponse;
@property(retain, nonatomic) CKDPZoneRetrieveResponse *zoneRetrieveResponse;
@property(readonly, nonatomic) _Bool hasZoneRetrieveResponse;
@property(retain, nonatomic) CKDPZoneDeleteResponse *zoneDeleteResponse;
@property(readonly, nonatomic) _Bool hasZoneDeleteResponse;
@property(retain, nonatomic) CKDPZoneRetrieveChangesResponse *zoneRetrieveChangesResponse;
@property(readonly, nonatomic) _Bool hasZoneRetrieveChangesResponse;
@property(retain, nonatomic) CKDPRecordSaveResponse *recordSaveResponse;
@property(readonly, nonatomic) _Bool hasRecordSaveResponse;
@property(retain, nonatomic) CKDPRecordRetrieveResponse *recordRetrieveResponse;
@property(readonly, nonatomic) _Bool hasRecordRetrieveResponse;
@property(retain, nonatomic) CKDPRecordRetrieveVersionsResponse *recordRetrieveVersionsResponse;
@property(readonly, nonatomic) _Bool hasRecordRetrieveVersionsResponse;
@property(retain, nonatomic) CKDPRecordRetrieveChangesResponse *recordRetrieveChangesResponse;
@property(readonly, nonatomic) _Bool hasRecordRetrieveChangesResponse;
@property(retain, nonatomic) CKDPRecordDeleteResponse *recordDeleteResponse;
@property(readonly, nonatomic) _Bool hasRecordDeleteResponse;
@property(retain, nonatomic) CKDPRecordResolveTokenResponse *recordResolveTokenResponse;
@property(readonly, nonatomic) _Bool hasRecordResolveTokenResponse;
@property(retain, nonatomic) CKDPRecordMoveResponse *recordMoveResponse;
@property(readonly, nonatomic) _Bool hasRecordMoveResponse;
@property(retain, nonatomic) CKDPFetchArchivedRecordsResponse *fetchArchivedRecordsResponse;
@property(readonly, nonatomic) _Bool hasFetchArchivedRecordsResponse;
@property(retain, nonatomic) CKDPUserAvailableQuotaResponse *userAvailableQuotaResponse;
@property(readonly, nonatomic) _Bool hasUserAvailableQuotaResponse;
@property(retain, nonatomic) CKDPUserRetrieveResponse *userRetrieveResponse;
@property(readonly, nonatomic) _Bool hasUserRetrieveResponse;
@property(retain, nonatomic) CKDPQueryRetrieveResponse *queryRetrieveResponse;
@property(readonly, nonatomic) _Bool hasQueryRetrieveResponse;
@property(retain, nonatomic) CKDPAssetUploadTokenRetrieveResponse *assetUploadTokenRetrieveResponse;
@property(readonly, nonatomic) _Bool hasAssetUploadTokenRetrieveResponse;
@property(retain, nonatomic) CKDPDeleteContainerResponse *deleteContainerResponse;
@property(readonly, nonatomic) _Bool hasDeleteContainerResponse;
@property(retain, nonatomic) CKDPBundlesForContainerResponse *bundlesForContainerResponse;
@property(readonly, nonatomic) _Bool hasBundlesForContainerResponse;
@property(retain, nonatomic) CKDPWebAuthTokenRetrieveResponse *webAuthTokenRetrieveResponse;
@property(readonly, nonatomic) _Bool hasWebAuthTokenRetrieveResponse;
@property(retain, nonatomic) CKDPUpdateMissingAssetStatusResponse *updateMissingAssetStatusResponse;
@property(readonly, nonatomic) _Bool hasUpdateMissingAssetStatusResponse;
@property(retain, nonatomic) CKDPShareAcceptResponse *shareAcceptResponse;
@property(readonly, nonatomic) _Bool hasShareAcceptResponse;
@property(retain, nonatomic) CKDPShareDeclineResponse *shareDeclineResponse;
@property(readonly, nonatomic) _Bool hasShareDeclineResponse;
@property(retain, nonatomic) CKDPAnonymousShareAddResponse *anonymousShareAddResponse;
@property(readonly, nonatomic) _Bool hasAnonymousShareAddResponse;
@property(retain, nonatomic) CKDPAnonymousShareRemoveResponse *anonymousShareRemoveResponse;
@property(readonly, nonatomic) _Bool hasAnonymousShareRemoveResponse;
@property(retain, nonatomic) CKDPSubscriptionCreateResponse *subscriptionCreateResponse;
@property(readonly, nonatomic) _Bool hasSubscriptionCreateResponse;
@property(retain, nonatomic) CKDPSubscriptionRetrieveResponse *subscriptionRetrieveResponse;
@property(readonly, nonatomic) _Bool hasSubscriptionRetrieveResponse;
@property(retain, nonatomic) CKDPSubscriptionDeleteResponse *subscriptionDeleteResponse;
@property(readonly, nonatomic) _Bool hasSubscriptionDeleteResponse;
@property(retain, nonatomic) CKDPArchiveRecordsResponse *archiveRecordsResponse;
@property(readonly, nonatomic) _Bool hasArchiveRecordsResponse;
@property(retain, nonatomic) CKDPMarkAssetBrokenResponse *markAssetBrokenResponse;
@property(readonly, nonatomic) _Bool hasMarkAssetBrokenResponse;
@property(retain, nonatomic) CKDPUserQueryResponse *userQueryResponse;
@property(readonly, nonatomic) _Bool hasUserQueryResponse;
@property(retain, nonatomic) CKDPUserPrivacySettingsUpdateResponse *userPrivacySettingsUpdateResponse;
@property(readonly, nonatomic) _Bool hasUserPrivacySettingsUpdateResponse;
@property(retain, nonatomic) CKDPUserPrivacySettingsResetResponse *userPrivacySettingsResetResponse;
@property(readonly, nonatomic) _Bool hasUserPrivacySettingsResetResponse;
@property(retain, nonatomic) CKDPUserPrivacySettingsBatchLookupResponse *userPrivacySettingsBatchLookupResponse;
@property(readonly, nonatomic) _Bool hasUserPrivacySettingsBatchLookupResponse;
@property(retain, nonatomic) CKDPUserPrivacySettingsRetrieveResponse *userPrivacySettingsRetrieveResponse;
@property(readonly, nonatomic) _Bool hasUserPrivacySettingsRetrieveResponse;
@property(retain, nonatomic) CKDPTokenRegistrationResponse *tokenRegistrationResponse;
@property(readonly, nonatomic) _Bool hasTokenRegistrationResponse;
@property(retain, nonatomic) CKDPTokenUnregistrationResponse *tokenUnregistrationResponse;
@property(readonly, nonatomic) _Bool hasTokenUnregistrationResponse;
@property(retain, nonatomic) CKDPSetBadgeCountResponse *setBadgeCountResponse;
@property(readonly, nonatomic) _Bool hasSetBadgeCountResponse;
@property(retain, nonatomic) CKDPNotificationSyncResponse *notificationSyncResponse;
@property(readonly, nonatomic) _Bool hasNotificationSyncResponse;
@property(retain, nonatomic) CKDPNotificationMarkReadResponse *notificationMarkReadResponse;
@property(readonly, nonatomic) _Bool hasNotificationMarkReadResponse;

@end

