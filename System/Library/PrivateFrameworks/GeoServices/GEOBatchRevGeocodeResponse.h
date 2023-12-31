//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOBatchRevGeocodeResponse : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSMutableArray *_batchPlaceResults;	// 16 = 0x10
    NSMutableArray *_clusters;	// 24 = 0x18
    double _timestamp;	// 32 = 0x20
    NSMutableArray *_versionDomains;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    int _statusCode;	// 60 = 0x3c
    unsigned int _ttl;	// 64 = 0x40
    unsigned int _version;	// 68 = 0x44
    struct {
        unsigned int has_timestamp:1;
        unsigned int has_statusCode:1;
        unsigned int has_ttl:1;
        unsigned int has_version:1;
        unsigned int read_batchPlaceResults:1;
        unsigned int read_clusters:1;
        unsigned int read_versionDomains:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 72 = 0x48
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00100000010bf05f
+ (Class)versionDomainType;	// IMP=0x00100000010bd3ba
+ (Class)batchPlaceResultType;	// IMP=0x00100000010bd0e5
+ (Class)clusterType;	// IMP=0x00100000010bce80
- (void).cxx_destruct;	// IMP=0x00000000010c132b
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000010c0f61
- (unsigned long long)hash;	// IMP=0x00000000010c0d6f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000010c0b8c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000010c05a8
- (void)copyTo:(id)arg1;	// IMP=0x00000000010c02e8
- (_Bool)hasGreenTeaWithValue:(_Bool)arg1;	// IMP=0x00000000010c0047
- (void)clearSensitiveFields:(unsigned long long)arg1;	// IMP=0x00000000010bfcdc
- (void)writeTo:(id)arg1;	// IMP=0x00000000010bf819
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000010bf80c
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000010beba5
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000010beb93
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000010bdc3b
- (id)jsonRepresentation;	// IMP=0x00000000010bdc2c
- (id)dictionaryRepresentation;	// IMP=0x00000000010bd534
- (id)description;	// IMP=0x00000000010bd485
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) double timestamp;
@property(nonatomic) _Bool hasVersion;
@property(nonatomic) unsigned int version;
- (id)versionDomainAtIndex:(unsigned long long)arg1;	// IMP=0x00000000010bd389
- (unsigned long long)versionDomainsCount;	// IMP=0x00000000010bd35d
- (void)addVersionDomain:(id)arg1;	// IMP=0x00000000010bd2a9
- (void)clearVersionDomains;	// IMP=0x00000000010bd281
@property(retain, nonatomic) NSMutableArray *versionDomains;
@property(nonatomic) _Bool hasTtl;
@property(nonatomic) unsigned int ttl;
- (id)batchPlaceResultAtIndex:(unsigned long long)arg1;	// IMP=0x00000000010bd0b4
- (unsigned long long)batchPlaceResultsCount;	// IMP=0x00000000010bd088
- (void)addBatchPlaceResult:(id)arg1;	// IMP=0x00000000010bcfd4
- (void)clearBatchPlaceResults;	// IMP=0x00000000010bcfac
@property(retain, nonatomic) NSMutableArray *batchPlaceResults;
- (id)clusterAtIndex:(unsigned long long)arg1;	// IMP=0x00000000010bce4f
- (unsigned long long)clustersCount;	// IMP=0x00000000010bce23
- (void)addCluster:(id)arg1;	// IMP=0x00000000010bcd6f
- (void)clearClusters;	// IMP=0x00000000010bcd47
@property(retain, nonatomic) NSMutableArray *clusters;
- (int)StringAsStatusCode:(id)arg1;	// IMP=0x00000000010bc118
- (id)statusCodeAsString:(int)arg1;	// IMP=0x00000000010bc03e
@property(nonatomic) _Bool hasStatusCode;
@property(nonatomic) int statusCode;
- (id)initWithData:(id)arg1;	// IMP=0x00000000010bbf77
- (id)init;	// IMP=0x00000000010bbf1b

@end

