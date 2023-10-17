//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface TRANSITPbLocationFingerprintsV1 : PBCodable
{
    NSMutableArray *_locationFingerprints;	// 8 = 0x8
}

@property(retain, nonatomic) NSMutableArray *locationFingerprints; // @synthesize locationFingerprints=_locationFingerprints;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000008a10bf
- (unsigned long long)hash;	// IMP=0x00100000008a10a2
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000008a103e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000008a0e9c
- (void)copyTo:(id)arg1;	// IMP=0x00100000008a0e0e
- (void)writeTo:(id)arg1;	// IMP=0x00100000008a0d08
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000008a0cfb
- (id);	// IMP=0x00100000008a0952
- (id)description;	// IMP=0x00100000008a08db
- (id)locationFingerprintAtIndex:(unsigned long long)arg1;	// IMP=0x00100000008a08be
- (unsigned long long)locationFingerprintsCount;	// IMP=0x00100000008a08a1
- (void)addLocationFingerprint:(id)arg1;	// IMP=0x00100000008a0854
- (void)clearLocationFingerprints;	// IMP=0x00100000008a0837
- (void)dealloc;	// IMP=0x00100000008a07f7

@end

