//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class IKAudioElement, IKViewElement, NSArray, NSMutableDictionary, NSString, _TVOneupView;

__attribute__((visibility("hidden")))
@interface _TVOneupTemplateController : UIViewController
{
    _Bool _requiresReload;	// 8 = 0x8
    unsigned long long _transition;	// 16 = 0x10
    _TVOneupView *_oneupView;	// 24 = 0x18
    IKViewElement *_oneupElement;	// 32 = 0x20
    NSArray *_sections;	// 40 = 0x28
    long long _totalNumberOfItems;	// 48 = 0x30
    long long _focusedFlattenedIndex;	// 56 = 0x38
    NSArray *_modes;	// 64 = 0x40
    IKAudioElement *_audioElement;	// 72 = 0x48
    NSMutableDictionary *_imageProxies;	// 80 = 0x50
    unsigned long long _indexToConfigure;	// 88 = 0x58
    CDUnknownBlockType _indexMapBlock;	// 96 = 0x60
}

+ (id)_indexPathForItemAtFlattenedIndex:(long long)arg1 inSections:(id)arg2;	// IMP=0x00100000000098c2
- (void).cxx_destruct;	// IMP=0x0000000000009c72
@property(copy, nonatomic) CDUnknownBlockType indexMapBlock; // @synthesize indexMapBlock=_indexMapBlock;
@property(nonatomic) _Bool requiresReload; // @synthesize requiresReload=_requiresReload;
@property(nonatomic) unsigned long long indexToConfigure; // @synthesize indexToConfigure=_indexToConfigure;
@property(retain, nonatomic) NSMutableDictionary *imageProxies; // @synthesize imageProxies=_imageProxies;
@property(retain, nonatomic) IKAudioElement *audioElement; // @synthesize audioElement=_audioElement;
@property(copy, nonatomic) NSArray *modes; // @synthesize modes=_modes;
@property(nonatomic) long long focusedFlattenedIndex; // @synthesize focusedFlattenedIndex=_focusedFlattenedIndex;
@property(nonatomic) long long totalNumberOfItems; // @synthesize totalNumberOfItems=_totalNumberOfItems;
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(retain, nonatomic) IKViewElement *oneupElement; // @synthesize oneupElement=_oneupElement;
@property(nonatomic) __weak _TVOneupView *oneupView; // @synthesize oneupView=_oneupView;
@property(nonatomic) unsigned long long transition; // @synthesize transition=_transition;
- (void)_dispatchEvent:(id)arg1 forItemAtFlattenedIndex:(unsigned long long)arg2 cell:(id)arg3;	// IMP=0x0000000000009753
- (id)_imgElementFromLockup:(id)arg1;	// IMP=0x000000000000954e
- (void)_configureSupplementaryView:(id)arg1 withLockup:(id)arg2;	// IMP=0x0000000000009350
- (void)_configureView:(id)arg1 withImageElement:(id)arg2 andIndex:(unsigned long long)arg3;	// IMP=0x0000000000009271
- (unsigned long long)_allowedModesFromModes:(id)arg1;	// IMP=0x00000000000091fb
- (void)_updateWithViewElement:(id)arg1 update:(_Bool)arg2;	// IMP=0x0000000000008ae4
- (void)_configureOneupView;	// IMP=0x0000000000008660
- (void)_setAudioElementIfAny:(id)arg1;	// IMP=0x00000000000083d4
- (_Bool)_isReloadRequired:(id)arg1 addedSectionIndexes:(id)arg2 removedSectionIndexes:(id)arg3 sectionsMoved:(_Bool)arg4;	// IMP=0x00000000000081db
- (id)_mapOldSectionsByNew:(id)arg1 addedIndexes:(id *)arg2 removedIndexes:(id *)arg3 sectionsMoved:(_Bool *)arg4;	// IMP=0x0000000000007f47
- (long long)_flattenedCountWithAutoHighlightIndex:(long long *)arg1;	// IMP=0x0000000000007d3e
- (void)_setTransitionAndModes:(id)arg1;	// IMP=0x0000000000007bd3
- (void)oneupView:(id)arg1 didPlayItemAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000007b69
- (void)oneupView:(id)arg1 didSelectItemAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000007aff
- (void)oneupView:(id)arg1 didFocusItemAtIndex:(unsigned long long)arg2;	// IMP=0x0000000000007a73
- (id)oneupView:(id)arg1 supplementaryViewForItemAtIndex:(unsigned long long)arg2;	// IMP=0x00000000000079a0
- (long long)oneupView:(id)arg1 contentModeForItemAtIndex:(unsigned long long)arg2;	// IMP=0x000000000000789e
- (id)oneupView:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2;	// IMP=0x00000000000077fc
- (long long)numberOfItemsInOneupView:(id)arg1;	// IMP=0x00000000000077ea
- (id)_imageElementAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000007750
- (id)_sectionForIndex:(unsigned long long)arg1 itemIndexOut:(long long *)arg2;	// IMP=0x0000000000007665
- (void)viewDidLoad;	// IMP=0x0000000000007624
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000000750a
- (void)_prepareIndexesToLoad:(unsigned long long)arg1;	// IMP=0x00000000000072f8
- (id)_imageProxyForIndex:(unsigned long long)arg1 forCaching:(_Bool)arg2;	// IMP=0x0000000000006dcb
- (void)_updateCachedIndexes:(CDUnknownBlockType)arg1;	// IMP=0x00000000000069f6
- (void)_unloadIndex:(unsigned long long)arg1;	// IMP=0x000000000000689c
- (void)_loadIndex:(unsigned long long)arg1;	// IMP=0x000000000000670e
- (_Bool)_isElementUpdatedAtFlattenedIndex:(long long)arg1;	// IMP=0x0000000000006683
- (void)loadView;	// IMP=0x0000000000006416
@property(readonly, nonatomic) unsigned long long oneupViewTransition;
- (void)updateWithShowcaseLockupElements:(id)arg1 focusedIndex:(long long)arg2 update:(_Bool)arg3;	// IMP=0x0000000000006138
- (void)updateWithOneElement:(id)arg1;	// IMP=0x0000000000006121
- (id)initWithOneupElement:(id)arg1;	// IMP=0x0000000000006062
- (id)init;	// IMP=0x000000000000604e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

