//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDOperation.h"

@interface CKDDatabaseOperation : CKDOperation
{
    long long _databaseScope;	// 8 = 0x8
}

@property(nonatomic) long long databaseScope; // @synthesize databaseScope=_databaseScope;
- (_Bool)supportsClearAssetEncryption;	// IMP=0x00000000002e4fea
- (id)analyticsPayload;	// IMP=0x00000000002e4f45
- (id)CKStatusReportProperties;	// IMP=0x00000000002e4e7d
- (void)spawnAndRunOperationOfClass:(Class)arg1 operationInfo:(id)arg2 spawnQueue:(id)arg3 container:(id)arg4 operationConfigurationBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000002e4d9a
- (id)activityCreate;	// IMP=0x00000000002e4d71
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;	// IMP=0x00000000002e4a37
- (void)setPCSData:(id)arg1 forFetchedShareID:(id)arg2;	// IMP=0x00000000002fd756
- (void)setPCSData:(id)arg1 forFetchedZoneID:(id)arg2;	// IMP=0x00000000002fd57c
- (void)setPCSData:(id)arg1 forFetchedRecordID:(id)arg2;	// IMP=0x00000000002fd3a2
- (void)_encryptMergeableDeltas:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000035111b

@end

