//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDCategorizedPhotos : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    NSString *_categoryId;	// 24 = 0x18
    NSMutableArray *_categoryNames;	// 32 = 0x20
    NSMutableArray *_photos;	// 40 = 0x28
    unsigned int _readerMarkPos;	// 48 = 0x30
    unsigned int _readerMarkLength;	// 52 = 0x34
    struct os_unfair_lock_s _readerLock;	// 56 = 0x38
    int _photosAvailable;	// 60 = 0x3c
    struct {
        unsigned int has_photosAvailable:1;
        unsigned int read_unknownFields:1;
        unsigned int read_categoryId:1;
        unsigned int read_categoryNames:1;
        unsigned int read_photos:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000b689e9
- (unsigned long long)hash;	// IMP=0x0000000000b68946
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b68803
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b683db
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b68036
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b68027
- (id)jsonRepresentation;	// IMP=0x0000000000b67ca6
- (id)dictionaryRepresentation;	// IMP=0x0000000000b67658
- (id)description;	// IMP=0x0000000000b675a9
- (id)initWithData:(id)arg1;	// IMP=0x0000000000b66645
- (id)init;	// IMP=0x0000000000b665e9
- (id)displayTitle;	// IMP=0x0000000000a433e3

@end

