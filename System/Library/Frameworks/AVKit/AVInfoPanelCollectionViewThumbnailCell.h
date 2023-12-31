//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class AVObservationController, NSLayoutConstraint, NSString, UIImageView, UILabel;
@protocol AVImageProxyProtocol;

__attribute__((visibility("hidden")))
@interface AVInfoPanelCollectionViewThumbnailCell : UICollectionViewCell
{
    UIImageView *_imageView;	// 8 = 0x8
    UIImageView *_checkmarkImageView;	// 16 = 0x10
    UILabel *_checkmarkLabel;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    NSLayoutConstraint *_imageHeightConstraint;	// 40 = 0x28
    NSLayoutConstraint *_imageWidthConstraint;	// 48 = 0x30
    NSLayoutConstraint *_imageViewLeftAnchorContraint;	// 56 = 0x38
    NSLayoutConstraint *_imageViewRightAnchorContraint;	// 64 = 0x40
    NSLayoutConstraint *_titleWidthConstraint;	// 72 = 0x48
    NSLayoutConstraint *_titleLabelTopConstraint;	// 80 = 0x50
    NSLayoutConstraint *_titleLabelBottomConstraint;	// 88 = 0x58
    id <AVImageProxyProtocol> _imageProxy;	// 96 = 0x60
    AVObservationController *_kvoController;	// 104 = 0x68
}

+ (id)_imageWithColor:(id)arg1 andSize:(struct CGSize)arg2;	// IMP=0x006000000004960f
+ (id)_checkmarkImage;	// IMP=0x00600000000495b4
+ (id)_labelFontForCellWithImage;	// IMP=0x006000000004959b
- (void).cxx_destruct;	// IMP=0x0000000000048bb9
- (id)_placeholderImage;	// IMP=0x0000000000048a6d
- (void)_updateAppearanceWithAnimationCoordinator:(id)arg1;	// IMP=0x0000000000048896
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000048763
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000000486a5
- (void)setSelected:(_Bool)arg1;	// IMP=0x000000000004862c
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) id <AVImageProxyProtocol> imageProxy;
- (void)_updateImage;	// IMP=0x0000000000047cd3
- (void)prepareForReuse;	// IMP=0x0000000000047c79
- (void)dealloc;	// IMP=0x0000000000047c30
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000046998

@end

