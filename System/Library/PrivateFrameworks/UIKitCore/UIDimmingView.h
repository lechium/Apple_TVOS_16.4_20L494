//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSMutableSet, NSString, UIBarButtonItem, UIColor, UIEvent, UIImageView, UITapGestureRecognizer;
@protocol UIDimmingViewDelegate;

__attribute__((visibility("hidden")))
@interface UIDimmingView : UIView
{
    UIBarButtonItem *_highlightedBarButtonItem;	// 144 = 0x90
    UIImageView *_highlightedImageView;	// 152 = 0x98
    UIImageView *_backgroundGlow;	// 160 = 0xa0
    NSArray *_passthroughViews;	// 168 = 0xa8
    _Bool _ignoresTouches;	// 176 = 0xb0
    _Bool _inPassthroughHitTest;	// 177 = 0xb1
    UIColor *_dimmingColor;	// 184 = 0xb8
    UITapGestureRecognizer *_singleFingerTapRecognizer;	// 192 = 0xc0
    UIEvent *_observedEventForAdditionalGestures;	// 200 = 0xc8
    NSMutableSet *_additionalEventGestureRecognizers;	// 208 = 0xd0
    _Bool _suppressesBackdrops;	// 216 = 0xd8
    id <UIDimmingViewDelegate> _delegate;	// 224 = 0xe0
    double _percentDisplayed;	// 232 = 0xe8
    double _percentLightened;	// 240 = 0xf0
    NSArray *_lowerWindowDismissalGestureViews;	// 248 = 0xf8
}

+ (id)defaultDimmingColor;	// IMP=0x001000000115ce5a
- (void).cxx_destruct;	// IMP=0x000000000115efb1
@property(copy, nonatomic) NSArray *lowerWindowDismissalGestureViews; // @synthesize lowerWindowDismissalGestureViews=_lowerWindowDismissalGestureViews;
@property(nonatomic) double percentLightened; // @synthesize percentLightened=_percentLightened;
@property(nonatomic) double percentDisplayed; // @synthesize percentDisplayed=_percentDisplayed;
@property(nonatomic) _Bool suppressesBackdrops; // @synthesize suppressesBackdrops=_suppressesBackdrops;
@property(retain, nonatomic) UIColor *dimmingColor; // @synthesize dimmingColor=_dimmingColor;
@property(nonatomic) _Bool ignoresTouches; // @synthesize ignoresTouches=_ignoresTouches;
@property(copy, nonatomic) NSArray *passthroughViews; // @synthesize passthroughViews=_passthroughViews;
@property(nonatomic) __weak id <UIDimmingViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_gestureRecognizersForEvent:(id)arg1;	// IMP=0x000000000115ee6a
- (void)_clearAdditionalEventGestures;	// IMP=0x000000000115ee1a
- (void)_queueAdditionalEventGesturesFromView:(id)arg1;	// IMP=0x000000000115ecce
- (void)_sendDelegateDimmingViewWasTapped;	// IMP=0x000000000115ec44
- (void)_simulateTap;	// IMP=0x000000000115ec23
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000115ebea
- (void)handleSingleTap:(id)arg1;	// IMP=0x000000000115ebae
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;	// IMP=0x000000000115eb25
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;	// IMP=0x000000000115e751
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000115df3b
- (void)mouseUp:(struct __GSEvent *)arg1;	// IMP=0x000000000115df29
- (void)updateBackgroundColor;	// IMP=0x000000000115dbfc
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000115db65
- (void)display:(_Bool)arg1 withAnimationDuration:(double)arg2 afterDelay:(double)arg3;	// IMP=0x000000000115d8ef
- (void)display:(_Bool)arg1;	// IMP=0x000000000115d706
@property(readonly, nonatomic) _Bool displayed;
- (id)_backdropViewsToAnimate;	// IMP=0x000000000115d494
@property(retain, nonatomic) UIBarButtonItem *highlightedBarButtonItem;
- (void)dimmingRemovalAnimationDidStop;	// IMP=0x000000000115d038
- (int)textEffectsVisibilityLevel;	// IMP=0x000000000115d02d
- (void)willMoveToWindow:(id)arg1;	// IMP=0x000000000115cfec
- (void)dealloc;	// IMP=0x000000000115cfa1
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000115ce73

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

