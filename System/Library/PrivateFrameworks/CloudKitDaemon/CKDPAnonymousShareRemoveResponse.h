//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface CKDPAnonymousShareRemoveResponse : PBCodable
{
    NSString *_anonymousShareTupleHash;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001a7782
@property(retain, nonatomic) NSString *anonymousShareTupleHash; // @synthesize anonymousShareTupleHash=_anonymousShareTupleHash;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001a7739
- (unsigned long long)hash;	// IMP=0x00000000001a771c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a7682
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001a760a
- (void)copyTo:(id)arg1;	// IMP=0x00000000001a75e0
- (void)writeTo:(id)arg1;	// IMP=0x00000000001a75bc
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001a75af
- (id)dictionaryRepresentation;	// IMP=0x00000000001a73e2
- (id)description;	// IMP=0x00000000001a7333
@property(readonly, nonatomic) _Bool hasAnonymousShareTupleHash;

@end

