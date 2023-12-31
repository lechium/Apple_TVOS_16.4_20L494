//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CSDMessagingHandle, CSDMessagingVoucher, NSString, TUConversationMember;

@interface CSDMessagingConversationMember : PBCodable
{
    unsigned long long;	// 8 = 0x8
    CSDMessagingVoucher *_associationVoucher;	// 16 = 0x10
    CSDMessagingHandle *_handle;	// 24 = 0x18
    CSDMessagingHandle *_lightweightPrimary;	// 32 = 0x20
    NSString *_nickname;	// 40 = 0x28
    int _validationSource;	// 48 = 0x30
    unsigned int _version;	// 52 = 0x34
    struct {
        unsigned int lightweightPrimaryParticipantID:1;
        unsigned int validationSource:1;
        unsigned int version:1;
    } _has;	// 56 = 0x38
}

+ (id)memberWithTUConversationMember:(id)arg1;	// IMP=0x00100000000693fb
- (void).cxx_destruct;	// IMP=0x00100000000d644a
@property(retain, nonatomic) CSDMessagingVoucher *associationVoucher; // @synthesize associationVoucher=_associationVoucher;
@property(nonatomic) unsigned long long lightweightPrimaryParticipantID; // @synthesize lightweightPrimaryParticipantID=_lightweightPrimaryParticipantID;
@property(retain, nonatomic) CSDMessagingHandle *lightweightPrimary; // @synthesize lightweightPrimary=_lightweightPrimary;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(retain, nonatomic) CSDMessagingHandle *handle; // @synthesize handle=_handle;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000d6243
- (unsigned long long)hash;	// IMP=0x00100000000d6145
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000d5f91
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000d5e45
- (void)copyTo:(id)arg1;	// IMP=0x00100000000d5d41
- (void)writeTo:(id)arg1;	// IMP=0x00100000000d5c3d
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000d5c30
- (id)dictionaryRepresentation;	// IMP=0x00100000000d557f
- (id)description;	// IMP=0x00100000000d54d0
@property(readonly, nonatomic) _Bool hasAssociationVoucher;
- (int)StringAsValidationSource:(id)arg1;	// IMP=0x00100000000d5429
- (id)validationSourceAsString:(int)arg1;	// IMP=0x00100000000d53e0
@property(nonatomic) _Bool hasValidationSource;
@property(nonatomic) int validationSource; // @synthesize validationSource=_validationSource;
@property(nonatomic) _Bool hasLightweightPrimaryParticipantID;
@property(readonly, nonatomic) _Bool hasLightweightPrimary;
@property(readonly, nonatomic) _Bool hasNickname;
@property(readonly, nonatomic) _Bool hasHandle;
@property(nonatomic) _Bool hasVersion;
@property(readonly, nonatomic) TUConversationMember *tuConversationMember;

@end

