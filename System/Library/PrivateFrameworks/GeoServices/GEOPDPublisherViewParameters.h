//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDMapsIdentifier, GEOPDPublisherViewResultFilter, GEOPDViewportInfo, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPublisherViewParameters : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDMapsIdentifier *_publisherId;	// 24 = 0x18
    GEOPDPublisherViewResultFilter *_resultFilter;	// 32 = 0x20
    GEOPDViewportInfo *_viewportInfo;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    unsigned int _numClientizedResults;	// 60 = 0x3c
    struct {
        unsigned int has_numClientizedResults:1;
        unsigned int read_unknownFields:1;
        unsigned int read_publisherId:1;
        unsigned int read_resultFilter:1;
        unsigned int read_viewportInfo:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000005f5a23
- (unsigned long long)hash;	// IMP=0x00000000005f58aa
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005f5767
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005f553a
- (void)writeTo:(id)arg1;	// IMP=0x00000000005f52fd
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005f52ee
- (id)jsonRepresentation;	// IMP=0x00000000005f4a5c
- (id)dictionaryRepresentation;	// IMP=0x00000000005f46d2
- (id)description;	// IMP=0x00000000005f4623
- (id)initWithData:(id)arg1;	// IMP=0x00000000005f39ce
- (id)init;	// IMP=0x00000000005f3972

@end

