//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDPublisherViewResultFilterAddress, GEOPDPublisherViewResultFilterKeyword, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPublisherViewResultFilter : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDPublisherViewResultFilterAddress *_filterAddress;	// 24 = 0x18
    GEOPDPublisherViewResultFilterKeyword *_filterKeyword;	// 32 = 0x20
    unsigned int _readerMarkPos;	// 40 = 0x28
    unsigned int _readerMarkLength;	// 44 = 0x2c
    struct os_unfair_lock_s _readerLock;	// 48 = 0x30
    int _filterType;	// 52 = 0x34
    CDStruct_85060554 _flags;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000005f9545
- (unsigned long long)hash;	// IMP=0x00000000005f94ba
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005f93a7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005f91bb
- (void)writeTo:(id)arg1;	// IMP=0x00000000005f8ff2
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005f8fe3
- (id)jsonRepresentation;	// IMP=0x00000000005f85a1
- (id)dictionaryRepresentation;	// IMP=0x00000000005f829d
- (id)description;	// IMP=0x00000000005f81ee
- (id)initWithData:(id)arg1;	// IMP=0x00000000005f77d9
- (id)init;	// IMP=0x00000000005f777d

@end
