//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPlacecardURL : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSString *_url;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000c978b2
- (unsigned long long)hash;	// IMP=0x0000000000c97895
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c977fb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c97770
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c97715
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c97706
- (id)jsonRepresentation;	// IMP=0x0000000000c975f4
- (id)dictionaryRepresentation;	// IMP=0x0000000000c97462
- (id)description;	// IMP=0x0000000000c973b3

@end

