//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOSearchAttributionManifest : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSMutableArray *_actionComponentMapEntries;	// 16 = 0x10
    NSMutableArray *_searchAttributionSources;	// 24 = 0x18
    NSString *_sourceURL;	// 32 = 0x20
    double _timestamp;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int has_timestamp:1;
        unsigned int read_actionComponentMapEntries:1;
        unsigned int read_searchAttributionSources:1;
        unsigned int read_sourceURL:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x00000000010d4d7c
@property(retain, nonatomic) NSString *sourceURL;
@property(readonly, nonatomic) _Bool hasSourceURL;
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) double timestamp;
- (unsigned long long)hash;	// IMP=0x00000000010d4a75
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000010d492c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000010d438e
- (void)writeTo:(id)arg1;	// IMP=0x00000000010d3fff
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000010d3ff2
- (id)jsonRepresentation;	// IMP=0x00000000010d3b13
- (id)dictionaryRepresentation;	// IMP=0x00000000010d35f8
- (id)description;	// IMP=0x00000000010d3549
- (id)initWithData:(id)arg1;	// IMP=0x00000000010d2ab7
- (id)init;	// IMP=0x00000000010d2a5b

@end

