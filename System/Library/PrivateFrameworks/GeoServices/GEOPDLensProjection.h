//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOPDLensProjection : PBCodable
{
    double _cx;	// 8 = 0x8
    double _cy;	// 16 = 0x10
    double _fovH;	// 24 = 0x18
    double _fovS;	// 32 = 0x20
    double _k2;	// 40 = 0x28
    double _k3;	// 48 = 0x30
    double _k4;	// 56 = 0x38
    double _lx;	// 64 = 0x40
    double _ly;	// 72 = 0x48
    int _type;	// 80 = 0x50
    struct {
        unsigned int has_cx:1;
        unsigned int has_cy:1;
        unsigned int has_fovH:1;
        unsigned int has_fovS:1;
        unsigned int has_k2:1;
        unsigned int has_k3:1;
        unsigned int has_k4:1;
        unsigned int has_lx:1;
        unsigned int has_ly:1;
        unsigned int has_type:1;
    } _flags;	// 84 = 0x54
}

- (unsigned long long)hash;	// IMP=0x00000000011483d2
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000114817d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001148007
- (void)writeTo:(id)arg1;	// IMP=0x0000000001147e7f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000001147e70
- (id)jsonRepresentation;	// IMP=0x0000000001147e61
- (id)dictionaryRepresentation;	// IMP=0x0000000001147a21
- (id)description;	// IMP=0x0000000001147972

@end

