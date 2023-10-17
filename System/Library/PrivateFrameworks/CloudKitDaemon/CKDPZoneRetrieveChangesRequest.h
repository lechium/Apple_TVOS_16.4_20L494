//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class NSData;

@interface CKDPZoneRetrieveChangesRequest : PBRequest
{
    unsigned int _maxChangedZones;	// 8 = 0x8
    NSData *_syncContinuationToken;	// 16 = 0x10
    struct {
        unsigned int maxChangedZones:1;
    } _has;	// 24 = 0x18
}

+ (id)options;	// IMP=0x0010000000345405
- (void).cxx_destruct;	// IMP=0x0000000000345b62
@property(nonatomic) unsigned int maxChangedZones; // @synthesize maxChangedZones=_maxChangedZones;
@property(retain, nonatomic) NSData *syncContinuationToken; // @synthesize syncContinuationToken=_syncContinuationToken;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000345aca
- (unsigned long long)hash;	// IMP=0x0000000000345a78
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000003459b7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000034591f
- (void)copyTo:(id)arg1;	// IMP=0x00000000003458bc
- (Class)responseClass;	// IMP=0x00000000003458ab
- (unsigned int)requestTypeCode;	// IMP=0x00000000003458a0
- (void)writeTo:(id)arg1;	// IMP=0x000000000034583c
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000034582f
- (id)dictionaryRepresentation;	// IMP=0x000000000034555e
- (id)description;	// IMP=0x00000000003454af
@property(nonatomic) _Bool hasMaxChangedZones;
@property(readonly, nonatomic) _Bool hasSyncContinuationToken;

@end

