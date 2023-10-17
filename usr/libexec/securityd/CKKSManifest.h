//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKKSManifestInjectionPointHelper, NSArray, NSData, NSDictionary, NSMutableDictionary, NSString;

@interface CKKSManifest
{
    NSData *_derData;	// 8 = 0x8
    NSData *_digestValue;	// 16 = 0x10
    unsigned long long _generationCount;	// 24 = 0x18
    NSString *_signerID;	// 32 = 0x20
    NSString *_zoneName;	// 40 = 0x28
    NSArray *_leafRecordIDs;	// 48 = 0x30
    NSArray *_peerManifestIDs;	// 56 = 0x38
    NSMutableDictionary *_currentItemsDict;	// 64 = 0x40
    NSDictionary *_futureData;	// 72 = 0x48
    NSDictionary *_signaturesDict;	// 80 = 0x50
    NSDictionary *_schema;	// 88 = 0x58
    CKKSManifestInjectionPointHelper *_helper;	// 96 = 0x60
}

+ (_Bool)intransactionRecordDeleted:(id)arg1 resync:(_Bool)arg2 error:(id *)arg3;	// IMP=0x002000000012e5bf
+ (id)whereClauseForRecordName:(id)arg1;	// IMP=0x001000000012e3eb
+ (unsigned long long)greatestKnownGenerationCount;	// IMP=0x001000000012e27b
+ (id)sqlTable;	// IMP=0x001000000012e26e
+ (id)sqlColumns;	// IMP=0x001000000012e261
+ (id)fromDatabaseRow:(id)arg1;	// IMP=0x001000000012dc79
+ (id)manifestForPendingManifest:(id)arg1;	// IMP=0x001000000012da89
+ (id)digestValueForLeafRecords:(id)arg1;	// IMP=0x001000000012d8a6
+ (id)digestForData:(id)arg1;	// IMP=0x001000000012d88d
+ (id)signatureOperation;	// IMP=0x001000000012d803
+ (id)latestTrustedManifestForZone:(id)arg1 error:(id *)arg2;	// IMP=0x001000000012d651
+ (id)manifestForRecordName:(id)arg1 error:(id *)arg2;	// IMP=0x001000000012d5ed
+ (id)manifestForZone:(id)arg1 peerID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000012d4ec
+ (id)tryFromDatabaseWhere:(id)arg1 error:(id *)arg2;	// IMP=0x001000000012d435
+ (void)performWithAccountInfo:(CDUnknownBlockType)arg1;	// IMP=0x001000000012d21c
+ (_Bool)shouldEnforceManifests;	// IMP=0x001000000012d203
+ (_Bool)shouldSyncManifests;	// IMP=0x001000000012d1ea
+ (void)loadDefaults;	// IMP=0x001000000012d1c6
+ (void)initialize;	// IMP=0x001000000012d085
- (void).cxx_destruct;	// IMP=0x002000000012bd56
@property(readonly, nonatomic) unsigned long long generationCount; // @synthesize generationCount=_generationCount;
@property(retain, nonatomic) CKKSManifestInjectionPointHelper *helper; // @synthesize helper=_helper;
@property(readonly, nonatomic) NSDictionary *schema; // @synthesize schema=_schema;
@property(retain, nonatomic) NSString *signerID; // @synthesize signerID=_signerID;
@property(readonly, nonatomic) NSDictionary *signatures; // @synthesize signatures=_signaturesDict;
@property(readonly, nonatomic) NSDictionary *futureData; // @synthesize futureData=_futureData;
@property(readonly, nonatomic) NSDictionary *currentItems; // @synthesize currentItems=_currentItemsDict;
@property(readonly, nonatomic) NSArray *peerManifestIDs; // @synthesize peerManifestIDs=_peerManifestIDs;
@property(readonly, nonatomic) NSArray *leafRecordIDs; // @synthesize leafRecordIDs=_leafRecordIDs;
@property(readonly, nonatomic) NSString *zoneName; // @synthesize zoneName=_zoneName;
- (void)nilAllIvars;	// IMP=0x001000000012bbad
- (id)ckRecordType;	// IMP=0x001000000012bb8e
- (id)leafRecords;	// IMP=0x001000000012b8f9
@property(readonly, nonatomic) NSData *digestValue;
- (void)clearDigest;	// IMP=0x001000000012b80e
- (id)leafRecordForItemUUID:(id)arg1;	// IMP=0x001000000012b74b
- (id)leafRecordForID:(id)arg1;	// IMP=0x001000000012b603
- (_Bool)contentsAreEqualToManifest:(id)arg1;	// IMP=0x001000000012b5a5
- (_Bool)itemUUIDExistsInManifest:(id)arg1;	// IMP=0x001000000012b4fb
- (_Bool)validateCurrentItem:(id)arg1 withError:(id *)arg2;	// IMP=0x001000000012b36d
- (_Bool)validateItem:(id)arg1 withError:(id *)arg2;	// IMP=0x001000000012b171
- (_Bool)validateWithError:(id *)arg1;	// IMP=0x001000000012afbc
- (id)derData;	// IMP=0x001000000012ab55
- (void)setFromCKRecord:(id)arg1;	// IMP=0x001000000012aa55
- (_Bool)matchesCKRecord:(id)arg1;	// IMP=0x001000000012a72b
- (id)updateCKRecord:(id)arg1 zoneID:(id)arg2;	// IMP=0x001000000012a32c
- (id)CKRecordName;	// IMP=0x001000000012a2cf
- (id)whereClauseToFindSelf;	// IMP=0x001000000012a150
- (id)sqlValues;	// IMP=0x0010000000129d74
- (_Bool)updateWithRecord:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000129974
- (id)futureDataDictFromRecord:(id)arg1 withSchema:(id)arg2;	// IMP=0x0010000000129881
- (id)derDataFromPeerManifests:(id)arg1 error:(id *)arg2;	// IMP=0x001000000012975d
- (id)peerManifestsFromDERData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000129622
- (id)derDataFromSignatureDict:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001294fe
- (id)signatureDictFromDERData:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001293c3
- (id)defaultHelperForSignerID:(id)arg1;	// IMP=0x00100000001293aa
- (id)initWithCKRecord:(id)arg1;	// IMP=0x0010000000128ce4
- (id)initWithDigestValue:(id)arg1 zone:(id)arg2 generationCount:(unsigned long long)arg3 leafRecordIDs:(id)arg4 peerManifestIDs:(id)arg5 currentItems:(id)arg6 futureData:(id)arg7 signatures:(id)arg8 signerID:(id)arg9 schema:(id)arg10 encodedRecord:(id)arg11;	// IMP=0x0010000000128c49
- (id)initWithDigestValue:(id)arg1 zone:(id)arg2 generationCount:(unsigned long long)arg3 leafRecordIDs:(id)arg4 peerManifestIDs:(id)arg5 currentItems:(id)arg6 futureData:(id)arg7 signatures:(id)arg8 signerID:(id)arg9 schema:(id)arg10;	// IMP=0x0010000000128c0b
- (id)initWithDigestValue:(id)arg1 zone:(id)arg2 generationCount:(unsigned long long)arg3 leafRecordIDs:(id)arg4 peerManifestIDs:(id)arg5 currentItems:(id)arg6 futureData:(id)arg7 signatures:(id)arg8 signerID:(id)arg9 schema:(id)arg10 helper:(id)arg11;	// IMP=0x00100000001286a9

@end
