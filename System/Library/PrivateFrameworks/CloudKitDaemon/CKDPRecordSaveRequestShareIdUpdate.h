//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPShareIdentifier;

@interface CKDPRecordSaveRequestShareIdUpdate : PBCodable
{
    CKDPShareIdentifier *_shareId;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000003524b0
@property(retain, nonatomic) CKDPShareIdentifier *shareId; // @synthesize shareId=_shareId;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000035242e
- (unsigned long long)hash;	// IMP=0x0000000000352411
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000352377
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003522ff
- (void)copyTo:(id)arg1;	// IMP=0x00000000003522d5
- (void)writeTo:(id)arg1;	// IMP=0x00000000003522b1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000003522a4
- (id)dictionaryRepresentation;	// IMP=0x0000000000352061
- (id)description;	// IMP=0x0000000000351fb2
@property(readonly, nonatomic) _Bool hasShareId;

@end

