//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ChannelActivityUpdatePayload : PBCodable
{
    NSData *_padding;	// 8 = 0x8
    NSMutableArray *_participantPayloads;	// 16 = 0x10
    int _updateType;	// 24 = 0x18
    struct {
        unsigned int updateType:1;
    } _has;	// 28 = 0x1c
}

+ (Class)participantPayloadType;	// IMP=0x00100000000538a4
- (void).cxx_destruct;	// IMP=0x000000000005471f
@property(retain, nonatomic) NSData *padding; // @synthesize padding=_padding;
@property(retain, nonatomic) NSMutableArray *participantPayloads; // @synthesize participantPayloads=_participantPayloads;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000005453e
- (unsigned long long)hash;	// IMP=0x00000000000544be
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000543c9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005419c
- (void)copyTo:(id)arg1;	// IMP=0x000000000005409c
- (void)writeTo:(id)arg1;	// IMP=0x0000000000053f17
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000053f0a
- (id)dictionaryRepresentation;	// IMP=0x0000000000053979
- (id)description;	// IMP=0x00000000000538ca
@property(readonly, nonatomic) _Bool hasPadding;
- (id)participantPayloadAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000053887
- (unsigned long long)participantPayloadsCount;	// IMP=0x000000000005386a
- (void)addParticipantPayload:(id)arg1;	// IMP=0x0000000000053800
- (void)clearParticipantPayloads;	// IMP=0x00000000000537e3
- (int)StringAsUpdateType:(id)arg1;	// IMP=0x0000000000053781
- (id)updateTypeAsString:(int)arg1;	// IMP=0x000000000005372c
@property(nonatomic) _Bool hasUpdateType;
@property(nonatomic) int updateType; // @synthesize updateType=_updateType;

@end

