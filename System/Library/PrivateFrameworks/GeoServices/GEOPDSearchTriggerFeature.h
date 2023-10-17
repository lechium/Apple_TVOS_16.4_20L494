//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchTriggerFeature : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    CDStruct_95bda58d _completionSourceTypes;	// 16 = 0x10
    NSString *_canonicalName;	// 40 = 0x28
    NSString *_displayName;	// 48 = 0x30
    NSString *_entityId;	// 56 = 0x38
    long long _globalEntityPopularity;	// 64 = 0x40
    long long _globalPopularity;	// 72 = 0x48
    double _lat;	// 80 = 0x50
    double _lng;	// 88 = 0x58
    long long _localPopularity;	// 96 = 0x60
    long long _localEntityPopularity;	// 104 = 0x68
    NSMutableArray *_prefCategorys;	// 112 = 0x70
    double _similarityScore;	// 120 = 0x78
    NSString *_trigger;	// 128 = 0x80
    double _w2vSimilarityScore;	// 136 = 0x88
    unsigned int _readerMarkPos;	// 144 = 0x90
    unsigned int _readerMarkLength;	// 148 = 0x94
    struct os_unfair_lock_s _readerLock;	// 152 = 0x98
    float _globalPmiScore;	// 156 = 0x9c
    float _localPmiScore;	// 160 = 0xa0
    int _tag;	// 164 = 0xa4
    _Bool _isUseShowOnMapHighlightExtra;	// 168 = 0xa8
    struct {
        unsigned int has_globalEntityPopularity:1;
        unsigned int has_globalPopularity:1;
        unsigned int has_lat:1;
        unsigned int has_lng:1;
        unsigned int has_localPopularity:1;
        unsigned int has_localEntityPopularity:1;
        unsigned int has_similarityScore:1;
        unsigned int has_w2vSimilarityScore:1;
        unsigned int has_globalPmiScore:1;
        unsigned int has_localPmiScore:1;
        unsigned int has_tag:1;
        unsigned int has_isUseShowOnMapHighlightExtra:1;
        unsigned int read_completionSourceTypes:1;
        unsigned int read_canonicalName:1;
        unsigned int read_displayName:1;
        unsigned int read_entityId:1;
        unsigned int read_prefCategorys:1;
        unsigned int read_trigger:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 172 = 0xac
}

- (void).cxx_destruct;	// IMP=0x0000000000b0047e
- (unsigned long long)hash;	// IMP=0x0000000000affcc0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000aff8c2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000aff3d9
- (void)writeTo:(id)arg1;	// IMP=0x0000000000afef39
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000afef2a
- (id)jsonRepresentation;	// IMP=0x0000000000afef1b
- (id)dictionaryRepresentation;	// IMP=0x0000000000afe483
- (id)description;	// IMP=0x0000000000afe3d4
- (void)dealloc;	// IMP=0x0000000000afd24c
- (id)initWithData:(id)arg1;	// IMP=0x0000000000afd1f0
- (id)init;	// IMP=0x0000000000afd194

@end

