//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface CKCDPCodeServiceRequestDatabaseOwner : PBCodable
{
    unsigned long long _numericValue;	// 8 = 0x8
    int _identifier;	// 16 = 0x10
    NSString *_stringValue;	// 24 = 0x18
    struct {
        unsigned int numericValue:1;
        unsigned int identifier:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000032705e
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(nonatomic) unsigned long long numericValue; // @synthesize numericValue=_numericValue;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000326fbb
- (unsigned long long)hash;	// IMP=0x0000000000326f54
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000326e6d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000326dbf
- (void)copyTo:(id)arg1;	// IMP=0x0000000000326d3e
- (void)writeTo:(id)arg1;	// IMP=0x0000000000326cd9
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000326ccc
- (id)dictionaryRepresentation;	// IMP=0x00000000003268cd
- (id)description;	// IMP=0x000000000032681e
- (void)clearOneofValuesForIdentifier;	// IMP=0x00000000003267d7
- (int)StringAsIdentifier:(id)arg1;	// IMP=0x0000000000326745
- (id)identifierAsString:(int)arg1;	// IMP=0x00000000003266fc
@property(nonatomic) _Bool hasIdentifier;
@property(nonatomic) int identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) _Bool hasStringValue;
@property(nonatomic) _Bool hasNumericValue;

@end
