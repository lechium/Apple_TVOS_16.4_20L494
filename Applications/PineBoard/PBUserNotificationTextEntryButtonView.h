//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIStackView.h>

@class NSArray;
@protocol TextEntryButtonViewDelegate;

@interface PBUserNotificationTextEntryButtonView : UIStackView
{
    NSArray *_buttonTitles;	// 8 = 0x8
    NSArray *_buttons;	// 16 = 0x10
    long long _defaultButtonIndex;	// 24 = 0x18
    id <TextEntryButtonViewDelegate> _delegate;	// 32 = 0x20
}

+ (id)_createButtonsWithTitles:(id)arg1;	// IMP=0x0040000000134df0
- (void).cxx_destruct;	// IMP=0x002000000013507f
@property(nonatomic) __weak id <TextEntryButtonViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long defaultButtonIndex; // @synthesize defaultButtonIndex=_defaultButtonIndex;
@property(copy, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property(readonly, copy, nonatomic) NSArray *buttonTitles; // @synthesize buttonTitles=_buttonTitles;
- (void)_didSelectButton:(id)arg1;	// IMP=0x0010000000134f65
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0010000000134d55
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0010000000134d42
- (long long)indexOfButton:(id)arg1;	// IMP=0x0010000000134ccb
- (id)buttonAtIndex:(long long)arg1;	// IMP=0x0010000000134c6b
- (id)buttonWithTitle:(id)arg1;	// IMP=0x0010000000134a5a
- (id)initWithButtons:(id)arg1;	// IMP=0x0010000000134721
- (id)initWithButtonTitles:(id)arg1;	// IMP=0x00100000001346a2

@end
