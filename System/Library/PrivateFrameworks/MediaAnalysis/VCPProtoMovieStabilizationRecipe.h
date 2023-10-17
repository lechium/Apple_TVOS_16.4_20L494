//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface VCPProtoMovieStabilizationRecipe : PBCodable
{
    CDStruct_fae3dc92 _homographyParams;	// 8 = 0x8
    struct {
        long long *list;
        unsigned long long count;
        unsigned long long size;
    } _timeValues;	// 32 = 0x20
    float _cropRectHeight;	// 56 = 0x38
    float _cropRectWidth;	// 60 = 0x3c
    float _cropRectX;	// 64 = 0x40
    float _cropRectY;	// 68 = 0x44
    float _inputBoundsHeight;	// 72 = 0x48
    float _inputBoundsWidth;	// 76 = 0x4c
    float _inputBoundsX;	// 80 = 0x50
    float _inputBoundsY;	// 84 = 0x54
    float _sourceSizeHeight;	// 88 = 0x58
    float _sourceSizeWidth;	// 92 = 0x5c
    int _timeScale;	// 96 = 0x60
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000002202ae
@property(nonatomic) int timeScale; // @synthesize timeScale=_timeScale;
@property(nonatomic) float sourceSizeWidth; // @synthesize sourceSizeWidth=_sourceSizeWidth;
@property(nonatomic) float sourceSizeHeight; // @synthesize sourceSizeHeight=_sourceSizeHeight;
@property(nonatomic) float inputBoundsWidth; // @synthesize inputBoundsWidth=_inputBoundsWidth;
@property(nonatomic) float inputBoundsHeight; // @synthesize inputBoundsHeight=_inputBoundsHeight;
@property(nonatomic) float inputBoundsY; // @synthesize inputBoundsY=_inputBoundsY;
@property(nonatomic) float inputBoundsX; // @synthesize inputBoundsX=_inputBoundsX;
@property(nonatomic) float cropRectWidth; // @synthesize cropRectWidth=_cropRectWidth;
@property(nonatomic) float cropRectHeight; // @synthesize cropRectHeight=_cropRectHeight;
@property(nonatomic) float cropRectY; // @synthesize cropRectY=_cropRectY;
@property(nonatomic) float cropRectX; // @synthesize cropRectX=_cropRectX;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000269358
- (unsigned long long)hash;	// IMP=0x0000000000268a8c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002688cd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000268798
- (void)copyTo:(id)arg1;	// IMP=0x00000000002685bc
- (void)writeTo:(id)arg1;	// IMP=0x00000000002683c1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002683b4
- (id)dictionaryRepresentation;	// IMP=0x0000000000267875
- (id)description;	// IMP=0x00000000002677c6
- (void)setHomographyParams:(float *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000002677af
- (float)homographyParamsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002676e0
- (void)addHomographyParams:(float)arg1;	// IMP=0x00000000002676cf
- (void)clearHomographyParams;	// IMP=0x00000000002676be
@property(readonly, nonatomic) float *homographyParams;
@property(readonly, nonatomic) unsigned long long homographyParamsCount;
- (void)setTimeValues:(long long *)arg1 count:(unsigned long long)arg2;	// IMP=0x0000000000267684
- (long long)timeValueAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002675b7
- (void)addTimeValue:(long long)arg1;	// IMP=0x00000000002675a3
- (void)clearTimeValues;	// IMP=0x0000000000267592
@property(readonly, nonatomic) long long *timeValues;
@property(readonly, nonatomic) unsigned long long timeValuesCount;
- (void)dealloc;	// IMP=0x0000000000267520
- (id)exportToLegacyDictionary;	// IMP=0x0000000000220c0e

@end

