//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDAttribution, GEOPDJoeColor, GEOPDPhoto, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDCaptionedPhoto : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDAttribution *_attribution;	// 24 = 0x18
    NSString *_author;	// 32 = 0x20
    NSString *_caption;	// 40 = 0x28
    double _dateAdded;	// 48 = 0x30
    GEOPDJoeColor *_joeColor;	// 56 = 0x38
    NSString *_licenseDescription;	// 64 = 0x40
    NSString *_licenseUrl;	// 72 = 0x48
    GEOPDPhoto *_photo;	// 80 = 0x50
    unsigned int _readerMarkPos;	// 88 = 0x58
    unsigned int _readerMarkLength;	// 92 = 0x5c
    struct os_unfair_lock_s _readerLock;	// 96 = 0x60
    _Bool _displayFullPhotoInline;	// 100 = 0x64
    _Bool _displayFullScreenPhotoGallery;	// 101 = 0x65
    _Bool _highQuality;	// 102 = 0x66
    _Bool _isBusinessOwned;	// 103 = 0x67
    _Bool _obfuscateFullScreenPhoto;	// 104 = 0x68
    _Bool _useGallery;	// 105 = 0x69
    struct {
        unsigned int has_dateAdded:1;
        unsigned int has_displayFullPhotoInline:1;
        unsigned int has_displayFullScreenPhotoGallery:1;
        unsigned int has_highQuality:1;
        unsigned int has_isBusinessOwned:1;
        unsigned int has_obfuscateFullScreenPhoto:1;
        unsigned int has_useGallery:1;
        unsigned int read_unknownFields:1;
        unsigned int read_attribution:1;
        unsigned int read_author:1;
        unsigned int read_caption:1;
        unsigned int read_joeColor:1;
        unsigned int read_licenseDescription:1;
        unsigned int read_licenseUrl:1;
        unsigned int read_photo:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 108 = 0x6c
}

+ (id)captionedPhotosForPlaceData:(id)arg1;	// IMP=0x0010000000a3fa90
- (void).cxx_destruct;	// IMP=0x0000000000b64ebd
- (unsigned long long)hash;	// IMP=0x0000000000b64605
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b64291
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b63eee
- (void)writeTo:(id)arg1;	// IMP=0x0000000000b63bbf
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000b63bb0
- (id)jsonRepresentation;	// IMP=0x0000000000b6267e
- (id)dictionaryRepresentation;	// IMP=0x0000000000b61f87
- (id)description;	// IMP=0x0000000000b61ed8
- (id)initWithData:(id)arg1;	// IMP=0x0000000000b60430
- (id)init;	// IMP=0x0000000000b603d4

@end
