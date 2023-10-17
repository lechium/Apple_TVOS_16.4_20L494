//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchQueryInterpretationMetadata : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSMutableArray *_featureMaps;	// 16 = 0x10
    NSMutableArray *_triggerFeatures;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    float _score;	// 44 = 0x2c
    _Bool _isFromRuntimeQueryTriggerStore;	// 48 = 0x30
    struct {
        unsigned int has_score:1;
        unsigned int has_isFromRuntimeQueryTriggerStore:1;
        unsigned int read_featureMaps:1;
        unsigned int read_triggerFeatures:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x0000000000ae6db8
- (unsigned long long)hash;	// IMP=0x0000000000ae6c26
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ae6acc
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ae66b4
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ae6319
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ae630a
- (id)jsonRepresentation;	// IMP=0x0000000000ae608c
- (id)dictionaryRepresentation;	// IMP=0x0000000000ae5b21
- (id)description;	// IMP=0x0000000000ae5a72
- (id)initWithData:(id)arg1;	// IMP=0x0000000000ae4f5d
- (id)init;	// IMP=0x0000000000ae4f01

@end

