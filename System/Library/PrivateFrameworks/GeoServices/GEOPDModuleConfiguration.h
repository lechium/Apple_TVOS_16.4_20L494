//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDModuleConfigurationValue, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDModuleConfiguration : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    GEOPDModuleConfigurationValue *_moduleConfigurationValue;	// 16 = 0x10
    int _moduleConfigurationType;	// 24 = 0x18
    struct {
        unsigned int has_moduleConfigurationType:1;
    } _flags;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0000000000c5e3fe
- (unsigned long long)hash;	// IMP=0x0000000000c5e3b1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c5e2ec
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c5e246
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c5e1c7
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c5e1b8
- (id)jsonRepresentation;	// IMP=0x0000000000c5bb64
- (id)dictionaryRepresentation;	// IMP=0x0000000000c5b8e4
- (id)description;	// IMP=0x0000000000c5b835

@end

