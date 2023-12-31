//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface TRANSITPbTransitMacTile : PBCodable
{
    double _generationTimeSecs;	// 8 = 0x8
    int _expirationAgeSecs;	// 16 = 0x10
    NSMutableArray *_macs;	// 24 = 0x18
    int _tileX;	// 32 = 0x20
    int _tileY;	// 36 = 0x24
    int _version;	// 40 = 0x28
    struct {
        unsigned int generationTimeSecs:1;
        unsigned int expirationAgeSecs:1;
        unsigned int tileX:1;
        unsigned int tileY:1;
        unsigned int version:1;
    } _has;	// 44 = 0x2c
}

+ (Class)macsType;	// IMP=0x002000000038ba2d
@property(retain, nonatomic) NSMutableArray *macs; // @synthesize macs=_macs;
@property(nonatomic) int expirationAgeSecs; // @synthesize expirationAgeSecs=_expirationAgeSecs;
@property(nonatomic) double generationTimeSecs; // @synthesize generationTimeSecs=_generationTimeSecs;
@property(nonatomic) int tileY; // @synthesize tileY=_tileY;
@property(nonatomic) int tileX; // @synthesize tileX=_tileX;
@property(nonatomic) int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000038ca85
- (unsigned long long)hash;	// IMP=0x001000000038c8db
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000038c7b2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000038c558
- (void)copyTo:(id)arg1;	// IMP=0x001000000038c436
- (void)writeTo:(id)arg1;	// IMP=0x001000000038c285
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000038c278
- (id)dictionaryRepresentation;	// IMP=0x001000000038bab5
- (id)description;	// IMP=0x001000000038ba3e
- (id)macsAtIndex:(unsigned long long)arg1;	// IMP=0x001000000038ba10
- (unsigned long long)macsCount;	// IMP=0x001000000038b9f3
- (void)addMacs:(id)arg1;	// IMP=0x001000000038b9a6
- (void)clearMacs;	// IMP=0x001000000038b989
@property(nonatomic) _Bool hasExpirationAgeSecs;
@property(nonatomic) _Bool hasGenerationTimeSecs;
@property(nonatomic) _Bool hasTileY;
@property(nonatomic) _Bool hasTileX;
@property(nonatomic) _Bool hasVersion;
- (void)dealloc;	// IMP=0x001000000038b7d8

@end

