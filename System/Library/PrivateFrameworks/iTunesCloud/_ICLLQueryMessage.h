//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class _ICLLParticipantQuery, _ICLLPlaybackControlSettingsQuery, _ICLLPlaybackSyncStateQuery, _ICLLQueueQuery;

__attribute__((visibility("hidden")))
@interface _ICLLQueryMessage : PBCodable
{
    _ICLLParticipantQuery *_participant;	// 8 = 0x8
    _ICLLPlaybackControlSettingsQuery *_playbackControlSettings;	// 16 = 0x10
    _ICLLPlaybackSyncStateQuery *_playbackSyncState;	// 24 = 0x18
    int _query;	// 32 = 0x20
    _ICLLQueueQuery *_queue;	// 40 = 0x28
    struct {
        unsigned int query:1;
    } _has;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000fab20
- (unsigned long long)hash;	// IMP=0x00000000000faa68
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000fa904
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000fa7f7
- (void)writeTo:(id)arg1;	// IMP=0x00000000000fa760
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000fa753
- (id)dictionaryRepresentation;	// IMP=0x00000000000fa58a
- (id)description;	// IMP=0x00000000000fa4db

@end

