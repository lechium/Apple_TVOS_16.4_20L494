//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface CPLRemappedRecord : PBCodable
{
    NSString *_createdByUserID;	// 8 = 0x8
    NSString *_recordID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000be902
- (unsigned long long)hash;	// IMP=0x00100000000be883
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000be7bb
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000be71d
- (void)writeTo:(id)arg1;	// IMP=0x00100000000be6af
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000000be6a2
- (id)dictionaryRepresentation;	// IMP=0x00100000000be48a
- (id)description;	// IMP=0x00100000000be3db

@end

