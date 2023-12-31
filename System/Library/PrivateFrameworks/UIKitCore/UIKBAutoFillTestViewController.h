//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@class NSString, UIKBAutoFillTestArchive;

__attribute__((visibility("hidden")))
@interface UIKBAutoFillTestViewController : UIViewController
{
    UIKBAutoFillTestArchive *_testArchive;	// 8 = 0x8
}

+ (void)enumerateSubviewsOfRootView:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000080fc1b
- (void).cxx_destruct;	// IMP=0x000000000081029b
@property(readonly, nonatomic) UIKBAutoFillTestArchive *testArchive; // @synthesize testArchive=_testArchive;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;	// IMP=0x000000000081020d
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;	// IMP=0x0000000000810190
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;	// IMP=0x000000000081011b
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;	// IMP=0x00000000008100a6
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000810010
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;	// IMP=0x000000000080ff93
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000000080ff16
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000080fe78
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000080fe07
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000080fda5
- (void)_applyNavigationItemPropertiesFromTestArchive;	// IMP=0x000000000080f9b8
- (void)viewDidLoad;	// IMP=0x000000000080f7e7
- (id)initWithAutoFillTestArchive:(id)arg1;	// IMP=0x000000000080f766

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

