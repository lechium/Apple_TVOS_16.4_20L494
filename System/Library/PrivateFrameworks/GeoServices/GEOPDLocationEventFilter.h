//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDLocationEventFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000c4a8ed
- (unsigned long long)hash;	// IMP=0x0000000000c4a8e5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c4a8a0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c4a845
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c4a828
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c4a819
- (id)jsonRepresentation;	// IMP=0x0000000000c4a707
- (id)dictionaryRepresentation;	// IMP=0x0000000000c4a59c
- (id)description;	// IMP=0x0000000000c4a4ed

@end

