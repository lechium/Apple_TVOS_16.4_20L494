//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

@interface PDURLSessionProxyError : PBCodable
{
    unsigned long long _code;	// 8 = 0x8
    NSString *_domain;	// 16 = 0x10
    NSData *_userInfo;	// 24 = 0x18
    unsigned int _version;	// 32 = 0x20
    struct {
        unsigned int code:1;
        unsigned int version:1;
    } _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x002000000003fda3
@property(retain, nonatomic) NSData *userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) unsigned long long code; // @synthesize code=_code;
@property(retain, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000003fc90
- (unsigned long long)hash;	// IMP=0x001000000003fbf4
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003face
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000003f9f0
- (void)copyTo:(id)arg1;	// IMP=0x001000000003f948
- (void)writeTo:(id)arg1;	// IMP=0x001000000003f89e
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000003f891
- (id)dictionaryRepresentation;	// IMP=0x001000000003f74d
- (id)description;	// IMP=0x001000000003f69e
@property(readonly, nonatomic) _Bool hasUserInfo;
@property(nonatomic) _Bool hasCode;
@property(readonly, nonatomic) _Bool hasDomain;
@property(nonatomic) _Bool hasVersion;

@end

