//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPBTransitIncidentEntityFilter : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    CDStruct_62a50c50 _nextStopMuids;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000e54052
- (unsigned long long)hash;	// IMP=0x0000000000e54041
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000e53fde
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000e53f70
- (void)writeTo:(id)arg1;	// IMP=0x0000000000e53efa
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000e53eeb
- (id)jsonRepresentation;	// IMP=0x0000000000e53dd9
- (id)dictionaryRepresentation;	// IMP=0x0000000000e53c1b
- (id)description;	// IMP=0x0000000000e53b6c
- (void)dealloc;	// IMP=0x0000000000e53a4d

@end
