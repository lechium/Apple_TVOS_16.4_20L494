//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDWifiFingerprintResult : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000632b83
- (unsigned long long)hash;	// IMP=0x0000000000632b7b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000632b36
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000632adb
- (void)writeTo:(id)arg1;	// IMP=0x0000000000632abe
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000632aaf
- (id)jsonRepresentation;	// IMP=0x000000000063299d
- (id)dictionaryRepresentation;	// IMP=0x0000000000632832
- (id)description;	// IMP=0x0000000000632783

@end
