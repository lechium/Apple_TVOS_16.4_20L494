//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOMapLayerDataServiceLayer : PBCodable
{
    unsigned int _identifier;	// 8 = 0x8
    struct {
        unsigned int has_identifier:1;
    } _flags;	// 12 = 0xc
}

- (unsigned long long)hash;	// IMP=0x00000000011a2af7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000011a2a65
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000011a2a03
- (void)writeTo:(id)arg1;	// IMP=0x00000000011a29d8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000011a29c9
- (id)jsonRepresentation;	// IMP=0x00000000011a29bf
- (id)dictionaryRepresentation;	// IMP=0x00000000011a290f
- (id)description;	// IMP=0x00000000011a2860

@end

