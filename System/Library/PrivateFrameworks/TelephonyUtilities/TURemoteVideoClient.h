//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CALayer, NSString;

__attribute__((visibility("hidden")))
@interface TURemoteVideoClient : NSObject
{
    long long _videoContextSlotIdentifier;	// 8 = 0x8
    CALayer *_videoLayer;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000005c5e4
@property(retain, nonatomic) CALayer *videoLayer; // @synthesize videoLayer=_videoLayer;
@property(readonly, nonatomic) long long videoContextSlotIdentifier; // @synthesize videoContextSlotIdentifier=_videoContextSlotIdentifier;
- (void)cleanUpSubLayerForLayer:(id)arg1;	// IMP=0x000000000005c388
- (id)nameForSubLayer;	// IMP=0x000000000005c35c
- (void)insertSubLayerInLayer:(id)arg1 videoSlotIdentifier:(long long)arg2;	// IMP=0x000000000005bb23
- (void)setVideoLayer:(id)arg1 forMode:(int)arg2;	// IMP=0x000000000005b91a
- (id)initWithVideoContextSlotIdentifier:(long long)arg1;	// IMP=0x000000000005b8dd
- (id)init;	// IMP=0x000000000005b853

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

