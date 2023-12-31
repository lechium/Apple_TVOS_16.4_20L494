//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE, NSData, NSString;

@interface SDUnlockLongTermKeyResponse : PBCodable
{
    NSData *_longTermKey;	// 8 = 0x8
    MISSING_TYPE *_requestID;	// 16 = 0x10
    unsigned int _version;	// 24 = 0x18
    _Bool _keyFailed;	// 28 = 0x1c
    struct {
        unsigned int version:1;
        unsigned int keyFailed:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000014bacb
@property(nonatomic) _Bool keyFailed; // @synthesize keyFailed=_keyFailed;
@property(retain, nonatomic) NSData *longTermKey; // @synthesize longTermKey=_longTermKey;
@property(retain, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000014b9ba
- (unsigned long long)hash;	// IMP=0x001000000014b90e
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000014b7d3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000014b6f2
- (void)copyTo:(id)arg1;	// IMP=0x001000000014b64b
- (void)writeTo:(id)arg1;	// IMP=0x001000000014b5a1
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000014b594
- (id)dictionaryRepresentation;	// IMP=0x001000000014b177
- (id)description;	// IMP=0x001000000014b0c8
@property(nonatomic) _Bool hasKeyFailed;
@property(readonly, nonatomic) _Bool hasLongTermKey;
@property(readonly, nonatomic) _Bool hasRequestID;
@property(nonatomic) _Bool hasVersion;

@end

