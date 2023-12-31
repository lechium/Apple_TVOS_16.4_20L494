//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCMockIDSDatagramChannel;

__attribute__((visibility("hidden")))
@interface VCMockIDSDatagramChannelController
{
    VCMockIDSDatagramChannel *_datagramChannel;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x006000000031522e
- (void)setReadyToReadBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000315567
- (void)setWriteDatagramBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000315519
- (void)setWriteDatagramsBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000003154cb
- (void)invalidate;	// IMP=0x0000000000315482
- (void)dealloc;	// IMP=0x000000000031541d
- (id)datagramChannelRequiresOptions:(_Bool)arg1 dataPath:(int)arg2;	// IMP=0x0000000000315287
- (id)datagramChannelRequiresOptions:(_Bool)arg1;	// IMP=0x0000000000315273

@end

