//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVSettingKit/TSKViewController.h>

@class TVSettingsPreviouslyUsedEmailFacade, UIBarButtonItem;

@interface TVSettingsPreviouslyUsedEmailViewController : TSKViewController
{
    TVSettingsPreviouslyUsedEmailFacade *_emailFacade;	// 8 = 0x8
    UIBarButtonItem *_editButtonItem;	// 16 = 0x10
    UIBarButtonItem *_doneButtonItem;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000059120
@property(retain, nonatomic) UIBarButtonItem *doneButtonItem; // @synthesize doneButtonItem=_doneButtonItem;
@property(retain, nonatomic) UIBarButtonItem *editButtonItem; // @synthesize editButtonItem=_editButtonItem;
@property(retain, nonatomic) TVSettingsPreviouslyUsedEmailFacade *emailFacade; // @synthesize emailFacade=_emailFacade;
- (void)_clearAll;	// IMP=0x0010000000058de4
- (void)_showDeleteConfirmationForItem:(id)arg1;	// IMP=0x0010000000058983
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0010000000058923
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x0010000000058902
- (void)clearAll;	// IMP=0x00100000000588f0
- (void)willResumeFromBackground;	// IMP=0x00100000000588de
- (id)title;	// IMP=0x00100000000588cd
- (id)loadSettingGroups;	// IMP=0x00100000000585ba
- (void)_updateNavigationItem;	// IMP=0x001000000005845a
- (void)toggleEditMode:(id)arg1;	// IMP=0x00100000000582f6
- (void)dealloc;	// IMP=0x0010000000058274
- (void)didReceiveMemoryWarning;	// IMP=0x0010000000058245
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00100000000581fd
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00100000000581b5
- (id)initWithStyle:(long long)arg1;	// IMP=0x00100000000580ee

@end
