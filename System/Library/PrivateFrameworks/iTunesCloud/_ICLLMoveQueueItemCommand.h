//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _ICLLMoveQueueItemCommand : PBCodable
{
    NSString *_itemId;	// 8 = 0x8
    int _position;	// 16 = 0x10
    NSString *_queueContext;	// 24 = 0x18
    int _revision;	// 32 = 0x20
    CDStruct_bf543796 _has;	// 36 = 0x24
}

- (void).cxx_destruct;	// IMP=0x00000000000cd5c0
- (unsigned long long)hash;	// IMP=0x00000000000cd516
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000cd3f0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000cd313
- (void)writeTo:(id)arg1;	// IMP=0x00000000000cd26a
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000000000cd25d
- (id)dictionaryRepresentation;	// IMP=0x00000000000cd11a
- (id)description;	// IMP=0x00000000000cd06b

@end

