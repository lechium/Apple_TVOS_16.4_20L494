//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface _ADPBDeviceStartRemoteResponse : PBCodable
{
    _Bool _success;	// 8 = 0x8
    struct {
        unsigned int success:1;
    } _has;	// 12 = 0xc
}

@property(nonatomic) _Bool success; // @synthesize success=_success;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000ada0e
- (unsigned long long)hash;	// IMP=0x00100000000ad9e3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000ad941
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000ad8df
- (void)copyTo:(id)arg1;	// IMP=0x00100000000ad8bb
- (void)writeTo:(id)arg1;	// IMP=0x00100000000ad88f
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000ad882
- (id)dictionaryRepresentation;	// IMP=0x00100000000ad606
- (id)description;	// IMP=0x00100000000ad557
@property(nonatomic) _Bool hasSuccess;

@end

