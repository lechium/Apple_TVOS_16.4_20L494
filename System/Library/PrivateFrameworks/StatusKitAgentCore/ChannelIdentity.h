//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface ChannelIdentity : PBCodable
{
    NSData *_channelId;	// 8 = 0x8
    int _channelOwnershipType;	// 16 = 0x10
    NSData *_channelToken;	// 24 = 0x18
    NSString *_channelTopic;	// 32 = 0x20
    CDStruct_cada917b _has;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000003be2a
@property(retain, nonatomic) NSData *channelToken; // @synthesize channelToken=_channelToken;
@property(retain, nonatomic) NSData *channelId; // @synthesize channelId=_channelId;
@property(retain, nonatomic) NSString *channelTopic; // @synthesize channelTopic=_channelTopic;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000003bd18
- (unsigned long long)hash;	// IMP=0x000000000003bc7f
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003bb56
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003ba72
- (void)copyTo:(id)arg1;	// IMP=0x000000000003b9cf
- (void)writeTo:(id)arg1;	// IMP=0x000000000003b931
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003b924
- (id)dictionaryRepresentation;	// IMP=0x000000000003b5a1
- (id)description;	// IMP=0x000000000003b4f2
- (int)StringAsChannelOwnershipType:(id)arg1;	// IMP=0x000000000003b490
- (id)channelOwnershipTypeAsString:(int)arg1;	// IMP=0x000000000003b43b
@property(nonatomic) _Bool hasChannelOwnershipType;
@property(nonatomic) int channelOwnershipType; // @synthesize channelOwnershipType=_channelOwnershipType;
@property(readonly, nonatomic) _Bool hasChannelToken;
@property(readonly, nonatomic) _Bool hasChannelId;
@property(readonly, nonatomic) _Bool hasChannelTopic;

@end

