//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class GEOPDSearchTokenSet, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchPhoneNumberIntent : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_phoneNumber;	// 16 = 0x10
    GEOPDSearchTokenSet *_tokenSet;	// 24 = 0x18
    unsigned int _readerMarkPos;	// 32 = 0x20
    unsigned int _readerMarkLength;	// 36 = 0x24
    struct os_unfair_lock_s _readerLock;	// 40 = 0x28
    struct {
        unsigned int read_phoneNumber:1;
        unsigned int read_tokenSet:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 44 = 0x2c
}

- (void).cxx_destruct;	// IMP=0x0000000000ab74c8
- (unsigned long long)hash;	// IMP=0x0000000000ab7471
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000ab738f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000ab71fa
- (void)writeTo:(id)arg1;	// IMP=0x0000000000ab706d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000ab705e
- (id)jsonRepresentation;	// IMP=0x0000000000ab704f
- (id)dictionaryRepresentation;	// IMP=0x0000000000ab6dbf
- (id)description;	// IMP=0x0000000000ab6d10
- (id)initWithData:(id)arg1;	// IMP=0x0000000000ab67f5
- (id)init;	// IMP=0x0000000000ab6799

@end

