//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDQueryUnderstandingResult : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSMutableArray *_queryIntents;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000005fc18f
- (unsigned long long)hash;	// IMP=0x00000000005fc172
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005fc0d8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000005fbf18
- (void)writeTo:(id)arg1;	// IMP=0x00000000005fbdb9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005fbdaa
- (id)jsonRepresentation;	// IMP=0x00000000005fbc98
- (id)dictionaryRepresentation;	// IMP=0x00000000005fb8f5
- (id)description;	// IMP=0x00000000005fb846

@end
