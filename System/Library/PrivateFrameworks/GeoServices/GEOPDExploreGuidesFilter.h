//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDExploreGuidesFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000c20141
- (unsigned long long)hash;	// IMP=0x0000000000c20139
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c200f4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c20099
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c2007c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c2006d
- (id)jsonRepresentation;	// IMP=0x0000000000c1ff5b
- (id)dictionaryRepresentation;	// IMP=0x0000000000c1fdf0
- (id)description;	// IMP=0x0000000000c1fd41

@end

