//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDBrandLookupParameters : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSString *_imessageUid;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000513bdf
- (unsigned long long)hash;	// IMP=0x0000000000513bc2
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000513b28
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000513a9d
- (void)writeTo:(id)arg1;	// IMP=0x0000000000513a42
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000513a33
- (id)jsonRepresentation;	// IMP=0x0000000000513710
- (id)dictionaryRepresentation;	// IMP=0x0000000000513570
- (id)description;	// IMP=0x00000000005134c1

@end
