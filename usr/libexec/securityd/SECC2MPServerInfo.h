//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface SECC2MPServerInfo : PBCodable
{
    NSString *_partition;	// 8 = 0x8
    NSString *_serviceBuild;	// 16 = 0x10
    NSString *_serviceInstance;	// 24 = 0x18
    NSString *_serviceName;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000001d46fb
@property(retain, nonatomic) NSString *serviceInstance; // @synthesize serviceInstance=_serviceInstance;
@property(retain, nonatomic) NSString *serviceBuild; // @synthesize serviceBuild=_serviceBuild;
@property(retain, nonatomic) NSString *partition; // @synthesize partition=_partition;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000001d45c4
- (unsigned long long)hash;	// IMP=0x00100000001d4540
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001d4414
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001d432a
- (void)copyTo:(id)arg1;	// IMP=0x00100000001d4287
- (void)writeTo:(id)arg1;	// IMP=0x00100000001d41f0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001d41e3
- (id)dictionaryRepresentation;	// IMP=0x00100000001d4112
- (id)description;	// IMP=0x00100000001d4063
@property(readonly, nonatomic) _Bool hasServiceInstance;
@property(readonly, nonatomic) _Bool hasServiceBuild;
@property(readonly, nonatomic) _Bool hasPartition;
@property(readonly, nonatomic) _Bool hasServiceName;

@end
