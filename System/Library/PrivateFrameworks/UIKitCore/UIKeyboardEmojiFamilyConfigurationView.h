//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSIndexPath, NSMutableArray, NSString, UIKBTree, UIKeyboardEmojiWellView, UIStackView;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiFamilyConfigurationView : UIView
{
    double _metachronalRhythmAnimationStartTime;	// 8 = 0x8
    _Bool _usesDarkStyle;	// 16 = 0x10
    _Bool _hasSplitFontSupport;	// 17 = 0x11
    NSMutableArray *_familyMemberStackViews;	// 24 = 0x18
    UIView *_separatorView;	// 32 = 0x20
    UIStackView *_previewWellStackView;	// 40 = 0x28
    UIKeyboardEmojiWellView *_neutralWellView;	// 48 = 0x30
    UIKeyboardEmojiWellView *_configuredWellView;	// 56 = 0x38
    NSIndexPath *_lastSelectedIndexPath;	// 64 = 0x40
    NSString *_baseEmojiString;	// 72 = 0x48
    NSMutableArray *_selectedVariantIndices;	// 80 = 0x50
    NSArray *_skinToneVariantRows;	// 88 = 0x58
    NSArray *_variantDisplayRows;	// 96 = 0x60
    UIKBTree *_representedKey;	// 104 = 0x68
}

+ (struct CGSize)preferredContentViewSizeForKey:(id)arg1 withTraits:(id)arg2;	// IMP=0x00100000011cd683
+ (id)_selectionAndSeparatorColorForDarkMode:(_Bool)arg1;	// IMP=0x00100000011c9cc1
- (void).cxx_destruct;	// IMP=0x00000000011cdee1
@property(nonatomic) _Bool hasSplitFontSupport; // @synthesize hasSplitFontSupport=_hasSplitFontSupport;
@property(retain, nonatomic) UIKBTree *representedKey; // @synthesize representedKey=_representedKey;
@property(retain, nonatomic) NSArray *variantDisplayRows; // @synthesize variantDisplayRows=_variantDisplayRows;
@property(retain, nonatomic) NSArray *skinToneVariantRows; // @synthesize skinToneVariantRows=_skinToneVariantRows;
@property(retain, nonatomic) NSMutableArray *selectedVariantIndices; // @synthesize selectedVariantIndices=_selectedVariantIndices;
@property(retain, nonatomic) NSString *baseEmojiString; // @synthesize baseEmojiString=_baseEmojiString;
@property(retain, nonatomic) NSIndexPath *lastSelectedIndexPath; // @synthesize lastSelectedIndexPath=_lastSelectedIndexPath;
@property(retain, nonatomic) UIKeyboardEmojiWellView *configuredWellView; // @synthesize configuredWellView=_configuredWellView;
@property(retain, nonatomic) UIKeyboardEmojiWellView *neutralWellView; // @synthesize neutralWellView=_neutralWellView;
@property(retain, nonatomic) UIStackView *previewWellStackView; // @synthesize previewWellStackView=_previewWellStackView;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) NSMutableArray *familyMemberStackViews; // @synthesize familyMemberStackViews=_familyMemberStackViews;
@property(nonatomic) _Bool usesDarkStyle; // @synthesize usesDarkStyle=_usesDarkStyle;
- (void)updateRenderConfig:(id)arg1;	// IMP=0x00000000011cdc7d
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;	// IMP=0x00000000011cda46
- (void)retestForTouchUpSelectedVariantIndexForKey:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x00000000011cd97c
- (void)retestSelectedVariantIndexForKey:(id)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x00000000011cd699
- (void)layoutSubviews;	// IMP=0x00000000011cd244
- (void)_beginFamilyMetachronalRhythmAnimation;	// IMP=0x00000000011cccaf
- (void)_updateReferencedKeySelectedVariantIndexBasedOnCurrentConfiguration;	// IMP=0x00000000011cca4a
- (_Bool)_hasCompletelyConfiguredSkinToneConfiguration;	// IMP=0x00000000011cc9da
- (void)_updatePreviewWellForCurrentSelection;	// IMP=0x00000000011cc7a2
- (void)_updateBottomRowForSelections:(id)arg1;	// IMP=0x00000000011cc3a0
- (void)_setCurrentlySelectedSkinToneConfiguration:(id)arg1;	// IMP=0x00000000011cbc97
- (id)_currentlySelectedSkinToneConfiguration;	// IMP=0x00000000011cba20
- (unsigned long long)_silhouetteFromCurrentSelections;	// IMP=0x00000000011cb92f
- (id)_wellViewForSection:(long long)arg1 item:(long long)arg2;	// IMP=0x00000000011cb7a7
- (void)_configureFamilyMemberWellStackViews;	// IMP=0x00000000011cacdd
- (void)_configureSkinToneVariantSpecifiersForBaseString:(id)arg1;	// IMP=0x00000000011ca673
- (void)_colorConfigurationDidChange;	// IMP=0x00000000011ca3b4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000011c9d30

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
