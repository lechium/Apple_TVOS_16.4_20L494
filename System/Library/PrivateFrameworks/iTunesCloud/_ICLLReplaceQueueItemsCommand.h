//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray, NSString, _ICLLAutoPlaySource, _ICLLRadioSource;

__attribute__((visibility("hidden")))
@interface _ICLLReplaceQueueItemsCommand : PBCodable
{
    _ICLLAutoPlaySource *_autoPlay;	// 8 = 0x8
    NSMutableArray *_items;	// 16 = 0x10
    NSString *_preferredPlayItemId;	// 24 = 0x18
    NSString *_queueContext;	// 32 = 0x20
    _ICLLRadioSource *_radio;	// 40 = 0x28
    int _revision;	// 48 = 0x30
    int _trackGenerationSource;	// 52 = 0x34
    CDStruct_4af0550e _has;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000003dd25
- (unsigned long long)hash;	// IMP=0x000000000003dc3b
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000003da76
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000003d7ce
- (void)writeTo:(id)arg1;	// IMP=0x000000000003d5f4
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000003d5e7
- (id)dictionaryRepresentation;	// IMP=0x000000000003d20b
- (id)description;	// IMP=0x000000000003d15c

@end

