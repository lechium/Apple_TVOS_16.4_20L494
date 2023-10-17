//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPBTransitRoutingIncidentMessage : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    CDStruct_9f2792e4 _transitIncidentIndexs;	// 24 = 0x18
    NSString *_routingMessage;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    unsigned int _routingIncidentMessageIndex;	// 68 = 0x44
    struct {
        unsigned int has_routingIncidentMessageIndex:1;
        unsigned int read_unknownFields:1;
        unsigned int read_transitIncidentIndexs:1;
        unsigned int read_routingMessage:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000e66539
- (unsigned long long)hash;	// IMP=0x0000000000e663b1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e662b7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e660e8
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e65f05
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e65ef6
- (id)jsonRepresentation;	// IMP=0x0000000000e65502
- (id)dictionaryRepresentation;	// IMP=0x0000000000e65287
- (id)description;	// IMP=0x0000000000e651d8
- (void)dealloc;	// IMP=0x0000000000e645be
- (id)initWithData:(id)arg1;	// IMP=0x0000000000e64562
- (id)init;	// IMP=0x0000000000e64506

@end
