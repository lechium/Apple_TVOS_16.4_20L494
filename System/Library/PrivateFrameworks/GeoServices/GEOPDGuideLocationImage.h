//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDCaptionedPhoto, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDGuideLocationImage : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDCaptionedPhoto *_image;	// 16 = 0x10
    int _imageType;	// 24 = 0x18
    struct {
        unsigned int has_imageType:1;
    } _flags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000c31d58
- (unsigned long long)hash;	// IMP=0x0000000000c31d0b
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c31c46
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c31ba0
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c31b21
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c31b12
- (id)jsonRepresentation;	// IMP=0x0000000000c317ce
- (id)dictionaryRepresentation;	// IMP=0x0000000000c31563
- (id)description;	// IMP=0x0000000000c314b4

@end
