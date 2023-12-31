//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString;
@protocol PBPresentationElementViewControllerDelegate, PBSystemUIPresentable;

@interface PBPresentationElementViewController : UIViewController
{
    _Bool _shouldForwardHIDEvents;	// 8 = 0x8
    _Bool _hasVisibleWindowObserver;	// 9 = 0x9
    long long _layoutLevel;	// 16 = 0x10
    NSString *_identifier;	// 24 = 0x18
    unsigned long long _state;	// 32 = 0x20
    id <PBPresentationElementViewControllerDelegate> _delegate;	// 40 = 0x28
    UIViewController<PBSystemUIPresentable> *_contentViewController;	// 48 = 0x30
    UIViewController<PBSystemUIPresentable> *_observedViewController;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000000a3c66
@property(nonatomic) __weak UIViewController<PBSystemUIPresentable> *observedViewController; // @synthesize observedViewController=_observedViewController;
@property(readonly, nonatomic) _Bool hasVisibleWindowObserver; // @synthesize hasVisibleWindowObserver=_hasVisibleWindowObserver;
@property(nonatomic) _Bool shouldForwardHIDEvents; // @synthesize shouldForwardHIDEvents=_shouldForwardHIDEvents;
@property(readonly, nonatomic) UIViewController<PBSystemUIPresentable> *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(readonly, nonatomic) __weak id <PBPresentationElementViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) long long layoutLevel; // @synthesize layoutLevel=_layoutLevel;
- (void)_updateState;	// IMP=0x00100000000a3a01
- (void)_removeAcceptsEventObserverForViewController:(id)arg1;	// IMP=0x00100000000a3977
- (void)_addAcceptsEventObserverForViewController:(id)arg1;	// IMP=0x00100000000a38d8
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000000a381a
- (void)setContentViewController:(id)arg1 animated:(_Bool)arg2 transitionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a34e2
- (id)preferredFocusEnvironments;	// IMP=0x00100000000a3459
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00100000000a32e4
- (void)loadView;	// IMP=0x00100000000a3246
- (id)initWithLayoutLevel:(long long)arg1;	// IMP=0x00100000000a31ef

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

