//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE, NSMutableArray;

@interface PSChannelSubscriptionsRequestPayload : PBCodable
{
    unsigned long long _sequenceNumber;	// 8 = 0x8
    NSMutableArray *_appChannelSubscriptions;	// 16 = 0x10
    int _subscriptionsType;	// 24 = 0x18
    int _version;	// 28 = 0x1c
    struct {
        unsigned int sequenceNumber:1;
        unsigned int subscriptionsType:1;
        unsigned int version:1;
    } _has;	// 32 = 0x20
}

+ (Class)appChannelSubscriptionsType;	// IMP=0x0010000000043c29
+ (id)createPayloadForSubscriptionChannels:(id)arg1 unsubscriptionChannels:(id)arg2 subscriptionType:(int)arg3;	// IMP=0x0010000000018b4e
- (void).cxx_destruct;	// IMP=0x0020000000044e29
@property(nonatomic) unsigned long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(retain, nonatomic) NSMutableArray *appChannelSubscriptions; // @synthesize appChannelSubscriptions=_appChannelSubscriptions;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000044c29
- (unsigned long long)hash;	// IMP=0x0010000000044b97
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000044a7e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000044842
- (void)copyTo:(id)arg1;	// IMP=0x001000000004472c
- (MISSING_TYPE *)writeTo: /* Error: Ran out of types for this method. */;	// IMP=0x001000000004457d
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000044570
- (id)dictionaryRepresentation;	// IMP=0x0010000000043e4e
- (id)description;	// IMP=0x0010000000043d9f
@property(nonatomic) _Bool hasSequenceNumber;
- (int)StringAsSubscriptionsType:(id)arg1;	// IMP=0x0010000000043cf7
- (id)subscriptionsTypeAsString:(int)arg1;	// IMP=0x0010000000043ca2
@property(nonatomic) _Bool hasSubscriptionsType;
@property(nonatomic) int subscriptionsType; // @synthesize subscriptionsType=_subscriptionsType;
- (id)appChannelSubscriptionsAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000043c0c
- (unsigned long long)appChannelSubscriptionsCount;	// IMP=0x0010000000043bef
- (void)addAppChannelSubscriptions:(id)arg1;	// IMP=0x0010000000043b85
- (void)clearAppChannelSubscriptions;	// IMP=0x0010000000043b68
- (int)StringAsVersion:(id)arg1;	// IMP=0x0010000000043b46
- (id)versionAsString:(int)arg1;	// IMP=0x0010000000043b01
@property(nonatomic) _Bool hasVersion;
@property(nonatomic) int version; // @synthesize version=_version;

@end

