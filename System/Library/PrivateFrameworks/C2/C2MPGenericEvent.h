//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface C2MPGenericEvent : PBCodable
{
    unsigned long long _timestampEnd;	// 8 = 0x8
    unsigned long long _timestampStart;	// 16 = 0x10
    NSMutableArray *_metrics;	// 24 = 0x18
    NSString *_name;	// 32 = 0x20
    int _type;	// 40 = 0x28
    struct {
        unsigned int timestampEnd:1;
        unsigned int timestampStart:1;
        unsigned int type:1;
    } _has;	// 44 = 0x2c
}

+ (Class)metricType;	// IMP=0x0010000000014f82
- (void).cxx_destruct;	// IMP=0x0000000000016184
@property(retain, nonatomic) NSMutableArray *metrics; // @synthesize metrics=_metrics;
@property(nonatomic) unsigned long long timestampEnd; // @synthesize timestampEnd=_timestampEnd;
@property(nonatomic) unsigned long long timestampStart; // @synthesize timestampStart=_timestampStart;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000015f27
- (unsigned long long)hash;	// IMP=0x0000000000015e6e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000015d1d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000015ae1
- (void)copyTo:(id)arg1;	// IMP=0x00000000000159a6
- (void)writeTo:(id)arg1;	// IMP=0x00000000000157f4
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000157e7
- (id)dictionaryRepresentation;	// IMP=0x0000000000015042
- (id)description;	// IMP=0x0000000000014f93
- (id)metricAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000014f65
- (unsigned long long)metricsCount;	// IMP=0x0000000000014f48
- (void)addMetric:(id)arg1;	// IMP=0x0000000000014ede
- (void)clearMetrics;	// IMP=0x0000000000014ec1
@property(nonatomic) _Bool hasTimestampEnd;
@property(nonatomic) _Bool hasTimestampStart;
@property(readonly, nonatomic) _Bool hasName;
- (int)StringAsType:(id)arg1;	// IMP=0x0000000000014d67
- (id)typeAsString:(int)arg1;	// IMP=0x0000000000014ce2
@property(nonatomic) _Bool hasType;
@property(nonatomic) int type; // @synthesize type=_type;

@end

