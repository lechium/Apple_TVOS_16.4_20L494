//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class TASKEdgeDnsOutput;

@interface TASKOutput : PBCodable
{
    TASKEdgeDnsOutput *_edgeDNS;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000075783
@property(retain, nonatomic) TASKEdgeDnsOutput *edgeDNS; // @synthesize edgeDNS=_edgeDNS;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000075701
- (unsigned long long)hash;	// IMP=0x00100000000756e4
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000007564a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000755d2
- (void)copyTo:(id)arg1;	// IMP=0x00100000000755a8
- (void)writeTo:(id)arg1;	// IMP=0x0000000000075584
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000075577
- (id)dictionaryRepresentation;	// IMP=0x0010000000075332
- (id)description;	// IMP=0x0010000000075283
@property(readonly, nonatomic) _Bool hasEdgeDNS;

@end
