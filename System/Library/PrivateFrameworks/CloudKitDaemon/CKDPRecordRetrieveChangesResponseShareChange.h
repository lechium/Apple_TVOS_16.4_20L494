//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPShare, CKDPShareIdentifier;

@interface CKDPRecordRetrieveChangesResponseShareChange : PBCodable
{
    int _changeType;	// 8 = 0x8
    CKDPShare *_share;	// 16 = 0x10
    CKDPShareIdentifier *_shareIdentifier;	// 24 = 0x18
    struct {
        unsigned int changeType:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000229686
@property(retain, nonatomic) CKDPShare *share; // @synthesize share=_share;
@property(retain, nonatomic) CKDPShareIdentifier *shareIdentifier; // @synthesize shareIdentifier=_shareIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000229585
- (unsigned long long)hash;	// IMP=0x0000000000229512
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000022941d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000022935c
- (void)copyTo:(id)arg1;	// IMP=0x00000000002292d9
- (void)writeTo:(id)arg1;	// IMP=0x0000000000229258
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000022924b
- (id)dictionaryRepresentation;	// IMP=0x0000000000228e5d
- (id)description;	// IMP=0x0000000000228dae
@property(readonly, nonatomic) _Bool hasShare;
- (int)StringAsChangeType:(id)arg1;	// IMP=0x0000000000228cfc
- (id)changeTypeAsString:(int)arg1;	// IMP=0x0000000000228cb1
@property(nonatomic) _Bool hasChangeType;
@property(nonatomic) int changeType; // @synthesize changeType=_changeType;
@property(readonly, nonatomic) _Bool hasShareIdentifier;

@end

