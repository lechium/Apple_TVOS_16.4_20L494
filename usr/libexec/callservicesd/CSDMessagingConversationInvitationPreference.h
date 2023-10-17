//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class TUConversationInvitationPreference;

@interface CSDMessagingConversationInvitationPreference : PBCodable
{
    int _handleType;	// 8 = 0x8
    unsigned int _notificationStyles;	// 12 = 0xc
    unsigned int _version;	// 16 = 0x10
    struct {
        unsigned int handleType:1;
        unsigned int notificationStyles:1;
        unsigned int version:1;
    } _has;	// 20 = 0x14
}

+ (int)messagingHandleTypeFor:(long long)arg1;	// IMP=0x0010000000013a97
+ (id)invitationPreferenceWithTUConversationInvitationPreference:(id)arg1;	// IMP=0x00100000000139f6
@property(nonatomic) unsigned int notificationStyles; // @synthesize notificationStyles=_notificationStyles;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000011f880
- (unsigned long long)hash;	// IMP=0x001000000011f81f
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000011f74c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000011f6b6
- (void)copyTo:(id)arg1;	// IMP=0x001000000011f643
- (void)writeTo:(id)arg1;	// IMP=0x001000000011f5b3
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000011f5a6
- (id)dictionaryRepresentation;	// IMP=0x001000000011f11d
- (id)description;	// IMP=0x001000000011f06e
@property(nonatomic) _Bool hasNotificationStyles;
- (int)StringAsHandleType:(id)arg1;	// IMP=0x001000000011ef76
- (id)handleTypeAsString:(int)arg1;	// IMP=0x001000000011ef2d
@property(nonatomic) _Bool hasHandleType;
@property(nonatomic) int handleType; // @synthesize handleType=_handleType;
@property(nonatomic) _Bool hasVersion;
- (long long)tuHandleType;	// IMP=0x0010000000013b38
@property(readonly, nonatomic) TUConversationInvitationPreference *tuInvitationPreference;

@end
