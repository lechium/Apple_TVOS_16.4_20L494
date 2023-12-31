//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class HBUITopShelfParadeActionsView, NSString;
@protocol HBUITopShelfParadeAction, HBUITopShelfParadeContentViewControllerDelegate, HBUITopShelfParadeItem;

__attribute__((visibility("hidden")))
@interface HBUITopShelfParadeActionsContentViewController : UIViewController
{
    id <HBUITopShelfParadeItem> _paradeItem;	// 8 = 0x8
    id <HBUITopShelfParadeContentViewControllerDelegate> _delegate;	// 16 = 0x10
    HBUITopShelfParadeActionsView *_actionsView;	// 24 = 0x18
    id <HBUITopShelfParadeAction> _primaryAction;	// 32 = 0x20
    id <HBUITopShelfParadeAction> _secondaryAction;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000039c5
@property(retain, nonatomic) id <HBUITopShelfParadeAction> secondaryAction; // @synthesize secondaryAction=_secondaryAction;
@property(retain, nonatomic) id <HBUITopShelfParadeAction> primaryAction; // @synthesize primaryAction=_primaryAction;
@property(readonly, nonatomic) HBUITopShelfParadeActionsView *actionsView; // @synthesize actionsView=_actionsView;
@property(nonatomic) __weak id <HBUITopShelfParadeContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <HBUITopShelfParadeItem> paradeItem; // @synthesize paradeItem=_paradeItem;
- (void)paradeItemSecondaryActionDidChange:(id)arg1;	// IMP=0x000000000000378f
- (void)paradeItemPrimaryActionDidChange:(id)arg1;	// IMP=0x00000000000035f2
- (id)preferredFocusEnvironments;	// IMP=0x0000000000003549
- (void)_secondaryActionDidChange;	// IMP=0x00000000000032de
- (void)_primaryActionDidChange;	// IMP=0x00000000000030df
- (void)_notifyDelegateDidSelectAction:(id)arg1;	// IMP=0x000000000000305e
- (void)_secondaryActionButtonSelected;	// IMP=0x0000000000003041
- (void)_primaryActionButtonSelected;	// IMP=0x0000000000003024
- (void)viewDidLoad;	// IMP=0x0000000000002c96

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

