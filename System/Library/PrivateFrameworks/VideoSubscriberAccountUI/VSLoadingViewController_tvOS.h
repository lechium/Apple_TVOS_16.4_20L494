//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, UITapGestureRecognizer;
@protocol VSLoadingViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSLoadingViewController_tvOS : UIViewController
{
    _Bool _cancellationAllowed;	// 8 = 0x8
    id <VSLoadingViewControllerDelegate> _delegate;	// 16 = 0x10
    UITapGestureRecognizer *_menuRecognizer;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000065f5b
@property(nonatomic) __weak UITapGestureRecognizer *menuRecognizer; // @synthesize menuRecognizer=_menuRecognizer;
@property(nonatomic, getter=isCancellationAllowed) _Bool cancellationAllowed; // @synthesize cancellationAllowed=_cancellationAllowed;
@property(nonatomic) __weak id <VSLoadingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_menuButtonPressed:(id)arg1;	// IMP=0x0000000000065dff
- (void)viewDidLoad;	// IMP=0x0000000000065bc0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

