//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDQuickLinkFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    int _quickLinkItemsCount;	// 16 = 0x10
    struct {
        unsigned int has_quickLinkItemsCount:1;
    } _flags;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x0000000000ca7703
- (unsigned long long)hash;	// IMP=0x0000000000ca76d8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ca7646
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ca75c6
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ca7564
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ca7555
- (id)jsonRepresentation;	// IMP=0x0000000000ca7443
- (id)dictionaryRepresentation;	// IMP=0x0000000000ca7270
- (id)description;	// IMP=0x0000000000ca71c1

@end

