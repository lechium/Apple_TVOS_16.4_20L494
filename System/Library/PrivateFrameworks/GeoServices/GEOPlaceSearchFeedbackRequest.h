//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

__attribute__((visibility("hidden")))
@interface GEOPlaceSearchFeedbackRequest : PBRequest
{
    struct GEOSessionID _sessionGUID;	// 8 = 0x8
    long long _businessID;	// 24 = 0x18
    double _timestamp;	// 32 = 0x20
    int _feedbackType;	// 40 = 0x28
    int _localSearchProviderID;	// 44 = 0x2c
    int _numberOfResults;	// 48 = 0x30
    int _positionInResults;	// 52 = 0x34
    int _sequenceNumber;	// 56 = 0x38
    struct {
        unsigned int has_sessionGUID:1;
        unsigned int has_businessID:1;
        unsigned int has_timestamp:1;
        unsigned int has_feedbackType:1;
        unsigned int has_localSearchProviderID:1;
        unsigned int has_numberOfResults:1;
        unsigned int has_positionInResults:1;
        unsigned int has_sequenceNumber:1;
    } _flags;	// 60 = 0x3c
}

+ (_Bool)isValid:(id)arg1;	// IMP=0x00100000007247cf
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000725a03
- (unsigned long long)hash;	// IMP=0x0000000000725812
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000725625
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000072550b
- (void)copyTo:(id)arg1;	// IMP=0x00000000007253f1
- (Class)responseClass;	// IMP=0x00000000007253e0
- (unsigned int)requestTypeCode;	// IMP=0x00000000007253d5
- (void)writeTo:(id)arg1;	// IMP=0x000000000072526c
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000724c08
- (void)readAll:(_Bool)arg1;	// IMP=0x00000000007247c9
- (id)initWithJSON:(id)arg1;	// IMP=0x00000000007247b7
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000072434a
- (id)jsonRepresentation;	// IMP=0x000000000072433b
- (id)dictionaryRepresentation;	// IMP=0x0000000000723ffe
- (id)description;	// IMP=0x0000000000723f4f
@property(nonatomic) _Bool hasLocalSearchProviderID;
@property(nonatomic) int localSearchProviderID;
@property(nonatomic) _Bool hasSequenceNumber;
@property(nonatomic) int sequenceNumber;
@property(nonatomic) _Bool hasPositionInResults;
@property(nonatomic) int positionInResults;
@property(nonatomic) _Bool hasNumberOfResults;
@property(nonatomic) int numberOfResults;
- (int)StringAsFeedbackType:(id)arg1;	// IMP=0x0000000000723d36
- (id)feedbackTypeAsString:(int)arg1;	// IMP=0x0000000000723ced
@property(nonatomic) _Bool hasFeedbackType;
@property(nonatomic) int feedbackType;
@property(nonatomic) _Bool hasBusinessID;
@property(nonatomic) long long businessID;
@property(nonatomic) _Bool hasSessionGUID;
@property(nonatomic) struct GEOSessionID sessionGUID;
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) double timestamp;

@end

