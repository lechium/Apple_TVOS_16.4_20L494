//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ModelKeyServerAPIResultError : PBCodable
{
    NSString *_message;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000013fcdf
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000013fc96
- (unsigned long long)hash;	// IMP=0x000000000013fc79
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000013fbdf
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000013fb67
- (void)copyTo:(id)arg1;	// IMP=0x000000000013fb3d
- (void)writeTo:(id)arg1;	// IMP=0x000000000013fb19
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000013fb0c
- (id)dictionaryRepresentation;	// IMP=0x000000000013fab0
- (id)description;	// IMP=0x000000000013fa01
@property(readonly, nonatomic) _Bool hasMessage;

@end

