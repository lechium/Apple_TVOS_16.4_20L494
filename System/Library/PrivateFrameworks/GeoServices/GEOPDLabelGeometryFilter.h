//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDLabelGeometryFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000c3f8ac
- (unsigned long long)hash;	// IMP=0x0000000000c3f8a4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c3f85f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c3f804
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c3f7e7
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c3f7d8
- (id)jsonRepresentation;	// IMP=0x0000000000c3f6c6
- (id)dictionaryRepresentation;	// IMP=0x0000000000c3f55b
- (id)description;	// IMP=0x0000000000c3f4ac

@end

