//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class AVPlayerLayer, AVPlayerLooper, AVQueuePlayer;

@interface TVNPSpatialAudioTutorialPlayerView : UIView
{
    AVPlayerLooper *_looper;	// 8 = 0x8
}

+ (Class)layerClass;	// IMP=0x004000000002d401
- (void).cxx_destruct;	// IMP=0x002000000002d437
@property(retain, nonatomic) AVPlayerLooper *looper; // @synthesize looper=_looper;
@property(readonly, nonatomic) AVPlayerLayer *playerLayer;
@property(retain, nonatomic) AVQueuePlayer *player;

@end
