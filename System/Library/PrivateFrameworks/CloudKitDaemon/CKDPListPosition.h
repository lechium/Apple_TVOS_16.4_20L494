//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@interface CKDPListPosition : PBCodable
{
    int _index;	// 8 = 0x8
    _Bool _isReversed;	// 12 = 0xc
    struct {
        unsigned int index:1;
        unsigned int isReversed:1;
    } _has;	// 16 = 0x10
}

@property(nonatomic) _Bool isReversed; // @synthesize isReversed=_isReversed;
@property(nonatomic) int index; // @synthesize index=_index;
- (void)mergeFrom:(id)arg1;	// IMP=0x0000000000225309
- (unsigned long long)hash;	// IMP=0x00000000002252c3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000225200
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000225183
- (void)copyTo:(id)arg1;	// IMP=0x0000000000225129
- (void)writeTo:(id)arg1;	// IMP=0x00000000002250b7
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000002250aa
- (id)dictionaryRepresentation;	// IMP=0x0000000000224d2c
- (id)description;	// IMP=0x0000000000224c7d
@property(nonatomic) _Bool hasIsReversed;
@property(nonatomic) _Bool hasIndex;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;	// IMP=0x00000000001a50ad

@end
