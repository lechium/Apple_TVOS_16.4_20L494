//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSTimer, UILabel, _UIBackdropView;

__attribute__((visibility("hidden")))
@interface UIWebPDFLabelView : UIView
{
    UILabel *_label;	// 144 = 0x90
    _UIBackdropView *_backdropView;	// 152 = 0x98
    NSTimer *_timer;	// 160 = 0xa0
    unsigned long long currentPageIndex;	// 168 = 0xa8
}

@property(nonatomic) unsigned long long currentPageIndex; // @synthesize currentPageIndex;
- (void)_makeRoundedCorners;	// IMP=0x000000000125da18
- (void)fadeOut;	// IMP=0x000000000125d925
- (void)_fadeOutAnimationDidStop;	// IMP=0x000000000125d900
- (void)showNowInSuperView:(id)arg1 atOrigin:(struct CGPoint)arg2 withText:(id)arg3 animated:(_Bool)arg4;	// IMP=0x000000000125d737
- (double)_fadeOutDuration;	// IMP=0x000000000125d729
- (double)_fadeOutDelay;	// IMP=0x000000000125d71b
@property(readonly, nonatomic, getter=isTimerInstalled) _Bool timerInstalled;
- (void)setText:(id)arg1;	// IMP=0x000000000125d6cd
- (void)sizeToFit;	// IMP=0x000000000125d603
- (void)dealloc;	// IMP=0x000000000125d59e
- (void)clearTimer;	// IMP=0x000000000125d565
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000125d357

@end

