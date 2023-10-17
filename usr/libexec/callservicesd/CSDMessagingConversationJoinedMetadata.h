//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CSDMessagingConversationParticipant, NSString;

@interface CSDMessagingConversationJoinedMetadata : PBCodable
{
    NSString *_audioRouteUniqueIdentifier;	// 8 = 0x8
    CSDMessagingConversationParticipant *_sender;	// 16 = 0x10
    unsigned int _version;	// 24 = 0x18
    CDStruct_f20694ce _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x0020000000049cd6
@property(retain, nonatomic) NSString *audioRouteUniqueIdentifier; // @synthesize audioRouteUniqueIdentifier=_audioRouteUniqueIdentifier;
@property(retain, nonatomic) CSDMessagingConversationParticipant *sender; // @synthesize sender=_sender;
@property(nonatomic) unsigned int version; // @synthesize version=_version;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000049bdf
- (unsigned long long)hash;	// IMP=0x0010000000049b5f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000049a6a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000499a9
- (void)copyTo:(id)arg1;	// IMP=0x0010000000049926
- (void)writeTo:(id)arg1;	// IMP=0x00100000000498a5
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000049898
- (id)dictionaryRepresentation;	// IMP=0x00100000000494eb
- (id)description;	// IMP=0x001000000004943c
@property(readonly, nonatomic) _Bool hasAudioRouteUniqueIdentifier;
@property(readonly, nonatomic) _Bool hasSender;
@property(nonatomic) _Bool hasVersion;

@end
