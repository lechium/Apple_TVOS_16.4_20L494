//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIViewController;
@protocol SKRemoteDismissingViewController;

__attribute__((visibility("hidden")))
@interface SKRemoteDismissingTransition : NSObject
{
    UIViewController<SKRemoteDismissingViewController> *_viewController;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000015add
@property(nonatomic) __weak UIViewController<SKRemoteDismissingViewController> *viewController; // @synthesize viewController=_viewController;
- (double)transitionDuration:(id)arg1;	// IMP=0x0000000000015aa8
- (void)animateTransition:(id)arg1;	// IMP=0x0000000000015a96
- (void)dismissRemoteViewController:(id)arg1;	// IMP=0x00000000000159a9
- (id)initWithViewController:(id)arg1;	// IMP=0x0000000000015941

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

