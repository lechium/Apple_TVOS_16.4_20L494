//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class VSFontCenter;

__attribute__((visibility("hidden")))
@interface VSOnscreenCodeWrapperView : UIView
{
    VSFontCenter *_fontCenter;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001759a
@property(retain, nonatomic) VSFontCenter *fontCenter; // @synthesize fontCenter=_fontCenter;
- (id)createDetailsLabelWithTextColor:(id)arg1 withBoldWeight:(_Bool)arg2;	// IMP=0x0000000000017408
- (id)createDescriptionLabel;	// IMP=0x0000000000017294
- (id)createTitleLabel;	// IMP=0x000000000001714d
- (void)updateUIWithViewModel:(id)arg1;	// IMP=0x0000000000017147
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000170b4
- (id)init;	// IMP=0x0000000000017044

@end
