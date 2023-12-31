//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface C2MPGenericEventMetricValue : PBCodable
{
    unsigned long long _dateValue;	// 8 = 0x8
    double _doubleValue;	// 16 = 0x10
    NSString *_stringValue;	// 24 = 0x18
    struct {
        unsigned int dateValue:1;
        unsigned int doubleValue:1;
    } _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000005b0e
@property(nonatomic) unsigned long long dateValue; // @synthesize dateValue=_dateValue;
@property(nonatomic) double doubleValue; // @synthesize doubleValue=_doubleValue;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000005a41
- (unsigned long long)hash;	// IMP=0x00000000000058f5
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000005808
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000574e
- (void)copyTo:(id)arg1;	// IMP=0x00000000000056c9
- (void)writeTo:(id)arg1;	// IMP=0x0000000000005638
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000000562b
- (id)dictionaryRepresentation;	// IMP=0x0000000000005282
- (id)description;	// IMP=0x00000000000051d3
@property(nonatomic) _Bool hasDateValue;
@property(nonatomic) _Bool hasDoubleValue;
@property(readonly, nonatomic) _Bool hasStringValue;

@end

