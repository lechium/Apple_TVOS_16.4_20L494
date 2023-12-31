//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface CKDPStreamingAssetFooter : PBCodable
{
    NSData *_md5;	// 8 = 0x8
    int _status;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000010c19e
@property(retain, nonatomic) NSData *md5; // @synthesize md5=_md5;
@property(nonatomic) int status; // @synthesize status=_status;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000010c128
- (unsigned long long)hash;	// IMP=0x000000000010c0ec
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000010c042
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010bfbc
- (void)copyTo:(id)arg1;	// IMP=0x000000000010bf8c
- (void)writeTo:(id)arg1;	// IMP=0x000000000010bf15
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000010bd07
- (id)dictionaryRepresentation;	// IMP=0x000000000010bc33
- (id)description;	// IMP=0x000000000010bb84
- (int)StringAsStatus:(id)arg1;	// IMP=0x000000000010bb22
- (id)statusAsString:(int)arg1;	// IMP=0x000000000010bacd

@end

