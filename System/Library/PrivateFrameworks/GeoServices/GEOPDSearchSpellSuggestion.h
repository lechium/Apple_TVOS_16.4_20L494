//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDSearchTokenSet;

__attribute__((visibility("hidden")))
@interface GEOPDSearchSpellSuggestion : PBCodable
{
    double _score;	// 8 = 0x8
    GEOPDSearchTokenSet *_suggestion;	// 16 = 0x10
    unsigned int _editDistance;	// 24 = 0x18
    float _rawScore;	// 28 = 0x1c
    struct {
        unsigned int has_score:1;
        unsigned int has_editDistance:1;
        unsigned int has_rawScore:1;
    } _flags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000001190905
- (unsigned long long)hash;	// IMP=0x00000000011906ae
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000119059c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000011904c4
- (void)writeTo:(id)arg1;	// IMP=0x0000000001190413
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001190404
- (id)jsonRepresentation;	// IMP=0x000000000118fb22
- (id)dictionaryRepresentation;	// IMP=0x000000000118f90d
- (id)description;	// IMP=0x000000000118f85e

@end

