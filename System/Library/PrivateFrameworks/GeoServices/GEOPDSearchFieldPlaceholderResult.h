//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDSearchFieldPlaceholderResult : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSString *_displayString;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000607f2c
- (unsigned long long)hash;	// IMP=0x0000000000607f0f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000607e75
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000607dea
- (void)writeTo:(id)arg1;	// IMP=0x0000000000607d8f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000607d80
- (id)jsonRepresentation;	// IMP=0x0000000000607c6e
- (id)dictionaryRepresentation;	// IMP=0x0000000000607ace
- (id)description;	// IMP=0x0000000000607a1f

@end

