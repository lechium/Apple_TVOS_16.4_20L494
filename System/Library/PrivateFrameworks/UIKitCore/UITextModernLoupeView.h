//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class CADisplayLink, _UIPortalView;
@protocol UICoordinateSpace;

__attribute__((visibility("hidden")))
@interface UITextModernLoupeView : UIView
{
    UIView *_sourceView;	// 8 = 0x8
    UIView *_maskView;	// 16 = 0x10
    UIView *_backgroundView;	// 24 = 0x18
    UIView *_glowView;	// 32 = 0x20
    UIView *_portalContainerView;	// 40 = 0x28
    struct CGPoint _modelPosition;	// 48 = 0x30
    CADisplayLink *_displayLink;	// 64 = 0x40
    _UIPortalView *_portalView;	// 72 = 0x48
    _Bool _visible;	// 80 = 0x50
    _Bool _statusBarHidden;	// 81 = 0x51
    double _visualOffset;	// 88 = 0x58
}

+ (_Bool)isModernLoupeEnabled;	// IMP=0x0060000000d4f50c
- (void).cxx_destruct;	// IMP=0x0000000000d513f6
@property(nonatomic) struct CGPoint modelPosition; // @synthesize modelPosition=_modelPosition;
@property(nonatomic) double visualOffset; // @synthesize visualOffset=_visualOffset;
@property(nonatomic) _Bool statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
- (void)_displayLinkFired:(id)arg1;	// IMP=0x0000000000d50dcd
- (void)layoutSubviews;	// IMP=0x0000000000d50cad
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2 removeWhenComplete:(_Bool)arg3;	// IMP=0x0000000000d508cb
- (void)setVisible:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000d508b6
- (id)backgroundColorIfNecessary;	// IMP=0x0000000000d50219
@property(readonly, nonatomic) id <UICoordinateSpace> containerCoordinateSpace;
@property(readonly, nonatomic) struct CGSize preferredSize;
- (void)_stopDisplayLink;	// IMP=0x0000000000d5017b
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000d5010a
- (void)_updateColorsForTraitCollection:(id)arg1;	// IMP=0x0000000000d50035
- (id)initWithSourceView:(id)arg1;	// IMP=0x0000000000d4f514

@end

