//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIWebSelectTableViewController;

__attribute__((visibility("hidden")))
@interface UIWebSelectPopover
{
    UIWebSelectTableViewController *_tableViewController;	// 8 = 0x8
}

@property(retain, nonatomic) UIWebSelectTableViewController *_tableViewController; // @synthesize _tableViewController;
- (void)_userActionDismissedPopover:(id)arg1;	// IMP=0x00000000006800e9
- (void)controlEndEditing;	// IMP=0x00000000006800e3
- (void)controlBeginEditing;	// IMP=0x00000000006800cf
- (id)controlView;	// IMP=0x00000000006800c7
- (void)dealloc;	// IMP=0x0000000000680004
- (id)initWithDOMHTMLSelectElement:(id)arg1 cachedItems:(id)arg2 singleSelectionItem:(id)arg3 singleSelectionIndex:(unsigned long long)arg4 multipleSelection:(_Bool)arg5;	// IMP=0x000000000067fe03

@end

