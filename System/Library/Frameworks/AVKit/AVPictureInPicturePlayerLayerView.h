//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class AVPlayerLayer, _AVSimplePlayerLayerView;

__attribute__((visibility("hidden")))
@interface AVPictureInPicturePlayerLayerView : UIView
{
    _AVSimplePlayerLayerView *_simplePlayerLayerView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000003f1e8
- (void)detachPlayerLayer;	// IMP=0x000000000003f16e
- (void)attachPlayerLayer;	// IMP=0x000000000003ef56
@property(readonly, nonatomic) AVPlayerLayer *playerLayer;

@end

