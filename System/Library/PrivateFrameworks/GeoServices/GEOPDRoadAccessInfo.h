//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDRoadAccessInfo : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_roadAccessPoints;	// 16 = 0x10
}

+ (id)roadAccessInfoForPlaceData:(id)arg1;	// IMP=0x0010000000a3b178
- (void).cxx_destruct;	// IMP=0x0000000000cbbd6a
- (unsigned long long)hash;	// IMP=0x0000000000cbbd4d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000cbbcb3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000cbbaf3
- (void)writeTo:(id)arg1;	// IMP=0x0000000000cbb994
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000cbb985
- (id)jsonRepresentation;	// IMP=0x0000000000cbb873
- (id)dictionaryRepresentation;	// IMP=0x0000000000cbb4d0
- (id)description;	// IMP=0x0000000000cbb421

@end
