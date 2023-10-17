//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPRecord;

@interface CKDPRecordRetrieveResponse : PBCodable
{
    CKDPRecord *_record;	// 8 = 0x8
    _Bool _clientVersionETagMatch;	// 16 = 0x10
    struct {
        unsigned int clientVersionETagMatch:1;
    } _has;	// 20 = 0x14
}

- (void).cxx_destruct;	// IMP=0x00000000003390c6
@property(nonatomic) _Bool clientVersionETagMatch; // @synthesize clientVersionETagMatch=_clientVersionETagMatch;
@property(retain, nonatomic) CKDPRecord *record; // @synthesize record=_record;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000339014
- (unsigned long long)hash;	// IMP=0x0000000000338fc1
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000338ef0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000338e58
- (void)copyTo:(id)arg1;	// IMP=0x0000000000338df5
- (void)writeTo:(id)arg1;	// IMP=0x0000000000338d90
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000338d83
- (id)dictionaryRepresentation;	// IMP=0x0000000000338a47
- (id)description;	// IMP=0x0000000000338998
@property(nonatomic) _Bool hasClientVersionETagMatch;
@property(readonly, nonatomic) _Bool hasRecord;

@end

