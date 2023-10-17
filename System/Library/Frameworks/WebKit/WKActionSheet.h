//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIAlertController.h>

@protocol WKActionSheetDelegate;

__attribute__((visibility("hidden")))
@interface WKActionSheet : UIAlertController
{
    id <WKActionSheetDelegate> _sheetDelegate;	// 8 = 0x8
    unsigned long long _arrowDirections;	// 16 = 0x10
    _Bool _isRotating;	// 24 = 0x18
    _Bool _readyToPresentAfterRotation;	// 25 = 0x19
    long long _currentPresentationStyle;	// 32 = 0x20
    struct RetainPtr<UIViewController> _currentPresentingViewController;	// 40 = 0x28
    struct RetainPtr<UIViewController> _presentedViewControllerWhileRotating;	// 48 = 0x30
    struct RetainPtr<id<UIPopoverPresentationControllerDelegate>> _popoverPresentationControllerDelegateWhileRotating;	// 56 = 0x38
}

- (id).cxx_construct;	// IMP=0x0000000000365304
- (void).cxx_destruct;	// IMP=0x000000000036529b
@property(nonatomic) unsigned long long arrowDirections; // @synthesize arrowDirections=_arrowDirections;
@property(nonatomic) id <WKActionSheetDelegate> sheetDelegate; // @synthesize sheetDelegate=_sheetDelegate;
- (void)didRotate;	// IMP=0x0000000000365239
- (void)_didRotateAndLayout;	// IMP=0x00000000003651ea
- (void)updateSheetPosition;	// IMP=0x000000000036500c
- (void)willRotate;	// IMP=0x0000000000364e5e
- (void)doneWithSheet:(_Bool)arg1;	// IMP=0x0000000000364d9c
- (_Bool)presentSheetFromRect:(struct CGRect)arg1;	// IMP=0x0000000000364c4c
- (struct CGRect)_presentationRectForStyle:(long long)arg1;	// IMP=0x0000000000364bde
- (_Bool)presentSheet:(long long)arg1;	// IMP=0x0000000000364ad1
- (void)_cleanup;	// IMP=0x0000000000364a85
- (void)dealloc;	// IMP=0x0000000000364a47
- (id)init;	// IMP=0x0000000000364942

@end

