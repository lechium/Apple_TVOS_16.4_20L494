//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNTransportButton, UIColor, UIImageView;

__attribute__((visibility("hidden")))
@interface CNPropertySimpleTransportCell
{
    CNTransportButton *_transportIcon1;	// 24 = 0x18
    CNTransportButton *_transportIcon2;	// 32 = 0x20
    CNTransportButton *_transportIcon3;	// 40 = 0x28
    UIImageView *_starView;	// 48 = 0x30
    _Bool _allowsActions;	// 56 = 0x38
    _Bool _shouldShowTransportButtons;	// 57 = 0x39
    UIColor *_actionsColor;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000009b0f2
@property(retain, nonatomic) UIColor *actionsColor; // @synthesize actionsColor=_actionsColor;
@property(nonatomic) _Bool shouldShowTransportButtons; // @synthesize shouldShowTransportButtons=_shouldShowTransportButtons;
@property(nonatomic) _Bool allowsActions; // @synthesize allowsActions=_allowsActions;
- (void)transportButtonClicked:(id)arg1;	// IMP=0x000000000009af30
- (_Bool)shouldPerformDefaultAction;	// IMP=0x000000000009aee7
- (id)variableConstraints;	// IMP=0x000000000009a62e
- (id)rightMostView;	// IMP=0x000000000009a57b
- (void)updateStarIcon;	// IMP=0x000000000009a446
- (void)updateTransportButtons;	// IMP=0x000000000009a1e3
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x000000000009a0d8
- (void)updateWithPropertyItem:(id)arg1;	// IMP=0x000000000009a082
- (void)setCardGroupItem:(id)arg1;	// IMP=0x0000000000099f32
@property(readonly, nonatomic) _Bool shouldShowStar;
@property(readonly, nonatomic) UIImageView *standardStarView;
- (void)_updateStarImageForView:(id)arg1;	// IMP=0x0000000000099c58
@property(readonly, nonatomic) CNTransportButton *transportIcon3;
@property(readonly, nonatomic) CNTransportButton *transportIcon2;
@property(readonly, nonatomic) CNTransportButton *transportIcon1;
@property(readonly, nonatomic) CNTransportButton *standardTransportIcon;
- (void)_contentSizeCategoryDidChange:(id)arg1;	// IMP=0x0000000000099ad0
- (void)dealloc;	// IMP=0x0000000000099a5b
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000000999c1

@end

