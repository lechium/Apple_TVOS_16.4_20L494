//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDPOIClaimFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000c694b1
- (unsigned long long)hash;	// IMP=0x0000000000c694a9
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000c69464
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000c69409
- (void)writeTo:(id)arg1;	// IMP=0x0000000000c693ec
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000c693dd
- (id)jsonRepresentation;	// IMP=0x0000000000c692cb
- (id)dictionaryRepresentation;	// IMP=0x0000000000c69160
- (id)description;	// IMP=0x0000000000c690b1

@end

