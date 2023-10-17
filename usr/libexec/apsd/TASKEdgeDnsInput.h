//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface TASKEdgeDnsInput : PBCodable
{
    NSString *_hostname;	// 8 = 0x8
    int _recordType;	// 16 = 0x10
    struct {
        unsigned int recordType:1;
    } _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x00200000000736a9
@property(retain, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000073621
- (unsigned long long)hash;	// IMP=0x00100000000735ce
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000007350d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000073475
- (void)copyTo:(id)arg1;	// IMP=0x0010000000073417
- (void)writeTo:(id)arg1;	// IMP=0x00100000000733b8
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000733ab
- (id)dictionaryRepresentation;	// IMP=0x00100000000730c5
- (id)description;	// IMP=0x0010000000073016
- (int)StringAsRecordType:(id)arg1;	// IMP=0x0010000000072f84
- (id)recordTypeAsString:(int)arg1;	// IMP=0x0010000000072f3b
@property(nonatomic) _Bool hasRecordType;
@property(nonatomic) int recordType; // @synthesize recordType=_recordType;

@end

