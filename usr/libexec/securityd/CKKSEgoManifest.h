//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSArray, NSDictionary;

@interface CKKSEgoManifest
{
    NSArray *_leafRecords;	// 104 = 0x68
}

+ (id)generateSignaturesWithHelper:(id)arg1 derData:(id)arg2 error:(id *)arg3;	// IMP=0x00200000001313df
+ (id)tryFromDatabaseWhere:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000131302
+ (id)fromDatabaseWhere:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000131225
+ (MISSING_TYPE *)newManifestForZone:withItems:peerManifestIDs:currentItems:error:helper: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000130e6c
+ (id)newManifestForZone:(id)arg1 withItems:(id)arg2 peerManifestIDs:(id)arg3 currentItems:(id)arg4 error:(id *)arg5;	// IMP=0x0010000000130d98
+ (id)newFakeManifestForZone:(id)arg1 withItemRecords:(id)arg2 currentItems:(id)arg3 signerID:(id)arg4 keyPair:(id)arg5 error:(id *)arg6;	// IMP=0x0010000000130c59
+ (id)tryCurrentEgoManifestForZone:(id)arg1;	// IMP=0x0010000000130b1b
+ (id)leafRecordsForItems:(id)arg1 manifestName:(id)arg2 zone:(id)arg3;	// IMP=0x00100000001307f8
+ (id)egoHelper;	// IMP=0x00100000001307cb
- (void).cxx_destruct;	// IMP=0x00200000001307b8
- (id)defaultHelperForSignerID:(id)arg1;	// IMP=0x001000000013076a
@property(retain, nonatomic) NSDictionary *signatures;
- (_Bool)saveToDatabase:(id *)arg1;	// IMP=0x0010000000130528
- (id)allCKRecordsWithZoneID:(id)arg1;	// IMP=0x001000000013031e
- (id)leafRecords;	// IMP=0x0010000000130309
- (id)leafRecordForItemUUID:(id)arg1;	// IMP=0x0010000000130250
- (void)setCurrentItemUUID:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x00100000001301f5
- (void)updateWithNewOrChangedRecords:(id)arg1 deletedRecordIDs:(id)arg2;	// IMP=0x001000000012fdde
- (id)initWithDigestValue:(id)arg1 zone:(id)arg2 generationCount:(unsigned long long)arg3 leafRecords:(id)arg4 peerManifestIDs:(id)arg5 currentItems:(id)arg6 futureData:(id)arg7 signatures:(id)arg8 signerID:(id)arg9 schema:(id)arg10;	// IMP=0x001000000012fa6f
- (_Bool)loadLeafRecords:(id)arg1 error:(id *)arg2;	// IMP=0x001000000012f6cb

@end

