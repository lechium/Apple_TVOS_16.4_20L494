//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDResultRefinementView : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_sections;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000e389b2
- (unsigned long long)hash;	// IMP=0x0000000000e38995
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e388fb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e3873b
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e385dc
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e385cd
- (id)jsonRepresentation;	// IMP=0x0000000000e384bb
- (id)dictionaryRepresentation;	// IMP=0x0000000000e3812a
- (id)description;	// IMP=0x0000000000e3807b

@end

