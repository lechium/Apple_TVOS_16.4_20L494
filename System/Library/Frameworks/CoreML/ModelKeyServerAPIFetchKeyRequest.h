//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface ModelKeyServerAPIFetchKeyRequest : PBRequest
{
    NSString *_keyId;	// 8 = 0x8
    NSData *_signedKeyRequest;	// 16 = 0x10
    NSString *_teamId;	// 24 = 0x18
    _Bool _rawRequest;	// 32 = 0x20
    struct {
        unsigned int rawRequest:1;
    } _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x00000000000d9c43
@property(nonatomic) _Bool rawRequest; // @synthesize rawRequest=_rawRequest;
@property(retain, nonatomic) NSData *signedKeyRequest; // @synthesize signedKeyRequest=_signedKeyRequest;
@property(retain, nonatomic) NSString *teamId; // @synthesize teamId=_teamId;
@property(retain, nonatomic) NSString *keyId; // @synthesize keyId=_keyId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000000d9b21
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d9952
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d986e
- (void)copyTo:(id)arg1;	// IMP=0x00000000000d97cb
- (void)writeTo:(id)arg1;	// IMP=0x00000000000d972c
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000d94df
- (id)dictionaryRepresentation;	// IMP=0x00000000000d93d1
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasRawRequest;
@property(readonly, nonatomic) _Bool hasSignedKeyRequest;
@property(readonly, nonatomic) _Bool hasTeamId;
@property(readonly, nonatomic) _Bool hasKeyId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

