//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriUI/SiriUISnippetCollectionViewController.h>

@class NSCache, NSDate, NSMutableArray, NSMutableSet, NSOperationQueue, NSSet, NSString, SAGuidanceGuideSnippet, SRBigButtonController, UIImage;

@interface SRGuideViewController : SiriUISnippetCollectionViewController
{
    NSCache *_domainIconCache;	// 8 = 0x8
    NSDate *_startViewingTime;	// 16 = 0x10
    _Bool _showingDetails;	// 24 = 0x18
    NSSet *_siriEnabledAppList;	// 32 = 0x20
    SRBigButtonController *_bigButtonController;	// 40 = 0x28
    NSOperationQueue *_guideImageOperationQueue;	// 48 = 0x30
    NSMutableSet *_spawnedGuideImageFetches;	// 56 = 0x38
    UIImage *_fallbackImage;	// 64 = 0x40
    NSMutableArray *_enabledIntentSupportedAppSnippets;	// 72 = 0x48
    SAGuidanceGuideSnippet *_guideSnippet;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0020000000007fee
@property(retain, nonatomic, getter=_guideSnippet) SAGuidanceGuideSnippet *guideSnippet; // @synthesize guideSnippet=_guideSnippet;
- (_Bool)_canShowWhileLocked;	// IMP=0x0010000000007fd0
- (void)_prepareSiriEnabledAppList;	// IMP=0x0010000000007d3e
- (_Bool)_hasTitle;	// IMP=0x0010000000007ccc
- (id)_fallbackImage;	// IMP=0x0010000000007c31
- (id)_iconImageForGuideDomainSnippet:(id)arg1;	// IMP=0x0010000000007970
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;	// IMP=0x001000000000795a
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;	// IMP=0x0010000000007828
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;	// IMP=0x0010000000007676
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;	// IMP=0x001000000000766e
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;	// IMP=0x0010000000007666
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;	// IMP=0x00100000000075bc
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;	// IMP=0x0010000000006e65
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;	// IMP=0x0010000000006d8b
- (long long)numberOfSectionsInCollectionView:(id)arg1;	// IMP=0x0010000000006d80
- (double)_heightOfRowForDomainSnippet:(id)arg1;	// IMP=0x0010000000006c9f
- (id)_domainSnippetForIndexPath:(id)arg1;	// IMP=0x0010000000006c10
- (id)_domainSnippetForEnabledIntentSupportedAppAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000006bf3
- (id)_domainSnippetForHelpDomainAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000006b73
- (long long)_numberOfIntentEnabledApps;	// IMP=0x0010000000006b56
- (long long)_numberOfIntentSupportedApps;	// IMP=0x0010000000006ae8
- (long long)_numberOfHelpDomains;	// IMP=0x0010000000006a7a
- (long long)_pinAnimationType;	// IMP=0x0010000000006a64
- (_Bool)usePlatterStyle;	// IMP=0x0010000000006a5c
- (_Bool)wantsToManageBackgroundColor;	// IMP=0x0010000000006a54
- (double)desiredHeightForTransparentHeaderView;	// IMP=0x001000000000698c
- (void)configureReusableTransparentHeaderView:(id)arg1;	// IMP=0x00100000000068fc
- (Class)transparentHeaderViewClass;	// IMP=0x00100000000068ce
- (void)_endTrackingGuideShowTimeIfNecessary;	// IMP=0x001000000000673a
- (double)desiredHeightForWidth:(double)arg1;	// IMP=0x001000000000654e
- (void)siriDidDeactivate;	// IMP=0x001000000000653c
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000006428
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000000062e7
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000000060f3
- (void)loadView;	// IMP=0x0010000000005f44
- (id)_bigButtonViewController;	// IMP=0x0010000000005e51
- (void)setDelegate:(id)arg1;	// IMP=0x0010000000005e10
- (void)didReceiveMemoryWarning;	// IMP=0x0010000000005dc7
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000005cb8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

