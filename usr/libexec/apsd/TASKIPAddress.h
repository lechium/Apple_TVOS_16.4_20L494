//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData;

@interface TASKIPAddress : PBCodable
{
    NSData *_ipAddress;	// 8 = 0x8
    unsigned int _ttl;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000095e7b
@property(nonatomic) unsigned int ttl; // @synthesize ttl=_ttl;
@property(retain, nonatomic) NSData *ipAddress; // @synthesize ipAddress=_ipAddress;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000095de5
- (unsigned long long)hash;	// IMP=0x0010000000095da7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000095cff
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000095c79
- (void)copyTo:(id)arg1;	// IMP=0x0010000000095c1f
- (void)writeTo:(id)arg1;	// IMP=0x0010000000095bc0
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000095bb3
- (id)dictionaryRepresentation;	// IMP=0x00100000000958f8
- (id)description;	// IMP=0x0010000000095849

@end

