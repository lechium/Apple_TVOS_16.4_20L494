//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDTransitPaymentMethodInfo : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    double _cachingRadiusMeters;	// 24 = 0x18
    NSMutableArray *_paymentMethodSuggestions;	// 32 = 0x20
    NSMutableArray *_paymentMethods;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    struct {
        unsigned int has_cachingRadiusMeters:1;
        unsigned int read_unknownFields:1;
        unsigned int read_paymentMethodSuggestions:1;
        unsigned int read_paymentMethods:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 60 = 0x3c
}

- (void).cxx_destruct;	// IMP=0x0000000000cf24b6
- (unsigned long long)hash;	// IMP=0x0000000000cf235e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cf2249
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cf1e38
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cf1aaf
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cf1aa0
- (id)jsonRepresentation;	// IMP=0x0000000000cf18c6
- (id)dictionaryRepresentation;	// IMP=0x0000000000cf12b4
- (id)description;	// IMP=0x0000000000cf1205
- (id)initWithData:(id)arg1;	// IMP=0x0000000000cf0403
- (id)init;	// IMP=0x0000000000cf03a7

@end

