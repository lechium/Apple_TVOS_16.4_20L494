//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@interface _ADPBProxyGetMetricsRequest : PBRequest
{
}

+ (unsigned short)_ADPBProxyRequestType;	// IMP=0x002000000011dfe7
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000a3f72
- (unsigned long long)hash;	// IMP=0x00100000000a3f6a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000a3f25
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000a3eec
- (void)copyTo:(id)arg1;	// IMP=0x00100000000a3ee6
- (Class)responseClass;	// IMP=0x00100000000a3ed5
- (unsigned int)requestTypeCode;	// IMP=0x00100000000a3eca
- (void)writeTo:(id)arg1;	// IMP=0x00100000000a3ec4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000a3eb7
- (id)dictionaryRepresentation;	// IMP=0x00100000000a3d98
- (id)description;	// IMP=0x00100000000a3ce9
- (void)_ad_performWithPeerStreamConnection:(id)arg1 context:(id)arg2;	// IMP=0x0010000000090f6e

@end
