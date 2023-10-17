//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchQueryClassificationMetadata : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_classiferId;	// 16 = 0x10
    NSMutableArray *_modelVersions;	// 24 = 0x18
    NSMutableArray *_predictions;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    float _localGlobalThreshold;	// 52 = 0x34
    float _poiGeoThreshold;	// 56 = 0x38
    struct {
        unsigned int has_localGlobalThreshold:1;
        unsigned int has_poiGeoThreshold:1;
        unsigned int read_classiferId:1;
        unsigned int read_modelVersions:1;
        unsigned int read_predictions:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x0000000000abab2f
- (unsigned long long)hash;	// IMP=0x0000000000aba8ac
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000aba739
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000aba309
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ab9f60
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ab9f51
- (id)jsonRepresentation;	// IMP=0x0000000000ab9cd3
- (id)dictionaryRepresentation;	// IMP=0x0000000000ab96a5
- (id)description;	// IMP=0x0000000000ab95f6
- (id)initWithData:(id)arg1;	// IMP=0x0000000000ab89cc
- (id)init;	// IMP=0x0000000000ab8970

@end
