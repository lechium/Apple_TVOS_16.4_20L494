//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class HBTopShelfModel, HBTopShelfModelController, NSString;
@protocol HBUITopShelfContentViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface HBTopShelfAppBundleViewController : UIViewController
{
    _Bool _contentOccluded;	// 8 = 0x8
    id <HBUITopShelfContentViewControllerDelegate> _delegate;	// 16 = 0x10
    unsigned long long _contentStyle;	// 24 = 0x18
    HBTopShelfModelController *_modelController;	// 32 = 0x20
    UIViewController *_modelViewController;	// 40 = 0x28
    HBTopShelfModel *_queuedFromModel;	// 48 = 0x30
    HBTopShelfModel *_queuedToModel;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000004aeff
@property(readonly, nonatomic) HBTopShelfModel *queuedToModel; // @synthesize queuedToModel=_queuedToModel;
@property(readonly, nonatomic) HBTopShelfModel *queuedFromModel; // @synthesize queuedFromModel=_queuedFromModel;
@property(retain, nonatomic) UIViewController *modelViewController; // @synthesize modelViewController=_modelViewController;
@property(readonly, nonatomic) HBTopShelfModelController *modelController; // @synthesize modelController=_modelController;
@property(readonly, nonatomic) unsigned long long contentStyle; // @synthesize contentStyle=_contentStyle;
@property(nonatomic, getter=isContentOccluded) _Bool contentOccluded; // @synthesize contentOccluded=_contentOccluded;
@property(nonatomic) __weak id <HBUITopShelfContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didFinishLaunchAnimationWithContext:(id)arg1;	// IMP=0x000000000004ae5b
- (void)paradeViewController:(id)arg1 willScrollToFirstItem:(_Bool)arg2;	// IMP=0x000000000004adc0
- (void)paradeViewController:(id)arg1 didShowItem:(id)arg2;	// IMP=0x000000000004aca5
- (void)paradeViewController:(id)arg1 didSelectAction:(id)arg2 forItem:(id)arg3;	// IMP=0x000000000004aa24
- (_Bool)_shouldApplyModelUpdate;	// IMP=0x000000000004a95f
- (void)_applyQueuedUpdate;	// IMP=0x000000000004a889
- (void)_setContentStyle:(unsigned long long)arg1;	// IMP=0x000000000004a824
- (void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000004a3e9
- (void)_updateOrTransitionToModelViewControllerWithUpdatedModel:(id)arg1 previousModel:(id)arg2 animated:(_Bool)arg3;	// IMP=0x000000000004a294
- (_Bool)_updateTopShelfModelViewControllerWithModel:(id)arg1 previousModel:(id)arg2;	// IMP=0x000000000004a09a
- (id)_topShelfModelViewControllerForModel:(id)arg1;	// IMP=0x0000000000049e77
- (void)_setContentOccluded:(_Bool)arg1 forModelViewController:(id)arg2;	// IMP=0x0000000000049e25
- (void)topShelfItemInteracting:(id)arg1 didSelectAction:(id)arg2 forItem:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000049c83
- (void)topShelfItemInteracting:(id)arg1 didShowItem:(id)arg2;	// IMP=0x0000000000049c11
- (void)topShelfModelController:(id)arg1 modelDidChangeFromModel:(id)arg2 toModel:(id)arg3;	// IMP=0x0000000000049b48
- (void)viewDidLoad;	// IMP=0x0000000000049b00
- (id)initWithApp:(id)arg1 modelController:(id)arg2;	// IMP=0x0000000000049a73

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

