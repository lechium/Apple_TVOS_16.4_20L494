//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchSectionList : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_sections;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000e3f9a5
- (unsigned long long)hash;	// IMP=0x0000000000e3f988
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e3f8ee
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e3f72e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e3f5cf
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e3f5c0
- (id)jsonRepresentation;	// IMP=0x0000000000e3e4a9
- (id)dictionaryRepresentation;	// IMP=0x0000000000e3e118
- (id)description;	// IMP=0x0000000000e3e069

@end

