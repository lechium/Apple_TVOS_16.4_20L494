//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _ICLLReactionAction : PBCodable
{
    NSString *_itemId;	// 8 = 0x8
    NSString *_reaction;	// 16 = 0x10
    NSString *_reactionId;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000008a125
- (unsigned long long)hash;	// IMP=0x000000000008a0b8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000089fc0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000089efc
- (void)writeTo:(id)arg1;	// IMP=0x0000000000089e82
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000089e75
- (id)dictionaryRepresentation;	// IMP=0x0000000000089dcb
- (id)description;	// IMP=0x0000000000089d1c

@end

