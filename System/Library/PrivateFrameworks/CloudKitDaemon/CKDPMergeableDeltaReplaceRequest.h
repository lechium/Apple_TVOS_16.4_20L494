//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class CKDPMergeableValueIdentifier, NSMutableArray;

@interface CKDPMergeableDeltaReplaceRequest : PBRequest
{
    NSMutableArray *_deltaIdentifiers;	// 8 = 0x8
    NSMutableArray *_deltas;	// 16 = 0x10
    CKDPMergeableValueIdentifier *_identifier;	// 24 = 0x18
    _Bool _containsNewData;	// 32 = 0x20
    _Bool _ignoreMissingDeltas;	// 33 = 0x21
    struct {
        unsigned int containsNewData:1;
        unsigned int ignoreMissingDeltas:1;
    } _has;	// 36 = 0x24
}

+ (Class)deltasType;	// IMP=0x001000000015c3b4
+ (Class)deltaIdentifiersType;	// IMP=0x001000000015c2e2
+ (id)options;	// IMP=0x001000000015c1bc
- (void).cxx_destruct;	// IMP=0x000000000015d923
@property(nonatomic) _Bool containsNewData; // @synthesize containsNewData=_containsNewData;
@property(nonatomic) _Bool ignoreMissingDeltas; // @synthesize ignoreMissingDeltas=_ignoreMissingDeltas;
@property(retain, nonatomic) NSMutableArray *deltas; // @synthesize deltas=_deltas;
@property(retain, nonatomic) NSMutableArray *deltaIdentifiers; // @synthesize deltaIdentifiers=_deltaIdentifiers;
@property(retain, nonatomic) CKDPMergeableValueIdentifier *identifier; // @synthesize identifier=_identifier;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000015d5d8
- (unsigned long long)hash;	// IMP=0x000000000015d51b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000015d3b5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000015d04b
- (void)copyTo:(id)arg1;	// IMP=0x000000000015ce9c
- (Class)responseClass;	// IMP=0x000000000015ce8b
- (unsigned int)requestTypeCode;	// IMP=0x000000000015ce80
- (void)writeTo:(id)arg1;	// IMP=0x000000000015cc05
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000015cbf8
- (id)dictionaryRepresentation;	// IMP=0x000000000015c502
- (id)description;	// IMP=0x000000000015c453
@property(nonatomic) _Bool hasContainsNewData;
@property(nonatomic) _Bool hasIgnoreMissingDeltas;
- (id)deltasAtIndex:(unsigned long long)arg1;	// IMP=0x000000000015c397
- (unsigned long long)deltasCount;	// IMP=0x000000000015c37a
- (void)addDeltas:(id)arg1;	// IMP=0x000000000015c310
- (void)clearDeltas;	// IMP=0x000000000015c2f3
- (id)deltaIdentifiersAtIndex:(unsigned long long)arg1;	// IMP=0x000000000015c2c5
- (unsigned long long)deltaIdentifiersCount;	// IMP=0x000000000015c2a8
- (void)addDeltaIdentifiers:(id)arg1;	// IMP=0x000000000015c23e
- (void)clearDeltaIdentifiers;	// IMP=0x000000000015c221
@property(readonly, nonatomic) _Bool hasIdentifier;

@end
