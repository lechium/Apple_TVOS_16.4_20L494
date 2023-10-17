//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray, NSObject, NSString, UIVisualEffectView, __TVImageLoaderQueue;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface _TVScrollingGridView : UIView
{
    __TVImageLoaderQueue *_loaderQueue;	// 8 = 0x8
    _Bool _isAnimating;	// 16 = 0x10
    NSObject<OS_dispatch_group> *_animationGroup;	// 24 = 0x18
    UIVisualEffectView *_visualEffectView;	// 32 = 0x20
    NSArray *_imageProxies;	// 40 = 0x28
    NSArray *_imageViews;	// 48 = 0x30
    struct CGSize _cellSize;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00000000000b797b
@property(copy, nonatomic) NSArray *imageViews; // @synthesize imageViews=_imageViews;
@property(copy, nonatomic) NSArray *imageProxies; // @synthesize imageProxies=_imageProxies;
@property(nonatomic) struct CGSize cellSize; // @synthesize cellSize=_cellSize;
- (void)_imageWithImages:(id)arg1 cellSize:(struct CGSize)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000b70ac
- (void)_stopAnimating;	// IMP=0x00000000000b6f27
- (void)_startAnimating;	// IMP=0x00000000000b6a1f
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;	// IMP=0x00000000000b6a0a
- (void)resume;	// IMP=0x00000000000b69f8
- (void)pause;	// IMP=0x00000000000b69e6
- (void)layoutSubviews;	// IMP=0x00000000000b65e3
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000b5dfb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

