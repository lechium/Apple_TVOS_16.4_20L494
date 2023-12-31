//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDSearchLanguageContext : PBCodable
{
    PBDataReader *_reader;	// 8 = 0x8
    NSString *_deviceDisplayLanguage;	// 16 = 0x10
    NSString *_deviceKeyboardLanguage;	// 24 = 0x18
    NSString *_deviceSpokenLanguage;	// 32 = 0x20
    NSMutableArray *_displayLanguages;	// 40 = 0x28
    NSMutableArray *_spokenLanguages;	// 48 = 0x30
    unsigned int _readerMarkPos;	// 56 = 0x38
    unsigned int _readerMarkLength;	// 60 = 0x3c
    struct os_unfair_lock_s _readerLock;	// 64 = 0x40
    struct {
        unsigned int read_deviceDisplayLanguage:1;
        unsigned int read_deviceKeyboardLanguage:1;
        unsigned int read_deviceSpokenLanguage:1;
        unsigned int read_displayLanguages:1;
        unsigned int read_spokenLanguages:1;
        unsigned int wrote_anyField:1;
    } _flags;	// 68 = 0x44
}

- (void).cxx_destruct;	// IMP=0x000000000119d9e6
- (unsigned long long)hash;	// IMP=0x000000000119d6d0
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000119d556
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000119d10e
- (void)writeTo:(id)arg1;	// IMP=0x000000000119cd6b
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000119cd5c
- (id)jsonRepresentation;	// IMP=0x000000000119c389
- (id)dictionaryRepresentation;	// IMP=0x000000000119bf8b
- (id)description;	// IMP=0x000000000119bedc
- (id)initWithData:(id)arg1;	// IMP=0x000000000119b484
- (id)init;	// IMP=0x000000000119b428

@end

