//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPRecordIdentifier;

@interface CKDPMarkAssetBrokenResponse : PBCodable
{
    CKDPRecordIdentifier *_missingAssetStatusRecord;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002d4eb1
@property(retain, nonatomic) CKDPRecordIdentifier *missingAssetStatusRecord; // @synthesize missingAssetStatusRecord=_missingAssetStatusRecord;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002d4e2f
- (unsigned long long)hash;	// IMP=0x00000000002d4e12
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002d4d78
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002d4d00
- (void)copyTo:(id)arg1;	// IMP=0x00000000002d4cd6
- (void)writeTo:(id)arg1;	// IMP=0x00000000002d4cb2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002d4ca5
- (id)dictionaryRepresentation;	// IMP=0x00000000002d4a62
- (id)description;	// IMP=0x00000000002d49b3
@property(readonly, nonatomic) _Bool hasMissingAssetStatusRecord;

@end

