//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPDSearchMultiMapRegion : PBCodable
{
    NSMutableArray *_mapRegions;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000410b49
- (unsigned long long)hash;	// IMP=0x0000000000410b2c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000410a92
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004108f5
- (void)writeTo:(id)arg1;	// IMP=0x00000000004107c5
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000004107b6
- (id)jsonRepresentation;	// IMP=0x00000000004107a7
- (id)dictionaryRepresentation;	// IMP=0x0000000000410526
- (id)description;	// IMP=0x0000000000410477

@end
