//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDExtendedGeoLookupResult : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSString *_dataSourceId;	// 16 = 0x10
    int _status;	// 24 = 0x18
    _Bool _primaryFeatureMatched;	// 28 = 0x1c
    struct {
        unsigned int has_status:1;
        unsigned int has_primaryFeatureMatched:1;
    } _flags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000052e3b4
- (unsigned long long)hash;	// IMP=0x000000000052e33c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000052e242
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000052e178
- (void)writeTo:(id)arg1;	// IMP=0x000000000052e0d0
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000052e0c1
- (id)jsonRepresentation;	// IMP=0x000000000052dc23
- (id)dictionaryRepresentation;	// IMP=0x000000000052d9a4
- (id)description;	// IMP=0x000000000052d8f5

@end

