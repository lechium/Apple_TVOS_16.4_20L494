//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKRecordID, CKShare;

@interface CKDModifyShareHandler
{
    _Bool _haveAddedOwnerToShare;	// 8 = 0x8
    _Bool _isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade;	// 9 = 0x9
    struct _PCSPublicIdentityData *_selfPPPCSOwnerIdentity;	// 16 = 0x10
}

+ (id)modifyHandlerForDeleteWithShareID:(id)arg1 operation:(id)arg2;	// IMP=0x006000000019245f
+ (id)modifyHandlerWithShare:(id)arg1 operation:(id)arg2;	// IMP=0x00600000001923cd
@property(nonatomic) struct _PCSPublicIdentityData *selfPPPCSOwnerIdentity; // @synthesize selfPPPCSOwnerIdentity=_selfPPPCSOwnerIdentity;
@property(nonatomic) _Bool isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade; // @synthesize isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade=_isALegacyPublicShareThatNeedsOwnerPPPCSUpgrade;
@property(nonatomic) _Bool haveAddedOwnerToShare; // @synthesize haveAddedOwnerToShare=_haveAddedOwnerToShare;
- (void)dealloc;	// IMP=0x00000000001a0b24
- (void)updateParticipantsForFetchedShare:(id)arg1 error:(id)arg2;	// IMP=0x00000000001a07d7
- (void)savePCSDataToCache;	// IMP=0x00000000001a05b2
- (void)setServerRecord:(id)arg1;	// IMP=0x000000000019fef3
- (void)clearProtectionDataForRecord;	// IMP=0x000000000019fa74
- (id)_removePublicKey:(id)arg1 fromInvitedPCS:(struct _OpaquePCSShareProtection *)arg2;	// IMP=0x000000000019f7dd
- (id)_ensurePrivateParticipant:(id)arg1 isInInvitedSharePCS:(struct _OpaquePCSShareProtection *)arg2;	// IMP=0x000000000019d610
- (unsigned long long)invitedPCSPermissionForParticipant:(id)arg1;	// IMP=0x000000000019d575
- (struct _PCSPublicIdentityData *)createPublicIdentityFromPublicKeyForParticipant:(id)arg1 error:(id *)arg2;	// IMP=0x000000000019d1d7
- (_Bool)_addedPrivateParticipantNeedsAManateeInvitation:(id)arg1;	// IMP=0x000000000019d151
- (id)_publicKeyForParticipant:(id)arg1 error:(id *)arg2;	// IMP=0x000000000019cbd7
- (id)_removePrivateParticipant:(id)arg1 fromInvitedSharePCS:(struct _OpaquePCSShareProtection *)arg2;	// IMP=0x000000000019c349
- (_Bool)_removePrivateParticipantsFromInvitedPCS:(struct _OpaquePCSShareProtection *)arg1 error:(id *)arg2;	// IMP=0x000000000019c041
- (_Bool)_modifyRoleForParticipant:(id)arg1 invitedPCS:(struct _OpaquePCSShareProtection *)arg2 shareeIdentities:(id)arg3 error:(id *)arg4;	// IMP=0x000000000019b7db
- (void)_setupParticipantsProtectionInfos;	// IMP=0x000000000019a085
- (void)_addPublicKeyToSelfParticipant;	// IMP=0x00000000001997a6
- (_Bool)_cleanPublicPCSforShareWithError:(id *)arg1;	// IMP=0x0000000000199471
- (_Bool)_updateSharePublicPCSWithError:(id *)arg1;	// IMP=0x0000000000198b8f
- (_Bool)_serializePCSDataForShareWithError:(id *)arg1;	// IMP=0x0000000000197546
- (void)_alignParticipantPermissions;	// IMP=0x0000000000197134
- (id)_rollShareAndZonePCSIfNeededForSharePCS:(id)arg1 zonePCSData:(id)arg2;	// IMP=0x0000000000196bd9
- (void)prepareForSave;	// IMP=0x000000000019641b
- (void)_prepareDependentPCSUpdateIfNeededForShareWithSharePCS:(id)arg1 error:(id)arg2;	// IMP=0x00000000001957cb
- (id)_handleSharePCSData:(id)arg1 zonePCSData:(id)arg2;	// IMP=0x0000000000194e1c
- (id)_createNewSharePCSDataWithError:(id *)arg1;	// IMP=0x00000000001945dd
- (void)_fetchRootRecordPublicSharingIdentityWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000194238
- (void)_fetchSharePCSData;	// IMP=0x0000000000193340
- (void)fetchSharePCSData;	// IMP=0x0000000000192a90
- (void)noteSideEffectRecordPendingDelete:(id)arg1;	// IMP=0x000000000019298d
- (void)noteSideEffectRecordAbsent:(id)arg1;	// IMP=0x0000000000192987
- (void)noteSideEffectRecordPendingModify:(id)arg1;	// IMP=0x0000000000192862
- (id)sideEffectRecordIDs;	// IMP=0x00000000001926b3
- (unsigned long long)serviceType;	// IMP=0x000000000019261e
- (_Bool)isCloudDocsContainer;	// IMP=0x0000000000192584
- (_Bool)isShare;	// IMP=0x000000000019257c
@property(readonly, nonatomic) CKRecordID *shareID;
@property(readonly, nonatomic) CKShare *share;

@end

