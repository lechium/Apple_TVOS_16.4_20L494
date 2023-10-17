//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSData, NSString;

@interface SDUnlockLongTermKeyRequest : PBRequest
{
    NSData *_longTermKey;	// 8 = 0x8
    NSString *_requestID;	// 16 = 0x10
    unsigned int _version;	// 24 = 0x18
    CDStruct_f20694ce _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x002000000002d5b6
@property(retain, nonatomic) NSData *longTermKey; // @synthesize longTermKey=_longTermKey;
@property(retain, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000002d4d9
- (unsigned long long)hash;	// IMP=0x001000000002d459
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000002d364
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000002d2a3
- (void)copyTo:(id)arg1;	// IMP=0x001000000002d220
- (void)writeTo:(id)arg1;	// IMP=0x001000000002d19f
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000002d192
- (id)dictionaryRepresentation;	// IMP=0x001000000002ce77
- (id)description;	// IMP=0x001000000002cdc8
@property(readonly, nonatomic) _Bool hasLongTermKey;
@property(readonly, nonatomic) _Bool hasRequestID;
@property(nonatomic) _Bool hasVersion;

@end
