//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSString;

@interface CKCDPStopContainerRequest : PBRequest
{
    NSString *_containerName;	// 8 = 0x8
    NSString *_environment;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000253b91
@property(retain, nonatomic) NSString *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) NSString *containerName; // @synthesize containerName=_containerName;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000253ae4
- (unsigned long long)hash;	// IMP=0x0000000000253a97
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002539cf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000253931
- (void)copyTo:(id)arg1;	// IMP=0x00000000002538ce
- (Class)responseClass;	// IMP=0x00000000002538bd
- (unsigned int)requestTypeCode;	// IMP=0x00000000002538b2
- (void)writeTo:(id)arg1;	// IMP=0x0000000000253855
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002536af
- (id)dictionaryRepresentation;	// IMP=0x000000000025362c
- (id)description;	// IMP=0x000000000025357d
@property(readonly, nonatomic) _Bool hasEnvironment;
@property(readonly, nonatomic) _Bool hasContainerName;

@end

