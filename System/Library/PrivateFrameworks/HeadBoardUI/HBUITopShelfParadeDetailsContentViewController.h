//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString;
@protocol HBUITopShelfParadeAction, HBUITopShelfParadeContentViewControllerDelegate, HBUITopShelfParadeItem;

__attribute__((visibility("hidden")))
@interface HBUITopShelfParadeDetailsContentViewController : UIViewController
{
    id <HBUITopShelfParadeItem> _paradeItem;	// 8 = 0x8
    id <HBUITopShelfParadeContentViewControllerDelegate> _delegate;	// 16 = 0x10
    id <HBUITopShelfParadeAction> _primaryAction;	// 24 = 0x18
    id <HBUITopShelfParadeAction> _secondaryAction;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002b321
@property(retain, nonatomic) id <HBUITopShelfParadeAction> secondaryAction; // @synthesize secondaryAction=_secondaryAction;
@property(retain, nonatomic) id <HBUITopShelfParadeAction> primaryAction; // @synthesize primaryAction=_primaryAction;
@property(nonatomic) __weak id <HBUITopShelfParadeContentViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <HBUITopShelfParadeItem> paradeItem; // @synthesize paradeItem=_paradeItem;
- (void)paradeItemSecondaryActionDidChange:(id)arg1;	// IMP=0x000000000002b0fc
- (void)paradeItemPrimaryActionDidChange:(id)arg1;	// IMP=0x000000000002af5f
- (void)_secondaryActionDidChange;	// IMP=0x0000000000029aaa
- (void)_primaryActionDidChange;	// IMP=0x000000000002988b
- (void)_notifyDelegateDidSelectAction:(id)arg1;	// IMP=0x000000000002980a
- (void)_secondaryActionButtonSelected;	// IMP=0x00000000000297ed
- (void)_primaryActionButtonSelected;	// IMP=0x00000000000297d0
- (id)_itemDetailsView;	// IMP=0x00000000000297be
- (void)viewDidLoad;	// IMP=0x00000000000296db
- (void)loadView;	// IMP=0x000000000002961a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

