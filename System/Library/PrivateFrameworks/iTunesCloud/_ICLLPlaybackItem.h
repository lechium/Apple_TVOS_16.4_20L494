//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, _ICLLMediaInfo, _ICLLPlaybackItemContainer;

__attribute__((visibility("hidden")))
@interface _ICLLPlaybackItem : PBCodable
{
    long long _contributingParticipantId;	// 8 = 0x8
    _ICLLPlaybackItemContainer *_container;	// 16 = 0x10
    NSString *_itemId;	// 24 = 0x18
    NSString *_mediaId;	// 32 = 0x20
    _ICLLMediaInfo *_mediaInfo;	// 40 = 0x28
    int _sectionType;	// 48 = 0x30
    _Bool _isExplicit;	// 52 = 0x34
    struct {
        unsigned int contributingParticipantId:1;
        unsigned int sectionType:1;
        unsigned int isExplicit:1;
    } _has;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000afea0
- (unsigned long long)hash;	// IMP=0x00000000000afd8f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000afbc6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000afa7d
- (void)writeTo:(id)arg1;	// IMP=0x00000000000af97a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000af96d
- (id)dictionaryRepresentation;	// IMP=0x00000000000af73c
- (id)description;	// IMP=0x00000000000af68d

@end
