//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIViewController.h"

@class NSExtension, NSString, UIKeyboardCameraRemoteViewController;
@protocol UIKeyboardCameraViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardCameraViewController : UIViewController
{
    id <UIKeyboardCameraViewControllerDelegate> _delegate;	// 8 = 0x8
    NSString *_textContentType;	// 16 = 0x10
    NSExtension *_extension;	// 24 = 0x18
    UIKeyboardCameraRemoteViewController *_remoteViewController;	// 32 = 0x20
}

+ (_Bool)isEnabled;	// IMP=0x0010000001022637
+ (_Bool)isSupportedByDevice;	// IMP=0x00100000010225d0
+ (_Bool)isCameraRestricted;	// IMP=0x0010000001022449
+ (void)_updateIsCameraRestricted;	// IMP=0x0010000001022431
+ (_Bool)isLiveTextEnabled;	// IMP=0x00100000010223e6
- (void).cxx_destruct;	// IMP=0x0000000001022fc0
@property(retain, nonatomic) UIKeyboardCameraRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(nonatomic) NSString *textContentType; // @synthesize textContentType=_textContentType;
@property(nonatomic) __weak id <UIKeyboardCameraViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_canShowWhileLocked;	// IMP=0x0000000001022f1f
- (void)keyboardCameraDidCancel;	// IMP=0x0000000001022ee2
- (void)keyboardCameraDidAccept;	// IMP=0x0000000001022ea5
- (void)keyboardCameraDidUpdateString:(id)arg1;	// IMP=0x0000000001022e33
- (void)prepareWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000001022821
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000001022795
- (void)viewDidLoad;	// IMP=0x00000000010226fa
- (id)_backgroundColorForModalFormSheet;	// IMP=0x00000000010226e1
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000010226cf
- (id)init;	// IMP=0x000000000102269c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

