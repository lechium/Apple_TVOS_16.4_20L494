//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDGuideGroupFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000c31477
- (unsigned long long)hash;	// IMP=0x0000000000c3146f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c3142a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c313cf
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c313b2
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c313a3
- (id)jsonRepresentation;	// IMP=0x0000000000c31291
- (id)dictionaryRepresentation;	// IMP=0x0000000000c31126
- (id)description;	// IMP=0x0000000000c31077

@end

