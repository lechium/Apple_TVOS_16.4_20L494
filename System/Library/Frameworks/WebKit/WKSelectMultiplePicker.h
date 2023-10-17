//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, WKContentView;

__attribute__((visibility("hidden")))
@interface WKSelectMultiplePicker : NSObject
{
    WKContentView *_view;	// 8 = 0x8
    struct RetainPtr<UINavigationController> _navigationController;	// 16 = 0x10
    struct RetainPtr<WKSelectPickerTableViewController> _tableViewController;	// 24 = 0x18
}

- (id).cxx_construct;	// IMP=0x0000000000392aad
- (void).cxx_destruct;	// IMP=0x0000000000392a66
- (void)selectRow:(long long)arg1 inComponent:(long long)arg2 extendingSelection:(_Bool)arg3;	// IMP=0x00000000003929e0
- (id)_indexPathForRow:(long long)arg1;	// IMP=0x0000000000392965
- (void)presentationControllerDidDismiss:(id)arg1;	// IMP=0x0000000000392947
- (void)controlEndEditing;	// IMP=0x0000000000392908
- (void)controlBeginEditing;	// IMP=0x000000000039288b
- (id)controlView;	// IMP=0x0000000000392883
- (void)configurePresentation;	// IMP=0x0000000000392654
- (id)initWithView:(id)arg1;	// IMP=0x0000000000392589

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

