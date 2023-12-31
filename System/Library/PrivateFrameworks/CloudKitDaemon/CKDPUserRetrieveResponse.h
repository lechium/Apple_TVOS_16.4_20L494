//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPRecord;

@interface CKDPUserRetrieveResponse : PBCodable
{
    CKDPRecord *_user;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000032637f
@property(retain, nonatomic) CKDPRecord *user; // @synthesize user=_user;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000003262fd
- (unsigned long long)hash;	// IMP=0x00000000003262e0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000326246
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000003261ce
- (void)copyTo:(id)arg1;	// IMP=0x00000000003261a4
- (void)writeTo:(id)arg1;	// IMP=0x0000000000326180
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000326173
- (id)dictionaryRepresentation;	// IMP=0x0000000000325f30
- (id)description;	// IMP=0x0000000000325e81
@property(readonly, nonatomic) _Bool hasUser;

@end

