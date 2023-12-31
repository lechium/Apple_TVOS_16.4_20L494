//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface SDUnlockStashConfirmation : PBCodable
{
    unsigned int _sessionID;	// 8 = 0x8
    unsigned int _version;	// 12 = 0xc
    _Bool _success;	// 16 = 0x10
    struct {
        unsigned int sessionID:1;
        unsigned int version:1;
        unsigned int success:1;
    } _has;	// 20 = 0x14
}

@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000004eed
- (unsigned long long)hash;	// IMP=0x0010000000004e8c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000004da9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000004d13
- (void)copyTo:(id)arg1;	// IMP=0x0010000000004ca0
- (void)writeTo:(id)arg1;	// IMP=0x0010000000004c0f
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000004c02
- (id)dictionaryRepresentation;	// IMP=0x0010000000004792
- (id)description;	// IMP=0x00100000000046e3
@property(nonatomic) _Bool hasSuccess;
@property(nonatomic) _Bool hasSessionID;
@property(nonatomic) _Bool hasVersion;

@end

