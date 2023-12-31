//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface TRANSITPbTransitMac : PBCodable
{
    unsigned long long _mac;	// 8 = 0x8
    struct {
        unsigned int mac:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) unsigned long long mac; // @synthesize mac=_mac;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000654e36
- (unsigned long long)hash;	// IMP=0x0010000000654e0e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000654daf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000654d4b
- (void)copyTo:(id)arg1;	// IMP=0x0010000000654d25
- (void)writeTo:(id)arg1;	// IMP=0x0010000000654cf9
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000654cec
- (id)dictionaryRepresentation;	// IMP=0x0010000000654a9b
- (id)description;	// IMP=0x0010000000654a24
@property(nonatomic) _Bool hasMac;

@end

