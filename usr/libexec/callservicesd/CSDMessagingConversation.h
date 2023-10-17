//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CSDMessagingConversationActivitySession, CSDMessagingConversationLink, CSDMessagingConversationMember, CSDMessagingConversationReport, CSDMessagingHandle, NSMutableArray, NSString, TUConversationLink;

@interface CSDMessagingConversation : PBCodable
{
    NSMutableArray *_activeLightweightParticipants;	// 8 = 0x8
    NSMutableArray *_activeRemoteParticipants;	// 16 = 0x10
    NSMutableArray *_activitySessions;	// 24 = 0x18
    int _avMode;	// 32 = 0x20
    NSString *_conversationProviderIdentifier;	// 40 = 0x28
    NSString *_groupUUIDString;	// 48 = 0x30
    NSString *_highlightIdentifier;	// 56 = 0x38
    CSDMessagingHandle *_initiator;	// 64 = 0x40
    NSMutableArray *_lightweightMembers;	// 72 = 0x48
    CSDMessagingConversationLink *_link;	// 80 = 0x50
    CSDMessagingConversationMember *_localMember;	// 88 = 0x58
    NSString *_messagesGroupUUIDString;	// 96 = 0x60
    NSMutableArray *_otherInvitedHandles;	// 104 = 0x68
    NSMutableArray *_remoteMembers;	// 112 = 0x70
    CSDMessagingConversationReport *_reportData;	// 120 = 0x78
    CSDMessagingConversationActivitySession *_stagedActivitySession;	// 128 = 0x80
    NSString *_uUIDString;	// 136 = 0x88
    unsigned int _version;	// 144 = 0x90
    _Bool _locallyCreated;	// 148 = 0x94
    struct {
        unsigned int avMode:1;
        unsigned int version:1;
        unsigned int locallyCreated:1;
    } _has;	// 152 = 0x98
}

+ (Class)activeLightweightParticipantsType;	// IMP=0x00200000000d6ab7
+ (Class)lightweightMembersType;	// IMP=0x00100000000d69e5
+ (Class)otherInvitedHandlesType;	// IMP=0x00100000000d6913
+ (Class)activitySessionsType;	// IMP=0x00100000000d6802
+ (Class)activeRemoteParticipantsType;	// IMP=0x00100000000d6730
+ (Class)remoteMembersType;	// IMP=0x00100000000d665e
- (void).cxx_destruct;	// IMP=0x00100000000da914
@property(retain, nonatomic) CSDMessagingConversationActivitySession *stagedActivitySession; // @synthesize stagedActivitySession=_stagedActivitySession;
@property(retain, nonatomic) NSString *highlightIdentifier; // @synthesize highlightIdentifier=_highlightIdentifier;
@property(retain, nonatomic) NSMutableArray *activeLightweightParticipants; // @synthesize activeLightweightParticipants=_activeLightweightParticipants;
@property(retain, nonatomic) NSMutableArray *lightweightMembers; // @synthesize lightweightMembers=_lightweightMembers;
@property(retain, nonatomic) NSMutableArray *otherInvitedHandles; // @synthesize otherInvitedHandles=_otherInvitedHandles;
@property(retain, nonatomic) NSString *conversationProviderIdentifier; // @synthesize conversationProviderIdentifier=_conversationProviderIdentifier;
@property(retain, nonatomic) CSDMessagingConversationReport *reportData; // @synthesize reportData=_reportData;
@property(retain, nonatomic) CSDMessagingConversationLink *link; // @synthesize link=_link;
@property(retain, nonatomic) NSMutableArray *activitySessions; // @synthesize activitySessions=_activitySessions;
@property(retain, nonatomic) NSMutableArray *activeRemoteParticipants; // @synthesize activeRemoteParticipants=_activeRemoteParticipants;
@property(retain, nonatomic) NSMutableArray *remoteMembers; // @synthesize remoteMembers=_remoteMembers;
@property(retain, nonatomic) CSDMessagingConversationMember *localMember; // @synthesize localMember=_localMember;
@property(retain, nonatomic) CSDMessagingHandle *initiator; // @synthesize initiator=_initiator;
@property(nonatomic) _Bool locallyCreated; // @synthesize locallyCreated=_locallyCreated;
@property(retain, nonatomic) NSString *messagesGroupUUIDString; // @synthesize messagesGroupUUIDString=_messagesGroupUUIDString;
@property(retain, nonatomic) NSString *groupUUIDString; // @synthesize groupUUIDString=_groupUUIDString;
@property(retain, nonatomic) NSString *uUIDString; // @synthesize uUIDString=_uUIDString;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000d9e7a
- (unsigned long long)hash;	// IMP=0x00100000000d9c29
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000d97e3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000d8e1f
- (void)copyTo:(id)arg1;	// IMP=0x00100000000d8907
- (void)writeTo:(id)arg1;	// IMP=0x00100000000d8209
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000d81fc
- (id)dictionaryRepresentation;	// IMP=0x00100000000d6ce0
- (id)description;	// IMP=0x00100000000d6c31
- (int)StringAsAvMode:(id)arg1;	// IMP=0x00100000000d6b9f
- (id)avModeAsString:(int)arg1;	// IMP=0x00100000000d6b56
@property(nonatomic) _Bool hasAvMode;
@property(nonatomic) int avMode; // @synthesize avMode=_avMode;
@property(readonly, nonatomic) _Bool hasStagedActivitySession;
@property(readonly, nonatomic) _Bool hasHighlightIdentifier;
- (id)activeLightweightParticipantsAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000d6a9a
- (unsigned long long)activeLightweightParticipantsCount;	// IMP=0x00100000000d6a7d
- (void)addActiveLightweightParticipants:(id)arg1;	// IMP=0x00100000000d6a13
- (void)clearActiveLightweightParticipants;	// IMP=0x00100000000d69f6
- (id)lightweightMembersAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000d69c8
- (unsigned long long)lightweightMembersCount;	// IMP=0x00100000000d69ab
- (void)addLightweightMembers:(id)arg1;	// IMP=0x00100000000d6941
- (void)clearLightweightMembers;	// IMP=0x00100000000d6924
- (id)otherInvitedHandlesAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000d68f6
- (unsigned long long)otherInvitedHandlesCount;	// IMP=0x00100000000d68d9
- (void)addOtherInvitedHandles:(id)arg1;	// IMP=0x00100000000d686f
- (void)clearOtherInvitedHandles;	// IMP=0x00100000000d6852
@property(readonly, nonatomic) _Bool hasConversationProviderIdentifier;
@property(readonly, nonatomic) _Bool hasReportData;
@property(readonly, nonatomic) _Bool hasLink;
- (id)activitySessionsAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000d67e5
- (unsigned long long)activitySessionsCount;	// IMP=0x00100000000d67c8
- (void)addActivitySessions:(id)arg1;	// IMP=0x00100000000d675e
- (void)clearActivitySessions;	// IMP=0x00100000000d6741
- (id)activeRemoteParticipantsAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000d6713
- (unsigned long long)activeRemoteParticipantsCount;	// IMP=0x00100000000d66f6
- (void)addActiveRemoteParticipants:(id)arg1;	// IMP=0x00100000000d668c
- (void)clearActiveRemoteParticipants;	// IMP=0x00100000000d666f
- (id)remoteMembersAtIndex:(unsigned long long)arg1;	// IMP=0x00100000000d6641
- (unsigned long long)remoteMembersCount;	// IMP=0x00100000000d6624
- (void)addRemoteMembers:(id)arg1;	// IMP=0x00100000000d65ba
- (void)clearRemoteMembers;	// IMP=0x00100000000d659d
@property(readonly, nonatomic) _Bool hasLocalMember;
@property(readonly, nonatomic) _Bool hasInitiator;
@property(nonatomic) _Bool hasLocallyCreated;
@property(readonly, nonatomic) _Bool hasMessagesGroupUUIDString;
@property(readonly, nonatomic) _Bool hasGroupUUIDString;
@property(readonly, nonatomic) _Bool hasUUIDString;
@property(nonatomic) _Bool hasVersion;
@property(readonly, copy, nonatomic) TUConversationLink *tuConversationLink;

@end

