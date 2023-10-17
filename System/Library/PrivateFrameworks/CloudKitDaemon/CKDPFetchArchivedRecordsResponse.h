//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSData, NSMutableArray;

@interface CKDPFetchArchivedRecordsResponse : PBCodable
{
    NSData *_archiveContinuationToken;	// 8 = 0x8
    NSMutableArray *_records;	// 16 = 0x10
    int _status;	// 24 = 0x18
    CDStruct_47fe53f2 _has;	// 28 = 0x1c
}

+ (Class)recordType;	// IMP=0x00100000002cbd94
- (void).cxx_destruct;	// IMP=0x00000000002ccd32
@property(retain, nonatomic) NSData *archiveContinuationToken; // @synthesize archiveContinuationToken=_archiveContinuationToken;
@property(retain, nonatomic) NSMutableArray *records; // @synthesize records=_records;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002ccb4e
- (unsigned long long)hash;	// IMP=0x00000000002ccad9
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002cc9e4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002cc7af
- (void)copyTo:(id)arg1;	// IMP=0x00000000002cc6ad
- (void)writeTo:(id)arg1;	// IMP=0x00000000002cc527
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002cc51a
- (id)dictionaryRepresentation;	// IMP=0x00000000002cbf8d
- (id)description;	// IMP=0x00000000002cbede
- (int)StringAsStatus:(id)arg1;	// IMP=0x00000000002cbe77
- (id)statusAsString:(int)arg1;	// IMP=0x00000000002cbe21
@property(nonatomic) _Bool hasStatus;
@property(nonatomic) int status; // @synthesize status=_status;
@property(readonly, nonatomic) _Bool hasArchiveContinuationToken;
- (id)recordAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002cbd77
- (unsigned long long)recordsCount;	// IMP=0x00000000002cbd5a
- (void)addRecord:(id)arg1;	// IMP=0x00000000002cbcf0
- (void)clearRecords;	// IMP=0x00000000002cbcd3

@end

