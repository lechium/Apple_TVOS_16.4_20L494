//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSpatialLookupFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000cc8a79
- (unsigned long long)hash;	// IMP=0x0000000000cc8a71
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cc8a2c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cc89d1
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cc89b4
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cc89a5
- (id)jsonRepresentation;	// IMP=0x0000000000cc8893
- (id)dictionaryRepresentation;	// IMP=0x0000000000cc8728
- (id)description;	// IMP=0x0000000000cc8679

@end

