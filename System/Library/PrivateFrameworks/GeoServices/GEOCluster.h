//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPlaceResult, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOCluster : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    CDStruct_95bda58d _indexs;	// 16 = 0x10
    GEOPlaceResult *_container;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int read_indexs:1;
        unsigned int read_container:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x00000000010c226c
- (unsigned long long)hash;	// IMP=0x00000000010c2226
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000010c215d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000010c1fd9
- (void)writeTo:(id)arg1;	// IMP=0x00000000010c1e00
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000010c1df1
- (id)jsonRepresentation;	// IMP=0x00000000010c1de2
- (id)dictionaryRepresentation;	// IMP=0x00000000010c1cbc
- (id)description;	// IMP=0x00000000010c1c0d
- (void)dealloc;	// IMP=0x00000000010c1436
- (id)initWithData:(id)arg1;	// IMP=0x00000000010c13da
- (id)init;	// IMP=0x00000000010c137e

@end

