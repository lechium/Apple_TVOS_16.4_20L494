//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface CKCDPCodeServiceRequestServiceClientConfig : PBCodable
{
    NSString *_host;	// 8 = 0x8
    unsigned int _port;	// 16 = 0x10
    struct {
        unsigned int port:1;
    } _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x000000000026b400
@property(nonatomic) unsigned int port; // @synthesize port=_port;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000026b368
- (unsigned long long)hash;	// IMP=0x000000000026b316
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000026b255
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000026b1bd
- (void)copyTo:(id)arg1;	// IMP=0x000000000026b15a
- (void)writeTo:(id)arg1;	// IMP=0x000000000026b0f6
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000026b0e9
- (id)dictionaryRepresentation;	// IMP=0x000000000026ae18
- (id)description;	// IMP=0x000000000026ad69
@property(nonatomic) _Bool hasPort;
@property(readonly, nonatomic) _Bool hasHost;

@end
