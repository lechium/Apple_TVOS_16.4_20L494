//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDNearestTransitParameters : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    unsigned long long _lineMuid;	// 16 = 0x10
    _Bool _isTransitOnly;	// 24 = 0x18
    struct {
        unsigned int has_lineMuid:1;
        unsigned int has_isTransitOnly:1;
    } _flags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x000000000056deab
- (unsigned long long)hash;	// IMP=0x000000000056de65
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000056dda2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000056dd04
- (void)writeTo:(id)arg1;	// IMP=0x000000000056dc76
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000056dc67
- (id)jsonRepresentation;	// IMP=0x000000000056db55
- (id)dictionaryRepresentation;	// IMP=0x000000000056d916
- (id)description;	// IMP=0x000000000056d867

@end

