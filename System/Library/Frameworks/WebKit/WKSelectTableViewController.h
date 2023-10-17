//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

@class WKContentView, WKSelectPopover;

__attribute__((visibility("hidden")))
@interface WKSelectTableViewController : UITableViewController
{
    unsigned long long _singleSelectionIndex;	// 8 = 0x8
    unsigned long long _singleSelectionSection;	// 16 = 0x10
    long long _numberOfSections;	// 24 = 0x18
    _Bool _allowsMultipleSelection;	// 32 = 0x20
    double _fontSize;	// 40 = 0x28
    double _maximumTextWidth;	// 48 = 0x30
    long long _textAlignment;	// 56 = 0x38
    WKSelectPopover *_popover;	// 64 = 0x40
    WKContentView *_contentView;	// 72 = 0x48
}

@property(nonatomic) WKSelectPopover *popover; // @synthesize popover=_popover;
@property(readonly, nonatomic) _Bool shouldDismissWithAnimation;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000039377b
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000039335e
- (void *)findItemAt:(id)arg1;	// IMP=0x0000000000393220
- (long long)findItemIndexAt:(id)arg1;	// IMP=0x00000000003930c3
- (void)populateCell:(id)arg1 withItem:(const void *)arg2;	// IMP=0x0000000000393013
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x0000000000392f08
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000392dd8
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000392dc7
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000392cd2
- (id)initWithView:(id)arg1 hasGroups:(_Bool)arg2;	// IMP=0x0000000000392abd

@end
