//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface XDCProgressMessage : PBCodable
{
    NSMutableArray *_progress;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000001329e4
- (unsigned long long)hash;	// IMP=0x00100000001329c7
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000013292d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000132790
- (void)writeTo:(id)arg1;	// IMP=0x0010000000132660
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001324a9
- (id)dictionaryRepresentation;	// IMP=0x0010000000132276
- (id)description;	// IMP=0x00100000001321c7

@end

