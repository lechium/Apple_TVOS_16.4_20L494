//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface ALCLStrideCalEntryDeprecated : PBCodable
{
    double _kvalue;	// 8 = 0x8
    double _kvalueTrack;	// 16 = 0x10
    double _score;	// 24 = 0x18
    double _timestamp;	// 32 = 0x20
    unsigned int _pacebin;	// 40 = 0x28
    int _recordId;	// 44 = 0x2c
    _Bool _regularEntry;	// 48 = 0x30
    struct {
        unsigned int timestamp:1;
        unsigned int recordId:1;
        unsigned int regularEntry:1;
    } _has;	// 52 = 0x34
}

@property(nonatomic) _Bool regularEntry; // @synthesize regularEntry=_regularEntry;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) double score; // @synthesize score=_score;
@property(nonatomic) double kvalueTrack; // @synthesize kvalueTrack=_kvalueTrack;
@property(nonatomic) double kvalue; // @synthesize kvalue=_kvalue;
@property(nonatomic) unsigned int pacebin; // @synthesize pacebin=_pacebin;
@property(nonatomic) int recordId; // @synthesize recordId=_recordId;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000199139
- (unsigned long long)hash;	// IMP=0x0010000000198d28
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000198c10
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000198b38
- (void)copyTo:(id)arg1;	// IMP=0x0010000000198a9e
- (void)writeTo:(id)arg1;	// IMP=0x00100000001989b1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001989a4
- (id)dictionaryRepresentation;	// IMP=0x0010000000198372
- (id)description;	// IMP=0x00100000001982fb
@property(nonatomic) _Bool hasRegularEntry;
@property(nonatomic) _Bool hasTimestamp;
@property(nonatomic) _Bool hasRecordId;

@end

