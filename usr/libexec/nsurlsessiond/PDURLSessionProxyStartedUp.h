//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface PDURLSessionProxyStartedUp : PBCodable
{
    NSString *_launchUUID;	// 8 = 0x8
    unsigned int _version;	// 16 = 0x10
    CDStruct_f20694ce _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x002000000002c8fb
@property(retain, nonatomic) NSString *launchUUID; // @synthesize launchUUID=_launchUUID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000002c863
- (unsigned long long)hash;	// IMP=0x001000000002c817
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000002c752
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000002c6c2
- (void)copyTo:(id)arg1;	// IMP=0x001000000002c65f
- (void)writeTo:(id)arg1;	// IMP=0x001000000002c5fb
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000002c3f7
- (id)dictionaryRepresentation;	// IMP=0x001000000002c339
- (id)description;	// IMP=0x001000000002c28a
@property(readonly, nonatomic) _Bool hasLaunchUUID;
@property(nonatomic) _Bool hasVersion;

@end
