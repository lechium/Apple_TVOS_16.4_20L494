//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPRecordIdentifier, NSMutableArray, NSString;

@interface CKDPMarkAssetBrokenRequest : PBRequest
{
    NSString *_affectedRecordType;	// 8 = 0x8
    CKDPRecordIdentifier *_brokenAssetRecordID;	// 16 = 0x10
    NSString *_fieldName;	// 24 = 0x18
    NSMutableArray *_fileSignatures;	// 32 = 0x20
    int _listIndex;	// 40 = 0x28
    NSMutableArray *_referenceSignatures;	// 48 = 0x30
    _Bool _isPackage;	// 56 = 0x38
    _Bool _skipWriteMissingAssetStatusRecord;	// 57 = 0x39
    struct {
        unsigned int listIndex:1;
        unsigned int isPackage:1;
        unsigned int skipWriteMissingAssetStatusRecord:1;
    } _has;	// 60 = 0x3c
}

+ (Class)referenceSignatureType;	// IMP=0x001000000024cfb2
+ (Class)fileSignatureType;	// IMP=0x001000000024cee0
+ (id)options;	// IMP=0x001000000024cd60
- (void).cxx_destruct;	// IMP=0x000000000024e7e1
@property(nonatomic) _Bool skipWriteMissingAssetStatusRecord; // @synthesize skipWriteMissingAssetStatusRecord=_skipWriteMissingAssetStatusRecord;
@property(retain, nonatomic) NSString *affectedRecordType; // @synthesize affectedRecordType=_affectedRecordType;
@property(nonatomic) _Bool isPackage; // @synthesize isPackage=_isPackage;
@property(retain, nonatomic) NSMutableArray *referenceSignatures; // @synthesize referenceSignatures=_referenceSignatures;
@property(retain, nonatomic) NSMutableArray *fileSignatures; // @synthesize fileSignatures=_fileSignatures;
@property(nonatomic) int listIndex; // @synthesize listIndex=_listIndex;
@property(retain, nonatomic) NSString *fieldName; // @synthesize fieldName=_fieldName;
@property(retain, nonatomic) CKDPRecordIdentifier *brokenAssetRecordID; // @synthesize brokenAssetRecordID=_brokenAssetRecordID;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000024e3d1
- (unsigned long long)hash;	// IMP=0x000000000024e2a8
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000024e0a1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000024dcc1
- (void)copyTo:(id)arg1;	// IMP=0x000000000024dab0
- (Class)responseClass;	// IMP=0x000000000024da9f
- (unsigned int)requestTypeCode;	// IMP=0x000000000024da94
- (void)writeTo:(id)arg1;	// IMP=0x000000000024d7bd
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000024d7b0
- (id)dictionaryRepresentation;	// IMP=0x000000000024d11b
- (id)description;	// IMP=0x000000000024d06c
@property(nonatomic) _Bool hasSkipWriteMissingAssetStatusRecord;
@property(readonly, nonatomic) _Bool hasAffectedRecordType;
@property(nonatomic) _Bool hasIsPackage;
- (id)referenceSignatureAtIndex:(unsigned long long)arg1;	// IMP=0x000000000024cf95
- (unsigned long long)referenceSignaturesCount;	// IMP=0x000000000024cf78
- (void)addReferenceSignature:(id)arg1;	// IMP=0x000000000024cf0e
- (void)clearReferenceSignatures;	// IMP=0x000000000024cef1
- (id)fileSignatureAtIndex:(unsigned long long)arg1;	// IMP=0x000000000024cec3
- (unsigned long long)fileSignaturesCount;	// IMP=0x000000000024cea6
- (void)addFileSignature:(id)arg1;	// IMP=0x000000000024ce3c
- (void)clearFileSignatures;	// IMP=0x000000000024ce1f
@property(nonatomic) _Bool hasListIndex;
@property(readonly, nonatomic) _Bool hasFieldName;
@property(readonly, nonatomic) _Bool hasBrokenAssetRecordID;

@end

