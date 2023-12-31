//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSLayoutConstraint, NSString;
@protocol _UITAMICAdaptorViewDelegate;

__attribute__((visibility("hidden")))
@interface _UITAMICAdaptorView : UIView
{
    UIView *_view;	// 144 = 0x90
    NSLayoutConstraint *_width;	// 152 = 0x98
    NSLayoutConstraint *_height;	// 160 = 0xa0
    struct CGSize _layoutSize;	// 168 = 0xa8
    _Bool _inLayout;	// 184 = 0xb8
    float _sizingPriority;	// 188 = 0xbc
    id <_UITAMICAdaptorViewDelegate> _delegate;	// 192 = 0xc0
}

+ (_Bool)shouldWrapView:(id)arg1;	// IMP=0x0010000000119c39
- (void).cxx_destruct;	// IMP=0x000000000011a3c6
@property(nonatomic) __weak id <_UITAMICAdaptorViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float sizingPriority; // @synthesize sizingPriority=_sizingPriority;
@property(readonly, nonatomic) UIView *view; // @synthesize view=_view;
- (void)layoutSubviews;	// IMP=0x000000000011a2ec
- (void)_geometryChanged:(const CDStruct_f46536fb *)arg1 forAncestor:(id)arg2;	// IMP=0x000000000011a29e
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000011a286
- (void)updateForAvailableSize;	// IMP=0x000000000011a102
- (void)didMoveToWindow;	// IMP=0x000000000011a096
- (id)initWithView:(id)arg1;	// IMP=0x0000000000119d59

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

