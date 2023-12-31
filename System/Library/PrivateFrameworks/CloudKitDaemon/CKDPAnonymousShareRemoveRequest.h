//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSData, NSString;

@interface CKDPAnonymousShareRemoveRequest : PBRequest
{
    NSString *_anonymousShareTupleHash;	// 8 = 0x8
    NSData *_encryptedShareTuple;	// 16 = 0x10
}

+ (id)options;	// IMP=0x001000000008403b
- (void).cxx_destruct;	// IMP=0x00000000000846c1
@property(retain, nonatomic) NSData *encryptedShareTuple; // @synthesize encryptedShareTuple=_encryptedShareTuple;
@property(retain, nonatomic) NSString *anonymousShareTupleHash; // @synthesize anonymousShareTupleHash=_anonymousShareTupleHash;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000084614
- (unsigned long long)hash;	// IMP=0x00000000000845c7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000844ff
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000084461
- (void)copyTo:(id)arg1;	// IMP=0x00000000000843fe
- (Class)responseClass;	// IMP=0x00000000000843ed
- (unsigned int)requestTypeCode;	// IMP=0x00000000000843e2
- (void)writeTo:(id)arg1;	// IMP=0x0000000000084385
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000084378
- (id)dictionaryRepresentation;	// IMP=0x0000000000084164
- (id)description;	// IMP=0x00000000000840b5
@property(readonly, nonatomic) _Bool hasEncryptedShareTuple;
@property(readonly, nonatomic) _Bool hasAnonymousShareTupleHash;

@end

