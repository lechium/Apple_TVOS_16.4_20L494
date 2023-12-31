//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface CKDPResponseOperationHeader : PBCodable
{
    NSMutableArray *_assetAuthorizationResponses;	// 8 = 0x8
    NSMutableArray *_throttleConfigs;	// 16 = 0x10
}

+ (Class)throttleConfigType;	// IMP=0x001000000005c48f
+ (Class)assetAuthorizationResponsesType;	// IMP=0x001000000005c3bd
- (void).cxx_destruct;	// IMP=0x000000000005d56a
@property(retain, nonatomic) NSMutableArray *throttleConfigs; // @synthesize throttleConfigs=_throttleConfigs;
@property(retain, nonatomic) NSMutableArray *assetAuthorizationResponses; // @synthesize assetAuthorizationResponses=_assetAuthorizationResponses;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000005d2de
- (unsigned long long)hash;	// IMP=0x000000000005d291
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005d1c9
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005cecd
- (void)copyTo:(id)arg1;	// IMP=0x000000000005cd7f
- (void)writeTo:(id)arg1;	// IMP=0x000000000005cb6e
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000005cb61
- (id)dictionaryRepresentation;	// IMP=0x000000000005c54f
- (id)description;	// IMP=0x000000000005c4a0
- (id)throttleConfigAtIndex:(unsigned long long)arg1;	// IMP=0x000000000005c472
- (unsigned long long)throttleConfigsCount;	// IMP=0x000000000005c455
- (void)addThrottleConfig:(id)arg1;	// IMP=0x000000000005c3eb
- (void)clearThrottleConfigs;	// IMP=0x000000000005c3ce
- (id)assetAuthorizationResponsesAtIndex:(unsigned long long)arg1;	// IMP=0x000000000005c3a0
- (unsigned long long)assetAuthorizationResponsesCount;	// IMP=0x000000000005c383
- (void)addAssetAuthorizationResponses:(id)arg1;	// IMP=0x000000000005c319
- (void)clearAssetAuthorizationResponses;	// IMP=0x000000000005c2fc

@end

