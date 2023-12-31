//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class NSString, TSKPreviewViewController, TVSettingsInputModeFacade;

@interface TVSettingsLanguageInputModeViewController : TSKViewController
{
    NSString *_languageIdentifier;	// 8 = 0x8
    TSKPreviewViewController *_languagePreviewViewController;	// 16 = 0x10
    TVSettingsInputModeFacade *_inputModeFacade;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000cd22e
@property(readonly, nonatomic) TVSettingsInputModeFacade *inputModeFacade; // @synthesize inputModeFacade=_inputModeFacade;
@property(readonly, nonatomic) TSKPreviewViewController *languagePreviewViewController; // @synthesize languagePreviewViewController=_languagePreviewViewController;
@property(readonly, nonatomic) NSString *languageIdentifier; // @synthesize languageIdentifier=_languageIdentifier;
- (id)previewForItemAtIndexPath:(id)arg1;	// IMP=0x00100000000cd135
- (void)warnAboutMissingInputModes;	// IMP=0x00100000000cce5c
- (void)handleMenuButton:(id)arg1;	// IMP=0x00100000000ccbfe
- (void)toggleInputMode:(id)arg1;	// IMP=0x00100000000ccb8c
- (id)loadSettingGroups;	// IMP=0x00100000000cc7d3
- (id)initWithLanguageIdentifier:(id)arg1;	// IMP=0x00100000000cc6a9

@end

