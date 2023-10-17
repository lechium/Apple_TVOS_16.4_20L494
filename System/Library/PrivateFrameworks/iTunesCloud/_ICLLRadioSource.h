//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, _ICLLRadioSeed;

__attribute__((visibility("hidden")))
@interface _ICLLRadioSource : PBCodable
{
    NSString *_featureName;	// 8 = 0x8
    _ICLLRadioSeed *_seed;	// 16 = 0x10
    NSString *_stationId;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000d0743
- (unsigned long long)hash;	// IMP=0x00000000000d06d6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d05de
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d051a
- (void)writeTo:(id)arg1;	// IMP=0x00000000000d04a0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000d0493
- (id)dictionaryRepresentation;	// IMP=0x00000000000d03bc
- (id)description;	// IMP=0x00000000000d030d

@end
