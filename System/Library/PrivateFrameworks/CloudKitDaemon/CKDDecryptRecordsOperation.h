//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface CKDDecryptRecordsOperation
{
    _Bool _forcePCSDecrypt;	// 8 = 0x8
    _Bool _started;	// 9 = 0x9
    _Bool _markedToFinish;	// 10 = 0xa
    NSMutableArray *_outstandingDecryptions;	// 16 = 0x10
    NSObject<OS_dispatch_group> *_recordDecryptGroup;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_recordDecryptQueue;	// 32 = 0x20
    unsigned long long _maxUnwrapAttempts;	// 40 = 0x28
    NSDictionary *_webSharingIdentityDataByRecordID;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000002effd7
@property(retain, nonatomic) NSDictionary *webSharingIdentityDataByRecordID; // @synthesize webSharingIdentityDataByRecordID=_webSharingIdentityDataByRecordID;
@property(nonatomic) unsigned long long maxUnwrapAttempts; // @synthesize maxUnwrapAttempts=_maxUnwrapAttempts;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *recordDecryptQueue; // @synthesize recordDecryptQueue=_recordDecryptQueue;
@property(getter=isMarkedToFinish) _Bool markedToFinish; // @synthesize markedToFinish=_markedToFinish;
@property(getter=isStarted) _Bool started; // @synthesize started=_started;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *recordDecryptGroup; // @synthesize recordDecryptGroup=_recordDecryptGroup;
@property(retain, nonatomic) NSMutableArray *outstandingDecryptions; // @synthesize outstandingDecryptions=_outstandingDecryptions;
@property(nonatomic) _Bool forcePCSDecrypt; // @synthesize forcePCSDecrypt=_forcePCSDecrypt;
- (_Bool)supportsClearAssetEncryption;	// IMP=0x00000000002efeb5
- (void)main;	// IMP=0x00000000002efc48
- (id)_possiblyWrapError:(id)arg1 forRecordWithID:(id)arg2 withCode:(long long)arg3 format:(id)arg4;	// IMP=0x00000000002efa39
- (void)_finishDecryptOperation;	// IMP=0x00000000002ef645
- (void)finishDecryption;	// IMP=0x00000000002ef493
- (void)_finishOnCallbackQueueWithError:(id)arg1;	// IMP=0x00000000002eefeb
- (id)_unwrapEncryptedPropertiesOnRecord:(id)arg1 withPCS:(struct _OpaquePCSShareProtection *)arg2;	// IMP=0x00000000002eea2e
- (id)_unwrapEncryptedPropertiesForRecordValueStore:(id)arg1 withPCS:(struct _OpaquePCSShareProtection *)arg2;	// IMP=0x00000000002eddd4
- (id)_unwrapMergeableRecordValue:(id)arg1 inRecordWithID:(id)arg2 forField:(id)arg3 withPCS:(struct _OpaquePCSShareProtection *)arg4;	// IMP=0x00000000002edab0
- (id)_unwrapPackageAssets:(id)arg1 inRecordWithID:(id)arg2 forField:(id)arg3 withPCS:(struct _OpaquePCSShareProtection *)arg4;	// IMP=0x00000000002ed8f2
- (id)_unwrapAssetKeyForAsset:(id)arg1 inRecordWithID:(id)arg2 forField:(id)arg3 withPCS:(struct _OpaquePCSShareProtection *)arg4;	// IMP=0x00000000002ed59a
- (void)_handleProtectionDataForRecordInfo:(id)arg1;	// IMP=0x00000000002ed1c9
- (void)_handleShareProtectionDataForRecordInfo:(id)arg1;	// IMP=0x00000000002ebc3b
- (id)_decryptRecordPCSForRecord:(id)arg1 usingChainPCS:(id)arg2;	// IMP=0x00000000002eb584
- (id)_decryptRecordPCSForRecord:(id)arg1 usingSharePCS:(id)arg2;	// IMP=0x00000000002eb14f
- (id)_decryptRecordPCSForRecord:(id)arg1 usingZonePCS:(id)arg2;	// IMP=0x00000000002eaa22
- (void)_handleZoneProtectionDataForRecordInfo:(id)arg1;	// IMP=0x00000000002e9f33
- (void)_decryptRecordInfo:(id)arg1 usingWebSharingIdentityData:(id)arg2;	// IMP=0x00000000002e9a6a
- (void)_decryptRecordInfo:(id)arg1;	// IMP=0x00000000002e937e
- (void)_clearProtectionDataForRecordInfo:(id)arg1;	// IMP=0x00000000002e9118
- (_Bool)shouldCheckAppVersion;	// IMP=0x00000000002e9110
- (void)_recordInfoWasDecrypted:(id)arg1 nextSteps:(CDUnknownBlockType)arg2;	// IMP=0x00000000002e8b60
- (void)decryptRecord:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002e8734
- (id)activityCreate;	// IMP=0x00000000002e870b
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x00000000002e85c9

@end

