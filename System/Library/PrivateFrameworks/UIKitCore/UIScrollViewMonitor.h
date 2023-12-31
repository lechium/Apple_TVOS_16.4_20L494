//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIScrollView, UIWindow;
@protocol UIScrollViewMonitorDelegate;

__attribute__((visibility("hidden")))
@interface UIScrollViewMonitor : NSObject
{
    UIScrollView *_scrollView;	// 8 = 0x8
    UIWindow *_window;	// 16 = 0x10
    id <UIScrollViewMonitorDelegate> _delegate;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002101ab
@property(nonatomic) __weak id <UIScrollViewMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_monitoredView:(id)arg1 didMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;	// IMP=0x00000000002100f2
- (void)_monitoredView:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;	// IMP=0x00000000002100ec
- (_Bool)_monitorsView:(id)arg1;	// IMP=0x00000000002100d0
- (void)_observeScrollViewDidScroll:(id)arg1;	// IMP=0x0000000000210076
- (void)stopMonitoring;	// IMP=0x000000000020fffa
- (id)initWithScrollView:(id)arg1;	// IMP=0x000000000020fe68

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

