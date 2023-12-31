//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface VCPProtoLivePhotoFrameInstruction : PBCodable
{
    CDStruct_fae3dc92 _homographyParams;	// 8 = 0x8
    long long _epoch;	// 32 = 0x20
    long long _timeValue;	// 40 = 0x28
    int _flags;	// 48 = 0x30
    int _timeScale;	// 52 = 0x34
}

+ (id)resultFromLegacyDictionary:(id)arg1;	// IMP=0x00100000000623eb
@property(nonatomic) int flags; // @synthesize flags=_flags;
@property(nonatomic) long long epoch; // @synthesize epoch=_epoch;
@property(nonatomic) int timeScale; // @synthesize timeScale=_timeScale;
@property(nonatomic) long long timeValue; // @synthesize timeValue=_timeValue;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000b8db3
- (unsigned long long)hash;	// IMP=0x00000000000b8d3e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b8c7a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b8be5
- (void)copyTo:(id)arg1;	// IMP=0x00000000000b8b05
- (void)writeTo:(id)arg1;	// IMP=0x00000000000b8a49
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000b8a3c
- (id)dictionaryRepresentation;	// IMP=0x00000000000b842a
- (id)description;	// IMP=0x00000000000b837b
- (void)setHomographyParams:(float *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000b8364
- (float)homographyParamAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000b8295
- (void)addHomographyParam:(float)arg1;	// IMP=0x00000000000b8284
- (void)clearHomographyParams;	// IMP=0x00000000000b8273
@property(readonly, nonatomic) float *homographyParams;
@property(readonly, nonatomic) unsigned long long homographyParamsCount;
- (void)dealloc;	// IMP=0x00000000000b8210
- (id)exportToLegacyDictionary;	// IMP=0x0000000000062607

@end

