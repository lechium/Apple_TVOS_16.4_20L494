//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString, UIImage, UIImageSymbolConfiguration;
@protocol _UIBarButtonItemDataFallback;

__attribute__((visibility("hidden")))
@interface _UIBarButtonItemData
{
    NSDictionary *_titleTextAttributes[4];	// 8 = 0x8
    UIImage *_backgroundImage[4];	// 40 = 0x28
    struct UIOffset _titlePositionAdjustment[4];	// 72 = 0x48
    struct UIOffset _backgroundImagePositionAdjustment[4];	// 136 = 0x88
    UIImageSymbolConfiguration *_imageSymbolConfiguration;	// 200 = 0xc8
    UIImageSymbolConfiguration *_compactImageSymbolConfiguration;	// 208 = 0xd0
    UIImage *_backIndicatorImage;	// 216 = 0xd8
    UIImage *_backIndicatorTransitionMaskImage;	// 224 = 0xe0
    UIImageSymbolConfiguration *_backIndicatorSymbolConfiguration;	// 232 = 0xe8
    UIImageSymbolConfiguration *_compactBackIndicatorSymbolConfiguration;	// 240 = 0xf0
    id <_UIBarButtonItemDataFallback> _fallback;	// 248 = 0xf8
    struct {
        unsigned int hasUserFont:1;
        unsigned int hasUserColor:1;
        unsigned int hasUserTitlePosition:1;
        unsigned int hasUserBackgroundImage:1;
        unsigned int hasUserBackgroundImagePosition:1;
    } _stateFlags[4];	// 256 = 0x100
    struct {
        unsigned int isBackButtonData:1;
    } _dataFlags;	// 288 = 0x120
    long long _style;	// 296 = 0x128
}

+ (id)decodeFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x0010000000d5309e
+ (id)standardBackButtonData;	// IMP=0x0010000000d51c0e
+ (id)standardItemDataForStyle:(long long)arg1;	// IMP=0x0010000000d51ad9
- (void).cxx_destruct;	// IMP=0x0000000000d55969
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (struct UIOffset)backgroundImagePositionAdjustmentForState:(long long)arg1 style:(long long)arg2;	// IMP=0x0000000000d55912
- (id)backgroundImageForState:(long long)arg1 style:(long long)arg2;	// IMP=0x0000000000d558c2
- (struct UIOffset)titlePositionAdjustmentForState:(long long)arg1 style:(long long)arg2;	// IMP=0x0000000000d55879
- (id)colorForState:(long long)arg1 style:(long long)arg2;	// IMP=0x0000000000d55829
- (id)backIndicatorTextStyleForSymbolConfiguration;	// IMP=0x0000000000d5580c
- (id)textStyleForSymbolConfiguration;	// IMP=0x0000000000d557ef
- (id)fontForState:(long long)arg1 style:(long long)arg2;	// IMP=0x0000000000d5579f
@property(readonly, nonatomic) UIImageSymbolConfiguration *compactBackIndicatorTransitionMaskSymbolConfiguration;
@property(readonly, nonatomic) UIImageSymbolConfiguration *compactBackIndicatorSymbolConfiguration;
@property(readonly, nonatomic) UIImageSymbolConfiguration *backIndicatorTransitionMaskSymbolConfiguration;
@property(readonly, nonatomic) UIImageSymbolConfiguration *backIndicatorSymbolConfiguration;
@property(readonly, nonatomic) UIImage *compactBackIndicatorTransitionMaskImage;
@property(readonly, nonatomic) UIImage *compactBackIndicatorImage;
@property(readonly, nonatomic) UIImage *backIndicatorTransitionMaskImage;
@property(readonly, nonatomic) UIImage *backIndicatorImage;
- (void)resetBackIndicatorImages;	// IMP=0x0000000000d551ff
- (void)setBackIndicatorImage:(id)arg1 transitionMaskImage:(id)arg2;	// IMP=0x0000000000d55164
@property(readonly, nonatomic) UIImageSymbolConfiguration *compactImageSymbolConfiguration;
@property(readonly, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration;
- (void)setBackgroundImagePositionAdjustment:(struct UIOffset)arg1 forState:(long long)arg2;	// IMP=0x0000000000d54eaa
- (struct UIOffset)backgroundImagePositionAdjustmentForState:(long long)arg1;	// IMP=0x0000000000d54e27
- (void)setBackgroundImage:(id)arg1 forState:(long long)arg2;	// IMP=0x0000000000d54dab
- (id)backgroundImageForState:(long long)arg1;	// IMP=0x0000000000d54d4d
- (void)setTitlePositionAdjustment:(struct UIOffset)arg1 forState:(long long)arg2;	// IMP=0x0000000000d54ce7
- (struct UIOffset)titlePositionAdjustmentForState:(long long)arg1;	// IMP=0x0000000000d54c64
- (void)setTitleTextAttributes:(id)arg1 forState:(long long)arg2;	// IMP=0x0000000000d54b66
- (id)titleTextAttributesForState:(long long)arg1;	// IMP=0x0000000000d54a17
- (id)_fallbackColorForState:(long long)arg1;	// IMP=0x0000000000d5491c
- (id)_fallbackFontForState:(long long)arg1;	// IMP=0x0000000000d5488d
- (id)replicate;	// IMP=0x0000000000d5465d
- (_Bool)checkEqualTo:(id)arg1;	// IMP=0x0000000000d541f4
- (long long)hashInto:(long long)arg1;	// IMP=0x0000000000d54120
- (void)describeInto:(id)arg1;	// IMP=0x0000000000d53db3
- (void)encodeToCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x0000000000d5350e
- (void)_decodeBackgroundPositionAdjustmentsFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x0000000000d52c36
- (void)_decodeTitlePositionAdjustmentsFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x0000000000d527ce
- (void)_decodeBackgroundImagesFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x0000000000d52423
- (void)_decodeTitleTextAttributesFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x0000000000d51f48
- (id)copyAsBackButtonDataWithIndicatorsAndFallbackFrom:(id)arg1;	// IMP=0x0000000000d51e48
@property(readonly, nonatomic) id <_UIBarButtonItemDataFallback> fallback;
- (id)dataWithNewFallback:(id)arg1;	// IMP=0x0000000000d51d9d
@property(readonly, nonatomic) _Bool isBackButtonData;
- (id)initWithStyle:(long long)arg1;	// IMP=0x0000000000d51c8a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

