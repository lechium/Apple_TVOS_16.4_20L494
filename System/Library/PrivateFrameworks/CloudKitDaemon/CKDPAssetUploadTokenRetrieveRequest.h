//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPRecordFieldIdentifier, CKDPRecordType, NSData, NSMutableArray;

@interface CKDPAssetUploadTokenRetrieveRequest : PBRequest
{
    NSMutableArray *_assets;	// 8 = 0x8
    NSData *_authPutRequest;	// 16 = 0x10
    int _authPutType;	// 24 = 0x18
    NSMutableArray *_contentRequestHeaders;	// 32 = 0x20
    CKDPRecordFieldIdentifier *_field;	// 40 = 0x28
    CKDPRecordType *_type;	// 48 = 0x30
    NSMutableArray *_uploads;	// 56 = 0x38
    struct {
        unsigned int authPutType:1;
    } _has;	// 64 = 0x40
}

+ (Class)contentRequestHeadersType;	// IMP=0x001000000024450b
+ (Class)uploadsType;	// IMP=0x0010000000244439
+ (Class)assetsType;	// IMP=0x0010000000244367
+ (id)options;	// IMP=0x001000000024422c
- (void).cxx_destruct;	// IMP=0x0000000000246441
@property(retain, nonatomic) NSData *authPutRequest; // @synthesize authPutRequest=_authPutRequest;
@property(retain, nonatomic) NSMutableArray *contentRequestHeaders; // @synthesize contentRequestHeaders=_contentRequestHeaders;
@property(retain, nonatomic) NSMutableArray *uploads; // @synthesize uploads=_uploads;
@property(retain, nonatomic) NSMutableArray *assets; // @synthesize assets=_assets;
@property(retain, nonatomic) CKDPRecordFieldIdentifier *field; // @synthesize field=_field;
@property(retain, nonatomic) CKDPRecordType *type; // @synthesize type=_type;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000245f77
- (unsigned long long)hash;	// IMP=0x0000000000245e90
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000245ccb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000245806
- (void)copyTo:(id)arg1;	// IMP=0x00000000002455a9
- (Class)responseClass;	// IMP=0x0000000000245598
- (unsigned int)requestTypeCode;	// IMP=0x000000000024558d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000245225
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000245218
- (id)dictionaryRepresentation;	// IMP=0x000000000024472f
- (id)description;	// IMP=0x0000000000244680
- (int)StringAsAuthPutType:(id)arg1;	// IMP=0x00000000002445e3
- (id)authPutTypeAsString:(int)arg1;	// IMP=0x0000000000244598
@property(nonatomic) _Bool hasAuthPutType;
@property(nonatomic) int authPutType; // @synthesize authPutType=_authPutType;
@property(readonly, nonatomic) _Bool hasAuthPutRequest;
- (id)contentRequestHeadersAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002444ee
- (unsigned long long)contentRequestHeadersCount;	// IMP=0x00000000002444d1
- (void)addContentRequestHeaders:(id)arg1;	// IMP=0x0000000000244467
- (void)clearContentRequestHeaders;	// IMP=0x000000000024444a
- (id)uploadsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000024441c
- (unsigned long long)uploadsCount;	// IMP=0x00000000002443ff
- (void)addUploads:(id)arg1;	// IMP=0x0000000000244395
- (void)clearUploads;	// IMP=0x0000000000244378
- (id)assetsAtIndex:(unsigned long long)arg1;	// IMP=0x000000000024434a
- (unsigned long long)assetsCount;	// IMP=0x000000000024432d
- (void)addAssets:(id)arg1;	// IMP=0x00000000002442c3
- (void)clearAssets;	// IMP=0x00000000002442a6
@property(readonly, nonatomic) _Bool hasField;
@property(readonly, nonatomic) _Bool hasType;

@end
