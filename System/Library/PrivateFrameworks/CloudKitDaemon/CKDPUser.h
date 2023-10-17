//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPIdentifier, CKDPProtectionInfo, CKDPUserAlias, NSString;

@interface CKDPUser : PBCodable
{
    CKDPUserAlias *_alias;	// 8 = 0x8
    NSString *_firstName;	// 16 = 0x10
    CKDPIdentifier *_identifier;	// 24 = 0x18
    NSString *_lastName;	// 32 = 0x20
    CKDPProtectionInfo *_protectionInfo;	// 40 = 0x28
    _Bool _isInNetwork;	// 48 = 0x30
    struct {
        unsigned int isInNetwork:1;
    } _has;	// 52 = 0x34
}

- (void).cxx_destruct;	// IMP=0x00000000001ae633
@property(retain, nonatomic) CKDPProtectionInfo *protectionInfo; // @synthesize protectionInfo=_protectionInfo;
@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(retain, nonatomic) CKDPUserAlias *alias; // @synthesize alias=_alias;
@property(retain, nonatomic) CKDPIdentifier *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001ae449
- (unsigned long long)hash;	// IMP=0x00000000001ae37a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001ae1dd
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001ae0a5
- (void)copyTo:(id)arg1;	// IMP=0x00000000001adfc2
- (void)writeTo:(id)arg1;	// IMP=0x00000000001adee9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001adedc
- (id)dictionaryRepresentation;	// IMP=0x00000000001ad9ba
- (id)description;	// IMP=0x00000000001ad90b
@property(nonatomic) _Bool hasIsInNetwork;
@property(nonatomic) _Bool isInNetwork; // @synthesize isInNetwork=_isInNetwork;
@property(readonly, nonatomic) _Bool hasProtectionInfo;
@property(readonly, nonatomic) _Bool hasLastName;
@property(readonly, nonatomic) _Bool hasFirstName;
@property(readonly, nonatomic) _Bool hasAlias;
@property(readonly, nonatomic) _Bool hasIdentifier;

@end

