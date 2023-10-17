//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDAdamAppIdentifier, GEOPDIdentityMerchantInformation, GEOPDWarsawMerchantIdentifier, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMerchantLookupBrandParameters : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDAdamAppIdentifier *_appIdentifier;	// 24 = 0x18
    GEOPDIdentityMerchantInformation *_identityMerchantInformation;	// 32 = 0x20
    NSString *_merchantCanl;	// 40 = 0x28
    NSString *_merchantCode;	// 48 = 0x30
    NSString *_merchantId;	// 56 = 0x38
    NSString *_rawMerchantCode;	// 64 = 0x40
    GEOPDWarsawMerchantIdentifier *_warsawIdentifier;	// 72 = 0x48
    unsigned int _readerMarkPos;	// 80 = 0x50
    unsigned int _readerMarkLength;	// 84 = 0x54
    struct os_unfair_lock_s _readerLock;	// 88 = 0x58
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_appIdentifier:1;
        unsigned int read_identityMerchantInformation:1;
        unsigned int read_merchantCanl:1;
        unsigned int read_merchantCode:1;
        unsigned int read_merchantId:1;
        unsigned int read_rawMerchantCode:1;
        unsigned int read_warsawIdentifier:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 92 = 0x5c
}

- (void).cxx_destruct;	// IMP=0x0000000000565b11
- (unsigned long long)hash;	// IMP=0x00000000005659e1
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000005657ff
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000565561
- (void)writeTo:(id)arg1;	// IMP=0x00000000005652d9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000005652ca
- (id)jsonRepresentation;	// IMP=0x0000000000564cc5
- (id)dictionaryRepresentation;	// IMP=0x000000000056442b
- (id)description;	// IMP=0x000000000056437c
- (id)initWithData:(id)arg1;	// IMP=0x000000000056392f
- (id)init;	// IMP=0x00000000005638d3

@end

