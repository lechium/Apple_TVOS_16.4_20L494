//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDHoursThreshold : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    unsigned int _closingSoonMessageThresholdSecond;	// 16 = 0x10
    unsigned int _openingSoonMessageThresholdSecond;	// 20 = 0x14
    struct {
        unsigned int has_closingSoonMessageThresholdSecond:1;
        unsigned int has_openingSoonMessageThresholdSecond:1;
    } _flags;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000c3a5bd
- (unsigned long long)hash;	// IMP=0x0000000000c3a579
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c3a4c6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c3a429
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c3a39d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c3a38e
- (id)jsonRepresentation;	// IMP=0x0000000000c3a11e
- (id)dictionaryRepresentation;	// IMP=0x0000000000c39ee1
- (id)description;	// IMP=0x0000000000c39e32

@end

