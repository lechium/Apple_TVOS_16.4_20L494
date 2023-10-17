//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationController.h>

@class NSArray, NSIndexPath, NSString, UITableViewController;
@protocol CNPickerControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNPickerController : UINavigationController
{
    _Bool _allowsDiscoveredItems;	// 8 = 0x8
    _Bool _allowsCustomItems;	// 9 = 0x9
    id _selectedItem;	// 16 = 0x10
    NSArray *_discoveredItems;	// 24 = 0x18
    NSArray *_builtinItems;	// 32 = 0x20
    NSArray *_customItems;	// 40 = 0x28
    NSString *_itemLocalizationKey;	// 48 = 0x30
    CDUnknownBlockType _itemLocalizationBlock;	// 56 = 0x38
    UITableViewController *_tableViewController;	// 64 = 0x40
    NSIndexPath *_selectedIndexPath;	// 72 = 0x48
    long long _discoveredItemsSection;	// 80 = 0x50
    long long _builtinItemsSection;	// 88 = 0x58
    long long _customItemsSection;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000000698e0
@property(nonatomic) long long customItemsSection; // @synthesize customItemsSection=_customItemsSection;
@property(nonatomic) long long builtinItemsSection; // @synthesize builtinItemsSection=_builtinItemsSection;
@property(nonatomic) long long discoveredItemsSection; // @synthesize discoveredItemsSection=_discoveredItemsSection;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) UITableViewController *tableViewController; // @synthesize tableViewController=_tableViewController;
@property(copy, nonatomic) CDUnknownBlockType itemLocalizationBlock; // @synthesize itemLocalizationBlock=_itemLocalizationBlock;
@property(copy, nonatomic) NSString *itemLocalizationKey; // @synthesize itemLocalizationKey=_itemLocalizationKey;
@property(nonatomic) _Bool allowsCustomItems; // @synthesize allowsCustomItems=_allowsCustomItems;
@property(copy, nonatomic) NSArray *customItems; // @synthesize customItems=_customItems;
@property(copy, nonatomic) NSArray *builtinItems; // @synthesize builtinItems=_builtinItems;
@property(nonatomic) _Bool allowsDiscoveredItems; // @synthesize allowsDiscoveredItems=_allowsDiscoveredItems;
@property(copy, nonatomic) NSArray *discoveredItems; // @synthesize discoveredItems=_discoveredItems;
@property(retain, nonatomic) id selectedItem; // @synthesize selectedItem=_selectedItem;
- (id)_itemAtIndexPath:(id)arg1;	// IMP=0x00000000000695d9
- (unsigned long long)_indexForCustomItemAtIndexPath:(id)arg1;	// IMP=0x000000000006951a
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;	// IMP=0x0000000000069508
- (_Bool)textFieldShouldEndEditing:(id)arg1;	// IMP=0x00000000000694a3
- (_Bool)textFieldShouldReturn:(id)arg1;	// IMP=0x00000000000693df
- (void)textFieldDidBeginEditing:(id)arg1;	// IMP=0x00000000000692e6
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000000069124
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;	// IMP=0x000000000006911c
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;	// IMP=0x00000000000690f1
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;	// IMP=0x00000000000690dc
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x0000000000069012
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x0000000000068d96
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000068b5a
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000068a83
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000006899a
- (_Bool)isEditing;	// IMP=0x0000000000068956
- (void)_updateRightButtonItem;	// IMP=0x0000000000068807
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x0000000000068166
- (void)removeCustomItem:(id)arg1;	// IMP=0x0000000000068160
- (void)customLabelUpdated:(id)arg1;	// IMP=0x00000000000680ee
- (void)donePicker:(id)arg1;	// IMP=0x000000000006807d
- (void)cancelPicker:(id)arg1;	// IMP=0x0000000000068031
- (id)titleForAddCustomItem;	// IMP=0x0000000000067fd3
- (id)titleForPickerItem:(id)arg1;	// IMP=0x0000000000067f33
- (id)_titleForPickerItem:(id)arg1;	// IMP=0x0000000000067f2d
- (void)dealloc;	// IMP=0x0000000000067eb8
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000067d74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <CNPickerControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
