//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPListRange;

@interface CKDPFieldActionDeleteListRange : PBCodable
{
    CKDPListRange *_range;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001ee1f0
@property(retain, nonatomic) CKDPListRange *range; // @synthesize range=_range;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001ee16e
- (unsigned long long)hash;	// IMP=0x00000000001ee151
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001ee0b7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001ee03f
- (void)copyTo:(id)arg1;	// IMP=0x00000000001ee015
- (void)writeTo:(id)arg1;	// IMP=0x00000000001edff1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001edfe4
- (id)dictionaryRepresentation;	// IMP=0x00000000001edda1
- (id)description;	// IMP=0x00000000001edcf2
@property(readonly, nonatomic) _Bool hasRange;

@end
