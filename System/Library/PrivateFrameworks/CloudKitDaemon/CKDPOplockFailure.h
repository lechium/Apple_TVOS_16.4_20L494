//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPRecord;

@interface CKDPOplockFailure : PBCodable
{
    CKDPRecord *_recordForOplockFailure;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001b1f8b
@property(retain, nonatomic) CKDPRecord *recordForOplockFailure; // @synthesize recordForOplockFailure=_recordForOplockFailure;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001b1f09
- (unsigned long long)hash;	// IMP=0x00000000001b1eec
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001b1e52
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b1dda
- (void)copyTo:(id)arg1;	// IMP=0x00000000001b1db0
- (void)writeTo:(id)arg1;	// IMP=0x00000000001b1d8c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001b1d7f
- (id)dictionaryRepresentation;	// IMP=0x00000000001b1b3c
- (id)description;	// IMP=0x00000000001b1a8d
@property(readonly, nonatomic) _Bool hasRecordForOplockFailure;

@end

