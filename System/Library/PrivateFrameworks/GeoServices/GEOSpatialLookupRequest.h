//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOLatLng, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOSpatialLookupRequest : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    CDStruct_95bda58d _categorys;	// 16 = 0x10
    GEOLatLng *_center;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    int _maxResults;	// 60 = 0x3c
    int _radius;	// 64 = 0x40
    struct {
        unsigned int has_maxResults:1;
        unsigned int has_radius:1;
        unsigned int read_categorys:1;
        unsigned int read_center:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 68 = 0x44
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0010000000dd10ab
- (void).cxx_destruct;	// IMP=0x0000000000dd1912
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000dd1801
- (unsigned long long)hash;	// IMP=0x0000000000dd1765
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000dd162c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000dd1442
- (void)copyTo:(id)arg1;	// IMP=0x0000000000dd12e9
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x0000000000dd12b8
- (void)writeTo:(id)arg1;	// IMP=0x0000000000dd10c7
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000dd10b8
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000dd0ff9
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000dd0fe7
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000dd0925
- (id)jsonRepresentation;	// IMP=0x0000000000dd0916
- (id)dictionaryRepresentation;	// IMP=0x0000000000dd0670
- (id)description;	// IMP=0x0000000000dd05c1
- (int)StringAsCategorys:(id)arg1;	// IMP=0x0000000000dd029a
- (id)categorysAsString:(int)arg1;	// IMP=0x0000000000dd0251
- (void)setCategorys:(int *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000dd022f
- (int)categoryAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000dd0159
- (void)addCategory:(int)arg1;	// IMP=0x0000000000dd0120
- (void)clearCategorys;	// IMP=0x0000000000dd0104
@property(readonly, nonatomic) int *categorys;
@property(readonly, nonatomic) unsigned long long categorysCount;
@property(nonatomic) _Bool hasMaxResults;
@property(nonatomic) int maxResults;
@property(nonatomic) _Bool hasRadius;
@property(nonatomic) int radius;
@property(retain, nonatomic) GEOLatLng *center;
- (void)dealloc;	// IMP=0x0000000000dcf583
- (id)initWithData:(id)arg1;	// IMP=0x0000000000dcf527
- (id)init;	// IMP=0x0000000000dcf4cb

@end
