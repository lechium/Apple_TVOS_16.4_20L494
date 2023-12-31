//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class IDSProtoKeyTransparencyLoggableData, NSData, NSMutableArray, NSString;

@interface IDSProtoKeyTransparencyTrustedService : PBCodable
{
    NSData *_deviceSignature;	// 8 = 0x8
    int _keyIndex;	// 16 = 0x10
    IDSProtoKeyTransparencyLoggableData *_ktLoggableData;	// 24 = 0x18
    NSString *_serviceIdentifier;	// 32 = 0x20
    NSMutableArray *_uris;	// 40 = 0x28
    CDStruct_31fd730f _has;	// 48 = 0x30
}

+ (Class)urisType;	// IMP=0x002000000052ef10
- (void).cxx_destruct;	// IMP=0x0020000000531270
@property(retain, nonatomic) NSData *deviceSignature; // @synthesize deviceSignature=_deviceSignature;
@property(retain, nonatomic) IDSProtoKeyTransparencyLoggableData *ktLoggableData; // @synthesize ktLoggableData=_ktLoggableData;
@property(retain, nonatomic) NSMutableArray *uris; // @synthesize uris=_uris;
@property(retain, nonatomic) NSString *serviceIdentifier; // @synthesize serviceIdentifier=_serviceIdentifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000530d20
- (unsigned long long)hash;	// IMP=0x0010000000530be0
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000005308c0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000005304e0
- (void)copyTo:(id)arg1;	// IMP=0x00100000005302d0
- (void)writeTo:(id)arg1;	// IMP=0x001000000052ffb0
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000052ff50
- (id)dictionaryRepresentation;	// IMP=0x001000000052f3c0
- (id)description;	// IMP=0x001000000052f2f0
- (int)StringAsKeyIndex:(id)arg1;	// IMP=0x001000000052f190
- (id)keyIndexAsString:(int)arg1;	// IMP=0x001000000052f0b0
@property(nonatomic) _Bool hasKeyIndex;
@property(nonatomic) int keyIndex; // @synthesize keyIndex=_keyIndex;
@property(readonly, nonatomic) _Bool hasDeviceSignature;
@property(readonly, nonatomic) _Bool hasKtLoggableData;
- (id)urisAtIndex:(unsigned long long)arg1;	// IMP=0x001000000052eed0
- (unsigned long long)urisCount;	// IMP=0x001000000052ee90
- (void)addUris:(id)arg1;	// IMP=0x001000000052edf0
- (void)clearUris;	// IMP=0x001000000052edb0
@property(readonly, nonatomic) _Bool hasServiceIdentifier;

@end

