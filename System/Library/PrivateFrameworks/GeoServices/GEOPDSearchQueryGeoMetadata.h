//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GEOPDSearchQueryGeoMetadata : PBCodable
{
    NSMutableArray *_namedFeatures;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000ac39c5
- (unsigned long long)hash;	// IMP=0x0000000000ac39a8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ac390e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ac3771
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ac3641
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ac3632
- (id)jsonRepresentation;	// IMP=0x0000000000ac3413
- (id)dictionaryRepresentation;	// IMP=0x0000000000ac3192
- (id)description;	// IMP=0x0000000000ac30e3

@end

