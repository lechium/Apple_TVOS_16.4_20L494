//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface SDUnlockStateResponse : PBCodable
{
    unsigned int _version;	// 8 = 0x8
    _Bool _passcodeEnabled;	// 12 = 0xc
    _Bool _unlockEnabled;	// 13 = 0xd
    struct {
        unsigned int version:1;
        unsigned int passcodeEnabled:1;
        unsigned int unlockEnabled:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) _Bool passcodeEnabled; // @synthesize passcodeEnabled=_passcodeEnabled;
@property(nonatomic) _Bool unlockEnabled; // @synthesize unlockEnabled=_unlockEnabled;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000c7460
- (unsigned long long)hash;	// IMP=0x00100000000c73fe
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000c7310
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000c727a
- (void)copyTo:(id)arg1;	// IMP=0x00100000000c7207
- (void)writeTo:(id)arg1;	// IMP=0x00100000000c7175
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000c7168
- (id)dictionaryRepresentation;	// IMP=0x00100000000c6cec
- (id)description;	// IMP=0x00100000000c6c3d
@property(nonatomic) _Bool hasPasscodeEnabled;
@property(nonatomic) _Bool hasUnlockEnabled;
@property(nonatomic) _Bool hasVersion;

@end
