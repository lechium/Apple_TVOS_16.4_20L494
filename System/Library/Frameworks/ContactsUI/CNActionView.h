//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSObject, NSString, UIImage, UIImageView, UILabel, UILongPressGestureRecognizer, UITapGestureRecognizer;
@protocol CNActionViewProtocol;

__attribute__((visibility("hidden")))
@interface CNActionView : UIView
{
    _Bool _disabled;	// 8 = 0x8
    UIImage *_image;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    NSString *_type;	// 32 = 0x20
    NSObject<CNActionViewProtocol> *_actionDelegate;	// 40 = 0x28
    long long _style;	// 48 = 0x30
    UIView *_platterView;	// 56 = 0x38
    UIImageView *_imageView;	// 64 = 0x40
    UILabel *_titleLabel;	// 72 = 0x48
    NSArray *_activatedContstrants;	// 80 = 0x50
    UITapGestureRecognizer *_tapGestureRecognizer;	// 88 = 0x58
    UILongPressGestureRecognizer *_longPressGestureRecognizer;	// 96 = 0x60
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x006000000004d025
- (void).cxx_destruct;	// IMP=0x000000000004e5da
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) NSArray *activatedContstrants; // @synthesize activatedContstrants=_activatedContstrants;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *platterView; // @synthesize platterView=_platterView;
@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) __weak NSObject<CNActionViewProtocol> *actionDelegate; // @synthesize actionDelegate=_actionDelegate;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)handleLongPressGesture:(id)arg1;	// IMP=0x000000000004e3ca
- (void)handleTapGesture:(id)arg1;	// IMP=0x000000000004e32b
- (void)updateLabelState;	// IMP=0x000000000004dfe5
- (void)updateImageViewState;	// IMP=0x000000000004ded5
- (void)updatePlatterViewState;	// IMP=0x000000000004de87
- (void)updateConstraints;	// IMP=0x000000000004d125
- (void)didMoveToWindow;	// IMP=0x000000000004d0e4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000004cf2c

@end

