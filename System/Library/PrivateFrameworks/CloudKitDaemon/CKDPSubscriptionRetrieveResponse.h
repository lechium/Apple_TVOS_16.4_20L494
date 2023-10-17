//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CKDPSubscriptionRetrieveResponse : PBCodable
{
    NSMutableArray *_subscriptions;	// 8 = 0x8
}

+ (Class)subscriptionsType;	// IMP=0x00100000001b0d64
- (void).cxx_destruct;	// IMP=0x00000000001b17e9
@property(retain, nonatomic) NSMutableArray *subscriptions; // @synthesize subscriptions=_subscriptions;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000001b168f
- (unsigned long long)hash;	// IMP=0x00000000001b1672
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001b15d8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001b1415
- (void)copyTo:(id)arg1;	// IMP=0x00000000001b1356
- (void)writeTo:(id)arg1;	// IMP=0x00000000001b1226
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000001b1219
- (id)dictionaryRepresentation;	// IMP=0x00000000001b0e24
- (id)description;	// IMP=0x00000000001b0d75
- (id)subscriptionsAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001b0d47
- (unsigned long long)subscriptionsCount;	// IMP=0x00000000001b0d2a
- (void)addSubscriptions:(id)arg1;	// IMP=0x00000000001b0cc0
- (void)clearSubscriptions;	// IMP=0x00000000001b0ca3

@end
