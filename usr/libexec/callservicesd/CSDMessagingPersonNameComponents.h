//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSPersonNameComponents, NSString;

@interface CSDMessagingPersonNameComponents : PBCodable
{
    NSString *_familyName;	// 8 = 0x8
    NSString *_givenName;	// 16 = 0x10
    NSString *_middleName;	// 24 = 0x18
    NSString *_namePrefix;	// 32 = 0x20
    NSString *_nameSuffix;	// 40 = 0x28
    NSString *_nickname;	// 48 = 0x30
    CSDMessagingPersonNameComponents *_phoneticRepresentation;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00100000000bc083
@property(retain, nonatomic) CSDMessagingPersonNameComponents *phoneticRepresentation; // @synthesize phoneticRepresentation=_phoneticRepresentation;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) NSString *nameSuffix; // @synthesize nameSuffix=_nameSuffix;
@property(retain, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
@property(retain, nonatomic) NSString *middleName; // @synthesize middleName=_middleName;
@property(retain, nonatomic) NSString *givenName; // @synthesize givenName=_givenName;
@property(retain, nonatomic) NSString *namePrefix; // @synthesize namePrefix=_namePrefix;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000bbe63
- (unsigned long long)hash;	// IMP=0x00100000000bbd8b
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000bbbc3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000bba5a
- (void)copyTo:(id)arg1;	// IMP=0x00100000000bb957
- (void)writeTo:(id)arg1;	// IMP=0x00100000000bb869
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000bb85c
- (id)dictionaryRepresentation;	// IMP=0x00100000000bb45a
- (id)description;	// IMP=0x00100000000bb3ab
@property(readonly, nonatomic) _Bool hasPhoneticRepresentation;
@property(readonly, nonatomic) _Bool hasNickname;
@property(readonly, nonatomic) _Bool hasNameSuffix;
@property(readonly, nonatomic) _Bool hasFamilyName;
@property(readonly, nonatomic) _Bool hasMiddleName;
@property(readonly, nonatomic) _Bool hasGivenName;
@property(readonly, nonatomic) _Bool hasNamePrefix;
@property(readonly, copy, nonatomic) NSPersonNameComponents *personNameComponents;
- (id)initWithPersonNameComponents:(id)arg1;	// IMP=0x00100000000a998c

@end

