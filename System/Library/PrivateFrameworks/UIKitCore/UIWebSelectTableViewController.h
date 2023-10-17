//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UITableViewController.h"

@class DOMHTMLSelectElement, NSArray, NSString, UITextInputPasswordRules, UIWebSelectPopover;

__attribute__((visibility("hidden")))
@interface UIWebSelectTableViewController : UITableViewController
{
    DOMHTMLSelectElement *_selectionNode;	// 424 = 0x1a8
    NSArray *_cachedItems;	// 432 = 0x1b0
    NSArray *_groupsAndOptions;	// 440 = 0x1b8
    unsigned long long _singleSelectionIndex;	// 448 = 0x1c0
    unsigned long long _singleSelectionSection;	// 456 = 0x1c8
    _Bool _allowsMultipleSelection;	// 464 = 0x1d0
    double _fontSize;	// 472 = 0x1d8
    double _maximumTextWidth;	// 480 = 0x1e0
    long long _textAlignment;	// 488 = 0x1e8
    UIWebSelectPopover *_popover;	// 496 = 0x1f0
}

@property(nonatomic) UIWebSelectPopover *_popover; // @synthesize _popover;
@property(retain, nonatomic) NSArray *_cachedItems; // @synthesize _cachedItems;
@property(retain, nonatomic) NSArray *_groupsAndOptions; // @synthesize _groupsAndOptions;
@property(retain, nonatomic) DOMHTMLSelectElement *_selectionNode; // @synthesize _selectionNode;
- (void)deleteBackward;	// IMP=0x000000000067fd75
- (void)insertText:(id)arg1;	// IMP=0x000000000067fd6f
@property(readonly, nonatomic) _Bool hasText;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;	// IMP=0x000000000067f934
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x000000000067f607
- (id)_optionsForSection:(long long)arg1;	// IMP=0x000000000067f5d1
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;	// IMP=0x000000000067f561
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x000000000067f4fc
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x000000000067f4b8
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000067f3b5
- (void)dealloc;	// IMP=0x000000000067f34f
- (id)initWithDOMHTMLSelectNode:(id)arg1 cachedItems:(id)arg2 singleSelectionIndex:(unsigned long long)arg3 multipleSelection:(_Bool)arg4;	// IMP=0x000000000067f229
- (void)_setupGroupsAndOptions;	// IMP=0x000000000067edc1
- (_Bool)_isEmpty;	// IMP=0x000000000067ed9d

// Remaining properties
@property(nonatomic) long long autocapitalizationType;
@property(nonatomic) long long autocorrectionType;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool enablesReturnKeyAutomatically;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long keyboardAppearance;
@property(nonatomic) long long keyboardType;
@property(copy, nonatomic) UITextInputPasswordRules *passwordRules;
@property(nonatomic) long long returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry;
@property(nonatomic) long long smartDashesType;
@property(nonatomic) long long smartInsertDeleteType;
@property(nonatomic) long long smartQuotesType;
@property(nonatomic) long long spellCheckingType;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *textContentType;

@end
