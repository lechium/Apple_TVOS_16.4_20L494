//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString, _MPCProtoDelegateInfo, _MPCProtoRadioContentReference;

__attribute__((visibility("hidden")))
@interface _MPCProtoRadioCreationProperties : PBCodable
{
    _MPCProtoDelegateInfo *_accountInfo;	// 8 = 0x8
    _MPCProtoRadioContentReference *_nowPlayingContentReference;	// 16 = 0x10
    NSString *_playActivityFeatureName;	// 24 = 0x18
    NSString *_playActivityQueueGroupingID;	// 32 = 0x20
    NSString *_playbackAuthorizationToken;	// 40 = 0x28
    NSString *_radioStationID;	// 48 = 0x30
    NSString *_radioStationURLString;	// 56 = 0x38
    _MPCProtoRadioContentReference *_seedContentReference;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000204c12
- (unsigned long long)hash;	// IMP=0x0000000000204b1d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000204921
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000020478f
- (void)writeTo:(id)arg1;	// IMP=0x0000000000204684
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002043b6
- (id)dictionaryRepresentation;	// IMP=0x00000000002041d2
- (id)description;	// IMP=0x0000000000204123

@end

