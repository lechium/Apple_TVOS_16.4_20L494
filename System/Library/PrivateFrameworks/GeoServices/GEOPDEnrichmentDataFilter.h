//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDEnrichmentDataFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000c0cabb
- (unsigned long long)hash;	// IMP=0x0000000000c0cab3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c0ca6e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c0ca13
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c0c9f6
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c0c9e7
- (id)jsonRepresentation;	// IMP=0x0000000000c0c8d5
- (id)dictionaryRepresentation;	// IMP=0x0000000000c0c76a
- (id)description;	// IMP=0x0000000000c0c6bb

@end

