//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface ALCLNatalieFeatures : PBCodable
{
    int _fEpochType;	// 8 = 0x8
    float _fIQRX;	// 12 = 0xc
    float _fIQRY;	// 16 = 0x10
    float _fIQRZ;	// 20 = 0x14
    float _fMachineFrequency;	// 24 = 0x18
    float _fVectorMagnitude;	// 28 = 0x1c
    _Bool _fStanding;	// 32 = 0x20
}

@property(nonatomic) _Bool fStanding; // @synthesize fStanding=_fStanding;
@property(nonatomic) int fEpochType; // @synthesize fEpochType=_fEpochType;
@property(nonatomic) float fMachineFrequency; // @synthesize fMachineFrequency=_fMachineFrequency;
@property(nonatomic) float fIQRZ; // @synthesize fIQRZ=_fIQRZ;
@property(nonatomic) float fIQRY; // @synthesize fIQRY=_fIQRY;
@property(nonatomic) float fIQRX; // @synthesize fIQRX=_fIQRX;
@property(nonatomic) float fVectorMagnitude; // @synthesize fVectorMagnitude=_fVectorMagnitude;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000fcc19
- (unsigned long long)hash;	// IMP=0x00100000000fc7a2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000fc6d6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000fc623
- (void)copyTo:(id)arg1;	// IMP=0x00100000000fc5ae
- (void)writeTo:(id)arg1;	// IMP=0x00100000000fc4f1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000fc4e4
- (id)dictionaryRepresentation;	// IMP=0x00100000000fbf2f
- (id)description;	// IMP=0x00100000000fbeb8
- (int)StringAsFEpochType:(id)arg1;	// IMP=0x00100000000fbe51
- (id)fEpochTypeAsString:(int)arg1;	// IMP=0x00100000000fbe18

@end

