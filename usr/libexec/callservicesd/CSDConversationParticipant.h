//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString, TUConversationParticipant, TUConversationParticipantAssociation, TUConversationParticipantCapabilities, TUHandle;

@interface CSDConversationParticipant : NSObject
{
    _Bool _muted;	// 8 = 0x8
    _Bool _videoEnabled;	// 9 = 0x9
    _Bool _screenEnabled;	// 10 = 0xa
    _Bool _audioEnabled;	// 11 = 0xb
    _Bool _audioPaused;	// 12 = 0xc
    _Bool _momentsAvailable;	// 13 = 0xd
    _Bool _lightweight;	// 14 = 0xe
    _Bool _localAccountHandle;	// 15 = 0xf
    _Bool _remoteAudioEnabled;	// 16 = 0x10
    _Bool _remoteVideoEnabled;	// 17 = 0x11
    _Bool _pseudonym;	// 18 = 0x12
    _Bool _guestModeEnabled;	// 19 = 0x13
    unsigned long long _identifier;	// 24 = 0x18
    TUHandle *_handle;	// 32 = 0x20
    NSData *_avcData;	// 40 = 0x28
    TUConversationParticipantCapabilities *_capabilities;	// 48 = 0x30
    unsigned long long _audioVideoMode;	// 56 = 0x38
    long long _streamToken;	// 64 = 0x40
    long long _screenToken;	// 72 = 0x48
    long long _captionsToken;	// 80 = 0x50
    long long _audioPriority;	// 88 = 0x58
    long long _videoPriority;	// 96 = 0x60
    NSString *_avcIdentifier;	// 104 = 0x68
    NSString *_activeIDSDestination;	// 112 = 0x70
    TUConversationParticipantAssociation *_association;	// 120 = 0x78
    NSString *_senderCorrelationIdentifier;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x002000000014aa5d
@property(nonatomic, getter=isGuestModeEnabled) _Bool guestModeEnabled; // @synthesize guestModeEnabled=_guestModeEnabled;
@property(readonly, copy, nonatomic) NSString *senderCorrelationIdentifier; // @synthesize senderCorrelationIdentifier=_senderCorrelationIdentifier;
@property(readonly, nonatomic, getter=isPseudonym) _Bool pseudonym; // @synthesize pseudonym=_pseudonym;
@property(copy, nonatomic) TUConversationParticipantAssociation *association; // @synthesize association=_association;
@property(copy, nonatomic) NSString *activeIDSDestination; // @synthesize activeIDSDestination=_activeIDSDestination;
@property(nonatomic, getter=isRemoteVideoEnabled) _Bool remoteVideoEnabled; // @synthesize remoteVideoEnabled=_remoteVideoEnabled;
@property(nonatomic, getter=isRemoteAudioEnabled) _Bool remoteAudioEnabled; // @synthesize remoteAudioEnabled=_remoteAudioEnabled;
@property(copy, nonatomic) NSString *avcIdentifier; // @synthesize avcIdentifier=_avcIdentifier;
@property(nonatomic) long long videoPriority; // @synthesize videoPriority=_videoPriority;
@property(nonatomic) long long audioPriority; // @synthesize audioPriority=_audioPriority;
@property(nonatomic) long long captionsToken; // @synthesize captionsToken=_captionsToken;
@property(nonatomic) long long screenToken; // @synthesize screenToken=_screenToken;
@property(nonatomic) long long streamToken; // @synthesize streamToken=_streamToken;
@property(nonatomic, getter=isLocalAccountHandle) _Bool localAccountHandle; // @synthesize localAccountHandle=_localAccountHandle;
@property(nonatomic) unsigned long long audioVideoMode; // @synthesize audioVideoMode=_audioVideoMode;
@property(nonatomic, getter=isLightweight) _Bool lightweight; // @synthesize lightweight=_lightweight;
@property(copy, nonatomic) TUConversationParticipantCapabilities *capabilities; // @synthesize capabilities=_capabilities;
@property(nonatomic, getter=isMomentsAvailable) _Bool momentsAvailable; // @synthesize momentsAvailable=_momentsAvailable;
@property(nonatomic, getter=isAudioPaused) _Bool audioPaused; // @synthesize audioPaused=_audioPaused;
- (_Bool);	// IMP=0x001000000014a8ed
@property(nonatomic, getter=isAudioEnabled) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(nonatomic, getter=isScreenEnabled) _Bool screenEnabled; // @synthesize screenEnabled=_screenEnabled;
@property(nonatomic, getter=isVideoEnabled) _Bool videoEnabled; // @synthesize videoEnabled=_videoEnabled;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
@property(readonly, copy, nonatomic) NSData *avcData; // @synthesize avcData=_avcData;
@property(readonly, copy, nonatomic) TUHandle *handle; // @synthesize handle=_handle;
@property(readonly, nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
- (unsigned long long)hash;	// IMP=0x001000000014a54a
- (_Bool)isEqualToParticipant:(id)arg1;	// IMP=0x001000000014a038
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000149fdb
- (_Bool)pseudonym;	// IMP=0x0010000000149f6d
@property(readonly, copy, nonatomic) NSDictionary *idsDictionaryRepresentation;
@property(readonly, copy, nonatomic) TUConversationParticipant *tuConversationParticipant;
- (id)description;	// IMP=0x0010000000149694
- (id)initWithIDSDictionaryRepresentation:(id)arg1;	// IMP=0x00100000001494d5
- (id)initWithIdentifier:(unsigned long long)arg1 handle:(id)arg2 avcData:(id)arg3;	// IMP=0x00100000001494c0
- (id)initWithIdentifier:(unsigned long long)arg1 handle:(id)arg2 avcData:(id)arg3 senderCorrelationIdentifier:(id)arg4;	// IMP=0x001000000014932a

@end

