//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionReusableView.h>

@class UILabel;

__attribute__((visibility("hidden")))
@interface HBTopShelfSectionLabel : UICollectionReusableView
{
    UILabel *_textLabel;	// 8 = 0x8
}

+ (struct CGSize)sizeForString:(id)arg1;	// IMP=0x00600000000661e7
- (void).cxx_destruct;	// IMP=0x0000000000066677
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x00000000000665a8
- (void)_updateTextLabelAppearance;	// IMP=0x00000000000663ea
- (void)applyLayoutAttributes:(id)arg1;	// IMP=0x0000000000065f6b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000065dbb

@end

