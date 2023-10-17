//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOPDSearchBrandRelationship : PBCodable
{
    unsigned long long _expandedParentMuid;	// 8 = 0x8
    unsigned long long _muid;	// 16 = 0x10
    unsigned long long _parentMuid;	// 24 = 0x18
    NSString *_relationshipType;	// 32 = 0x20
    struct {
        unsigned int has_expandedParentMuid:1;
        unsigned int has_muid:1;
        unsigned int has_parentMuid:1;
    } _flags;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000012ac296
- (unsigned long long)hash;	// IMP=0x00000000012ac20d
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000012ac106
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000012ac033
- (void)writeTo:(id)arg1;	// IMP=0x00000000012abf83
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000012abf74
- (id)jsonRepresentation;	// IMP=0x00000000012ab9a9
- (id)dictionaryRepresentation;	// IMP=0x00000000012ab7e1
- (id)description;	// IMP=0x00000000012ab732

@end

