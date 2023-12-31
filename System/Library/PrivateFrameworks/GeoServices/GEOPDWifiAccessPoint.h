//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDWifiAccessPoint : PBCodable
{
    PBUnknownFields *_unknownFields;	// 8 = 0x8
    NSString *_macId;	// 16 = 0x10
    unsigned long long _scanTimestamp;	// 24 = 0x18
    unsigned int _age;	// 32 = 0x20
    int _channel;	// 36 = 0x24
    int _rssi;	// 40 = 0x28
    struct {
        unsigned int has_scanTimestamp:1;
        unsigned int has_age:1;
        unsigned int has_channel:1;
        unsigned int has_rssi:1;
    } _flags;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x0000000000631851
- (unsigned long long)hash;	// IMP=0x00000000006317ac
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000631681
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000063157f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000631497
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000631488
- (id)jsonRepresentation;	// IMP=0x0000000000630e98
- (id)dictionaryRepresentation;	// IMP=0x0000000000630b7d
- (id)description;	// IMP=0x0000000000630ace
- (id)initWithGEOWifiAccessPoint:(id)arg1;	// IMP=0x0000000000a42970

@end

