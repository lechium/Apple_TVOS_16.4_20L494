//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDRetainedSearchMetadata : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSString *_query;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000e393d1
- (unsigned long long)hash;	// IMP=0x0000000000e393b1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e39317
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e3928c
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e39231
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e39222
- (id)jsonRepresentation;	// IMP=0x0000000000e38c94
- (id)dictionaryRepresentation;	// IMP=0x0000000000e38b02
- (id)description;	// IMP=0x0000000000e38a53

@end

