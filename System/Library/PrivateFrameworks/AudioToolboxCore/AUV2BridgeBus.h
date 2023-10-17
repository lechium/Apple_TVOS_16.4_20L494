//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AUAudioUnitBus.h"

@class AUAudioUnitV2Bridge;

__attribute__((visibility("hidden")))
@interface AUV2BridgeBus : AUAudioUnitBus
{
    AUAudioUnitV2Bridge *_owner;	// 8 = 0x8
    struct OpaqueAudioComponentInstance *_audioUnit;	// 16 = 0x10
    unsigned int _scope;	// 24 = 0x18
    unsigned int _element;	// 28 = 0x1c
}

- (void).cxx_destruct;	// IMP=0x000000000012d2c0
- (void)setEnabled:(_Bool)arg1;	// IMP=0x000000000012d21e
- (_Bool)setFormat:(id)arg1 error:(id *)arg2;	// IMP=0x000000000012cfd8
- (id)format;	// IMP=0x000000000012c789
- (id)initWithOwner:(id)arg1 au:(struct OpaqueAudioComponentInstance *)arg2 scope:(unsigned int)arg3 element:(unsigned int)arg4;	// IMP=0x000000000012c6d8

@end

