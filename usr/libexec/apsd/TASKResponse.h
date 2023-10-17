//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface TASKResponse : PBCodable
{
    NSString *_errorMessage;	// 8 = 0x8
    int _status;	// 16 = 0x10
    unsigned int _taskId;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x002000000004f83f
@property(retain, nonatomic) NSString *errorMessage; // @synthesize errorMessage=_errorMessage;
@property(nonatomic) unsigned int taskId; // @synthesize taskId=_taskId;
@property(nonatomic) int status; // @synthesize status=_status;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000004f79c
- (unsigned long long)hash;	// IMP=0x001000000004f74f
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000004f695
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000004f601
- (void)copyTo:(id)arg1;	// IMP=0x001000000004f5bd
- (void)writeTo:(id)arg1;	// IMP=0x001000000004f54d
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000004f540
- (id)dictionaryRepresentation;	// IMP=0x001000000004f182
- (id)description;	// IMP=0x001000000004f0d3
@property(readonly, nonatomic) _Bool hasErrorMessage;
- (int)StringAsStatus:(id)arg1;	// IMP=0x001000000004eff3
- (id)statusAsString:(int)arg1;	// IMP=0x001000000004efaa

@end
