//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class MISSING_TYPE;

@interface TFDisplay : PBCodable
{
    unsigned int _heightPixels;	// 8 = 0x8
    unsigned int _widthPixels;	// 12 = 0xc
    struct {
        unsigned int heightPixels:1;
        unsigned int widthPixels:1;
    } _has;	// 16 = 0x10
}

- (unsigned long long)hash;	// IMP=0x0020000000174b71
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000174abe
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000174a41
- (void)writeTo:(id)arg1;	// IMP=0x00100000001749d0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001749c3
- (MISSING_TYPE *)dictionaryRepresentation;	// IMP=0x0010000000174644
- (id)description;	// IMP=0x0010000000174595

@end
