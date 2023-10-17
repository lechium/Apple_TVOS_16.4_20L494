//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class _MPCProtoRadioContentReferenceLibraryAlbumContentReference, _MPCProtoRadioContentReferenceLibraryArtistContentReference, _MPCProtoRadioContentReferenceLibraryItemContentReference, _MPCProtoRadioContentReferenceStoreContentReference;

__attribute__((visibility("hidden")))
@interface _MPCProtoRadioContentReference : PBCodable
{
    _MPCProtoRadioContentReferenceLibraryAlbumContentReference *_libraryAlbumContentReference;	// 8 = 0x8
    _MPCProtoRadioContentReferenceLibraryArtistContentReference *_libraryArtistContentReference;	// 16 = 0x10
    _MPCProtoRadioContentReferenceLibraryItemContentReference *_libraryItemContentReference;	// 24 = 0x18
    _MPCProtoRadioContentReferenceStoreContentReference *_storeContentReference;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001a8342
- (unsigned long long)hash;	// IMP=0x00000000001a82be
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001a8192
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001a80a8
- (void)writeTo:(id)arg1;	// IMP=0x00000000001a8011
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001a8004
- (id)dictionaryRepresentation;	// IMP=0x00000000001a7e97
- (id)description;	// IMP=0x00000000001a7de8

@end

