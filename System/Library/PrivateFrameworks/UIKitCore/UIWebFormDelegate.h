//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIWebBrowserView, _UIWebFormDelegateEditedFormsMap;

__attribute__((visibility("hidden")))
@interface UIWebFormDelegate : NSObject
{
    UIWebBrowserView *_webBrowserView;	// 8 = 0x8
    _UIWebFormDelegateEditedFormsMap *_editedForms;	// 16 = 0x10
}

- (void)acceptedAutoFillWord:(id)arg1;	// IMP=0x00000000006816a0
- (_Bool)hasCurrentSuggestions;	// IMP=0x000000000068166a
- (CDStruct_856ef1b3)suggestionsForString:(id)arg1 inputIndex:(unsigned int)arg2;	// IMP=0x00000000006814af
- (_Bool)formWasEdited;	// IMP=0x0000000000681386
- (void)dataSourceHasChangedForFrame:(id)arg1;	// IMP=0x0000000000681374
- (id)initWithWebBrowserView:(id)arg1;	// IMP=0x000000000068131d
- (void)willSendSubmitEventToForm:(id)arg1 inFrame:(id)arg2 withValues:(id)arg3;	// IMP=0x0000000000681278
- (void)didFocusTextField:(id)arg1 inFrame:(id)arg2;	// IMP=0x000000000068122e
- (_Bool)textField:(id)arg1 doCommandBySelector:(SEL)arg2 inFrame:(id)arg3;	// IMP=0x0000000000681226
- (void)textFieldDidEndEditing:(id)arg1 inFrame:(id)arg2;	// IMP=0x00000000006811c9
- (void)textFieldDidBeginEditing:(id)arg1 inFrame:(id)arg2;	// IMP=0x000000000068116c
- (void)textDidChangeInTextField:(id)arg1 inFrame:(id)arg2;	// IMP=0x00000000006810b3
- (void)textDidChangeInTextArea:(id)arg1 inFrame:(id)arg2;	// IMP=0x0000000000681042
- (void)frame:(id)arg1 sourceFrame:(id)arg2 willSubmitForm:(id)arg3 withValues:(id)arg4 submissionListener:(id)arg5;	// IMP=0x0000000000680f42
- (void)dealloc;	// IMP=0x0000000000680f07
- (void)_clearEditedFormsInFrame:(id)arg1;	// IMP=0x00000000006818be
- (_Bool)_shouldIgnoreFormTextChangesInFrame:(id)arg1;	// IMP=0x00000000006818a8
- (void)_didEditFormElement:(id)arg1 inFrame:(id)arg2;	// IMP=0x00000000006816e5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
