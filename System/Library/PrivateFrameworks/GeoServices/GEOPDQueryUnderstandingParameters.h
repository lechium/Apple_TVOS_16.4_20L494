//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDViewportInfo, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDQueryUnderstandingParameters : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_searchString;	// 24 = 0x18
    GEOPDViewportInfo *_viewportInfo;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    int _type;	// 52 = 0x34
    int _workflow;	// 56 = 0x38
    struct {
        unsigned int has_type:1;
        unsigned int has_workflow:1;
        unsigned int read_unknownFields:1;
        unsigned int read_searchString:1;
        unsigned int read_viewportInfo:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x00000000005fb781
- (unsigned long long)hash;	// IMP=0x00000000005fb6cb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005fb57a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005fb36a
- (void)writeTo:(id)arg1;	// IMP=0x00000000005fb182
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005fb173
- (id)jsonRepresentation;	// IMP=0x00000000005fb061
- (id)dictionaryRepresentation;	// IMP=0x00000000005fac5f
- (id)description;	// IMP=0x00000000005fabb0
- (id)initWithData:(id)arg1;	// IMP=0x00000000005fa210
- (id)init;	// IMP=0x00000000005fa1b4

@end

