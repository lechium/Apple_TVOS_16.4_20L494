//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UINavigationController, UIViewController;

@interface TVSettingsHomeSetupController : NSObject
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    UIViewController *_presentingViewController;	// 16 = 0x10
    UIViewController *_roomPickerInitialViewController;	// 24 = 0x18
    UINavigationController *_navigationController;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000f15be
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) __weak UIViewController *roomPickerInitialViewController; // @synthesize roomPickerInitialViewController=_roomPickerInitialViewController;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (id)_makeRoomPickerViewControllerWithHome:(id)arg1;	// IMP=0x00100000000f14d0
- (id)_makeHomePickerViewController;	// IMP=0x00100000000f1498
- (id)_makeRoomPickerViewController;	// IMP=0x00100000000f11da
- (void)wholeHomeAudioSetupViewControllerDidTransitionToUnconfiguredWithLocalAccessoryState:(id)arg1;	// IMP=0x00100000000f1128
- (void)wholeHomeAudioSetupViewControllerDidTransitionToConfiguredState:(id)arg1;	// IMP=0x00100000000f10ec
- (void)homePickerViewController:(id)arg1 didSelectHome:(id)arg2;	// IMP=0x00100000000f1051
- (void)roomPickerViewControllerDidFinish:(id)arg1;	// IMP=0x00100000000f0eff
- (void)pushRoomPickerFromInitialViewController:(id)arg1;	// IMP=0x00100000000f0de8
- (void)startSetupWithType:(long long)arg1 presentingViewController:(id)arg2;	// IMP=0x00100000000f0c13

@end

