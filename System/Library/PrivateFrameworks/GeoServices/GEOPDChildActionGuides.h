//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDGuidesLocationEntry, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDChildActionGuides : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDGuidesLocationEntry *_guidesLocationEntry;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000b75c02
- (unsigned long long)hash;	// IMP=0x0000000000b7555a
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b754c0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b75435
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b75337
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b75328
- (id)jsonRepresentation;	// IMP=0x0000000000b74ab8
- (id)dictionaryRepresentation;	// IMP=0x0000000000b748b8
- (id)description;	// IMP=0x0000000000b74809

@end
