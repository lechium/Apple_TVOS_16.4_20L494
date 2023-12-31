//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOCoarseLocationRing : PBCodable
{
    struct GEOCoarseLocationPoint *_points;	// 8 = 0x8
    unsigned long long _pointsCount;	// 16 = 0x10
    unsigned long long _pointsSpace;	// 24 = 0x18
}

- (unsigned long long)hash;	// IMP=0x00000000002a9e49
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002a9db4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002a9d2e
- (void)writeTo:(id)arg1;	// IMP=0x00000000002a9c82
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002a9c73
- (id)jsonRepresentation;	// IMP=0x00000000002a9c69
- (id)dictionaryRepresentation;	// IMP=0x00000000002a9a69
- (id)description;	// IMP=0x00000000002a99ba
- (void)dealloc;	// IMP=0x00000000002a978d

@end

