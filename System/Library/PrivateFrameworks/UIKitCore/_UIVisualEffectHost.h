//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, UIView, _UIVisualEffectBackdropView, _UIVisualEffectDescriptor, _UIVisualEffectViewBackdropCaptureGroup;
@protocol _UIVisualEffectViewParticipating;

__attribute__((visibility("hidden")))
@interface _UIVisualEffectHost : NSObject
{
    NSMutableArray *_views;	// 8 = 0x8
    _Bool _autosetSubviewLabelTintColor;	// 16 = 0x10
    _Bool _contentViewRequired;	// 17 = 0x11
    UIView<_UIVisualEffectViewParticipating> *_contentView;	// 24 = 0x18
    _UIVisualEffectViewBackdropCaptureGroup *_primaryCaptureGroup;	// 32 = 0x20
    _UIVisualEffectBackdropView *_captureView;	// 40 = 0x28
    _UIVisualEffectDescriptor *_currentEffectDescriptor;	// 48 = 0x30
    _UIVisualEffectDescriptor *_transitionEffectDescriptor;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000e23a3
@property(readonly, nonatomic) _UIVisualEffectDescriptor *transitionEffectDescriptor; // @synthesize transitionEffectDescriptor=_transitionEffectDescriptor;
@property(retain, nonatomic) _UIVisualEffectDescriptor *currentEffectDescriptor; // @synthesize currentEffectDescriptor=_currentEffectDescriptor;
@property(nonatomic) __weak _UIVisualEffectBackdropView *captureView; // @synthesize captureView=_captureView;
@property(retain, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *primaryCaptureGroup; // @synthesize primaryCaptureGroup=_primaryCaptureGroup;
@property(readonly, nonatomic) NSArray *views; // @synthesize views=_views;
@property(nonatomic) _Bool contentViewRequired; // @synthesize contentViewRequired=_contentViewRequired;
@property(readonly, nonatomic) UIView<_UIVisualEffectViewParticipating> *contentView; // @synthesize contentView=_contentView;
@property(readonly, copy) NSString *description;
- (void)willLoseDescendent:(id)arg1;	// IMP=0x00000000000e21f1
- (void)willGainDescendent:(id)arg1;	// IMP=0x00000000000e218f
- (void)_view:(id)arg1 willLoseDescendent:(id)arg2;	// IMP=0x00000000000e217a
- (void)_view:(id)arg1 willGainDescendent:(id)arg2;	// IMP=0x00000000000e2165
- (void)_view:(id)arg1 willMoveToWindow:(id)arg2;	// IMP=0x00000000000e2106
- (void)_applyRequestedDescriptorEffectInvertingView:(id)arg1;	// IMP=0x00000000000e1fd5
- (void)_applyIdentityDescriptorEffectInvertingView:(id)arg1;	// IMP=0x00000000000e1ea4
- (void)_iterateViews:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e1cf9
- (void)_evaluateInPlaceFiltering;	// IMP=0x00000000000e1bff
- (id)_cloneFilters:(id)arg1;	// IMP=0x00000000000e1a26
- (void)_configureEffectDescriptor:(id)arg1;	// IMP=0x00000000000e1092
- (id)_viewForEntry:(id)arg1 fromCapturePool:(id)arg2 imagePool:(id)arg3 otherPool:(id)arg4;	// IMP=0x00000000000e0ec8
- (void)_applyEffectDescriptor:(id)arg1;	// IMP=0x00000000000e070d
- (void)endTransition;	// IMP=0x00000000000e0638
- (void)beginTransition;	// IMP=0x00000000000e05d8
- (void)prepareToTransitionToEffectDescriptor:(id)arg1;	// IMP=0x00000000000e0407
- (void)_updateAdjustTintColors;	// IMP=0x00000000000e02d4
- (void)_updateView:(id)arg1 shouldDrawWithTintColor:(_Bool)arg2;	// IMP=0x00000000000e01b9
- (void)monitorSubviewsOf:(id)arg1;	// IMP=0x00000000000e019e
- (id)initWithContentView:(id)arg1;	// IMP=0x00000000000dfd54

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

