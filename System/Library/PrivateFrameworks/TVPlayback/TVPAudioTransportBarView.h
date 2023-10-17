//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TVPDurationValueTransformer, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface TVPAudioTransportBarView
{
    _Bool _didInitializeProgressBar;	// 8 = 0x8
    UIView *_audioPlayerHeadView;	// 16 = 0x10
    UILabel *_audioElapsedTimeLabel;	// 24 = 0x18
    TVPDurationValueTransformer *_durationTransformer;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000f7fe6
@property(retain, nonatomic) TVPDurationValueTransformer *durationTransformer; // @synthesize durationTransformer=_durationTransformer;
@property(retain, nonatomic) UILabel *audioElapsedTimeLabel; // @synthesize audioElapsedTimeLabel=_audioElapsedTimeLabel;
@property(retain, nonatomic) UIView *audioPlayerHeadView; // @synthesize audioPlayerHeadView=_audioPlayerHeadView;
- (_Bool)supportsThumbnailView;	// IMP=0x00000000000f7f80
- (double)dimmingAlpha;	// IMP=0x00000000000f7f72
- (id)createProgressBarView;	// IMP=0x00000000000f7f47
- (void)setElapsedTimeTitle:(id)arg1;	// IMP=0x00000000000f7cc7
- (void)configureAppearanceForTrackChange;	// IMP=0x00000000000f7c06
- (void)transitionAudioPlayerHeadToFocusedState:(_Bool)arg1;	// IMP=0x00000000000f75d6
- (void)_showStateForProgressBar:(id)arg1 focused:(_Bool)arg2;	// IMP=0x00000000000f7150
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000000f7017
- (id)preferredFocusEnvironments;	// IMP=0x00000000000f6f7f
@property(readonly, nonatomic) _Bool isScrubberFocused;
- (void)layoutSubviews;	// IMP=0x00000000000f6e26

@end

