//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString;
@protocol PBSystemOverlayContentDelegate;

@interface PBContentPresentingViewController : UIViewController
{
    _Bool _interruptible;	// 8 = 0x8
    _Bool _acceptsEventFocus;	// 9 = 0x9
    _Bool _dismissalTriggeredBySystem;	// 10 = 0xa
    id <PBSystemOverlayContentDelegate> _contentDelegate;	// 16 = 0x10
    UIViewController *_contentViewController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000131b68
@property(readonly, nonatomic) _Bool dismissalTriggeredBySystem; // @synthesize dismissalTriggeredBySystem=_dismissalTriggeredBySystem;
@property(readonly, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(nonatomic) _Bool acceptsEventFocus; // @synthesize acceptsEventFocus=_acceptsEventFocus;
@property(nonatomic) __weak id <PBSystemOverlayContentDelegate> contentDelegate; // @synthesize contentDelegate=_contentDelegate;
@property(readonly, nonatomic, getter=isInterruptible) _Bool interruptible; // @synthesize interruptible=_interruptible;
- (void)_didDismiss:(id)arg1;	// IMP=0x0010000000131a7f
- (void)_willDismiss:(id)arg1;	// IMP=0x0010000000131a20
- (void)dismissContentAnimated:(_Bool)arg1 clientOptions:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001318bf
- (void)presentContentAnimated:(_Bool)arg1 clientOptions:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000013177e
@property(readonly, nonatomic) _Bool expectsEventForwarding;
- (_Bool)definesPresentationContext;	// IMP=0x001000000013176e
- (void)dealloc;	// IMP=0x0010000000131692
- (id)initWithContentViewController:(id)arg1 supportsInterruption:(_Bool)arg2;	// IMP=0x0010000000131556

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

