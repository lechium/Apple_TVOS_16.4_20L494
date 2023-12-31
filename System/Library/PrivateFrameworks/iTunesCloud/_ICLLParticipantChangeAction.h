//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class _ICLLParticipantQuery;

__attribute__((visibility("hidden")))
@interface _ICLLParticipantChangeAction : PBCodable
{
    long long _participantId;	// 8 = 0x8
    _ICLLParticipantQuery *_participantQuery;	// 16 = 0x10
    int _status;	// 24 = 0x18
    struct {
        unsigned int participantId:1;
        unsigned int status:1;
    } _has;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x00000000000fd175
- (unsigned long long)hash;	// IMP=0x00000000000fd10e
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000fd027
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000fcf79
- (void)writeTo:(id)arg1;	// IMP=0x00000000000fceea
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000fcedd
- (id)dictionaryRepresentation;	// IMP=0x00000000000fcd99
- (id)description;	// IMP=0x00000000000fccea

@end

