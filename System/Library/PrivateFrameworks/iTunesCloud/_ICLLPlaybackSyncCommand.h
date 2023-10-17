//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _ICLLPlaybackSyncCommand : PBCodable
{
    NSString *_participantState;	// 8 = 0x8
    int _payload;	// 16 = 0x10
    NSString *_transportControlState;	// 24 = 0x18
    CDStruct_69063d38 _has;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000160db8
- (unsigned long long)hash;	// IMP=0x0000000000160d38
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000160c43
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000160b82
- (void)writeTo:(id)arg1;	// IMP=0x0000000000160b25
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000160b18
- (id)dictionaryRepresentation;	// IMP=0x0000000000160a32
- (id)description;	// IMP=0x0000000000160983

@end
