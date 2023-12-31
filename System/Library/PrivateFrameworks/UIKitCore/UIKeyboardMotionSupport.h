//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, UIScreen, UIWindowScene;
@protocol UISplitKeyboardSource;

__attribute__((visibility("hidden")))
@interface UIKeyboardMotionSupport : NSObject
{
    UIScreen *_screen;	// 8 = 0x8
    UIWindowScene *_canvas;	// 16 = 0x10
    id <UISplitKeyboardSource> _controller;	// 24 = 0x18
}

+ (id)supportForUIScene:(id)arg1;	// IMP=0x0010000000ac67e5
+ (id)supportForScreen:(id)arg1;	// IMP=0x0010000000ac6740
- (void).cxx_destruct;	// IMP=0x0000000000ac6d21
- (_Bool)generateSplitNotificationForNewPlacement:(id)arg1;	// IMP=0x0000000000ac6d19
- (void)translateToPlacement:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000ac6d02
- (void)translateToPlacement:(id)arg1 quietly:(_Bool)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000ac6a8a
@property(nonatomic) __weak id <UISplitKeyboardSource> masterController;
- (void)_updatedController;	// IMP=0x0000000000ac6a19
- (void)_connectController:(id)arg1;	// IMP=0x0000000000ac6a08
- (void)_disconnectingController:(id)arg1;	// IMP=0x0000000000ac69ee
- (id)_intendedCanvas;	// IMP=0x0000000000ac69d2
@property(readonly) UIScreen *_intendedScreen;
@property(readonly) NSDictionary *_options;
- (_Bool)_matchingOptions:(id)arg1;	// IMP=0x0000000000ac69b0
- (id)_initWithCanvas:(id)arg1 options:(id)arg2;	// IMP=0x0000000000ac691d
- (id)_initWithScreen:(id)arg1 options:(id)arg2;	// IMP=0x0000000000ac688a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

