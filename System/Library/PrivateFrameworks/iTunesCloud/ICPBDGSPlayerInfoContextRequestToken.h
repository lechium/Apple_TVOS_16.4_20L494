//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface ICPBDGSPlayerInfoContextRequestToken : PBCodable
{
    unsigned long long _accountID;	// 8 = 0x8
    unsigned long long _sessionID;	// 16 = 0x10
    NSData *_token;	// 24 = 0x18
    struct {
        unsigned int accountID:1;
        unsigned int sessionID:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000001afcea
- (unsigned long long)hash;	// IMP=0x00000000001afc75
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001afb86
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001afad0
- (void)writeTo:(id)arg1;	// IMP=0x00000000001afa42
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001afa35
- (id)dictionaryRepresentation;	// IMP=0x00000000001af917
- (id)description;	// IMP=0x00000000001af868

@end

