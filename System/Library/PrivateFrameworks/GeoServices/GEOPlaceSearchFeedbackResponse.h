//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

__attribute__((visibility("hidden")))
@interface GEOPlaceSearchFeedbackResponse : PBCodable
{
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x0010000000725c90
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000726001
- (unsigned long long)hash;	// IMP=0x0000000000725fe7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000725f65
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000725f2c
- (void)copyTo:(id)arg1;	// IMP=0x0000000000725f18
- (void)writeTo:(id)arg1;	// IMP=0x0000000000725f12
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000725dce
- (void)readAll:(_Bool)arg1;	// IMP=0x0000000000725c8a
- (id)initWithJSON:(id)arg1;	// IMP=0x0000000000725c7d
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000725c2d
- (id)jsonRepresentation;	// IMP=0x0000000000725c23
- (id)dictionaryRepresentation;	// IMP=0x0000000000725bcc
- (id)description;	// IMP=0x0000000000725b1d

@end

