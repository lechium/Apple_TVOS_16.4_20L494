//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOLocation, GEOPDAdamAppIdentifier, GEOPDIdentityMerchantInformation, GEOPDMerchantInformation, GEOPDWarsawMerchantIdentifier, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDMerchantLookupParameters : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    PBUnknownFields *_unknownFields;	// 16 = 0x10
    GEOPDAdamAppIdentifier *_appIdentifier;	// 24 = 0x18
    GEOPDIdentityMerchantInformation *_identityMerchantInformation;	// 32 = 0x20
    NSString *_industryCategory;	// 40 = 0x28
    long long _industryCode;	// 48 = 0x30
    NSString *_merchantCode;	// 56 = 0x38
    GEOPDMerchantInformation *_merchantInformation;	// 64 = 0x40
    NSString *_paymentNetwork;	// 72 = 0x48
    NSString *_rawMerchantCode;	// 80 = 0x50
    NSString *_terminalId;	// 88 = 0x58
    NSString *_transactionCurrencyCode;	// 96 = 0x60
    NSString *_transactionId;	// 104 = 0x68
    double _transactionLocationAge;	// 112 = 0x70
    GEOLocation *_transactionLocation;	// 120 = 0x78
    double _transactionTimestamp;	// 128 = 0x80
    GEOPDWarsawMerchantIdentifier *_warsawMerchantIdentifier;	// 136 = 0x88
    unsigned int _readerMarkPos;	// 144 = 0x90
    unsigned int _readerMarkLength;	// 148 = 0x94
    struct os_unfair_lock_s _readerLock;	// 152 = 0x98
    int _transactionStatus;	// 156 = 0x9c
    int _transactionType;	// 160 = 0xa0
    _Bool _coarseLocationUsed;	// 164 = 0xa4
    _Bool _enableBrandMuidFallback;	// 165 = 0xa5
    _Bool _fuzzyMatched;	// 166 = 0xa6
    struct {
        unsigned int has_industryCode:1;
        unsigned int has_transactionLocationAge:1;
        unsigned int has_transactionTimestamp:1;
        unsigned int has_transactionStatus:1;
        unsigned int has_transactionType:1;
        unsigned int has_coarseLocationUsed:1;
        unsigned int has_enableBrandMuidFallback:1;
        unsigned int has_fuzzyMatched:1;
        unsigned int read_unknownFields:1;
        unsigned int read_appIdentifier:1;
        unsigned int read_identityMerchantInformation:1;
        unsigned int read_industryCategory:1;
        unsigned int read_merchantCode:1;
        unsigned int read_merchantInformation:1;
        unsigned int read_paymentNetwork:1;
        unsigned int read_rawMerchantCode:1;
        unsigned int read_terminalId:1;
        unsigned int read_transactionCurrencyCode:1;
        unsigned int read_transactionId:1;
        unsigned int read_transactionLocation:1;
        unsigned int read_warsawMerchantIdentifier:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x000000000056ac1b
- (unsigned long long)hash;	// IMP=0x000000000056a77c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000056a2e3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000569e35
- (void)writeTo:(id)arg1;	// IMP=0x000000000056983d
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000056982e
- (id)jsonRepresentation;	// IMP=0x00000000005694ad
- (id)dictionaryRepresentation;	// IMP=0x00000000005685db
- (id)description;	// IMP=0x000000000056852c
- (id)initWithData:(id)arg1;	// IMP=0x00000000005667c5
- (id)init;	// IMP=0x0000000000566769

@end

