//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSObject-Protocol.h>

@class UIColor, UIImage, UIView, UIVisualEffect;
@protocol UIConfigurationState, _UIBackgroundConfigurationInternal;

@protocol _UIBackgroundConfigurationInternal <NSObject, NSCopying>
@property(readonly, nonatomic, getter=_hasBackgroundFill) _Bool hasBackgroundFill;
@property(readonly, nonatomic, getter=_hasStroke) _Bool hasStroke;
@property(readonly, nonatomic, getter=_hasBackgroundColor) _Bool hasBackgroundColor;
@property(nonatomic, setter=_setShadowType:) long long _shadowType;
@property(nonatomic, setter=_setCornerRadius:) double _cornerRadius;
@property(nonatomic, setter=__setMaskedCorners:) unsigned long long __maskedCorners;
@property(nonatomic, getter=_strokeLocation, setter=_setStrokeLocation:) long long strokeLocation;
@property(nonatomic) double strokeOutset;
@property(nonatomic) double strokeWidth;
@property(retain, nonatomic) UIColor *strokeColor;
@property(nonatomic) long long imageContentMode;
@property(retain, nonatomic) UIImage *image;
@property(copy, nonatomic) UIVisualEffect *visualEffect;
@property(readonly, nonatomic) _Bool isTintBackgroundColor;
@property(retain, nonatomic) UIColor *backgroundColor;
@property(nonatomic) unsigned long long edgesAddingLayoutMarginsToBackgroundInsets;
@property(nonatomic) struct NSDirectionalEdgeInsets backgroundInsets;
@property(nonatomic) double cornerRadius;
@property(retain, nonatomic) UIView *customView;
- (_Bool)_isEqualToInternalConfigurationQuick:(id <_UIBackgroundConfigurationInternal>)arg1;
- (_Bool)_backgroundFillIsEqual:(id <_UIBackgroundConfigurationInternal>)arg1 withTintColor:(UIColor *)arg2;
- (UIColor *)resolvedStrokeColorForTintColor:(UIColor *)arg1;
- (UIColor *)resolvedBackgroundColorForTintColor:(UIColor *)arg1;
- (id <_UIBackgroundConfigurationInternal>)_updatedConfigurationForState:(id <UIConfigurationState>)arg1;
@end

