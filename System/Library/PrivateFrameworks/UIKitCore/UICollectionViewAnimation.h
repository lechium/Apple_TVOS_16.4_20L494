//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, UICollectionReusableView, UICollectionViewLayoutAttributes;

__attribute__((visibility("hidden")))
@interface UICollectionViewAnimation : NSObject
{
    UICollectionReusableView *_view;	// 8 = 0x8
    UICollectionViewLayoutAttributes *_finalLayoutAttributes;	// 16 = 0x10
    double _startFraction;	// 24 = 0x18
    double _endFraction;	// 32 = 0x20
    long long _viewType;	// 40 = 0x28
    NSMutableArray *_completionHandlers;	// 48 = 0x30
    NSMutableArray *_startupHandlers;	// 56 = 0x38
    CDUnknownBlockType _animationBlock;	// 64 = 0x40
    struct {
        unsigned int animateFromCurrentPosition:1;
        unsigned int deleteAfterAnimation:1;
        unsigned int rasterizeAfterAnimation:1;
        unsigned int resetRasterizationAfterAnimation:1;
        unsigned int updateZIndexAfterAnimation:1;
    } _collectionViewAnimationFlags;	// 72 = 0x48
    _Bool _parentInCollectionViewDuringAnimation;	// 76 = 0x4c
}

- (void).cxx_destruct;	// IMP=0x000000000036a462
@property(nonatomic) _Bool parentInCollectionViewDuringAnimation; // @synthesize parentInCollectionViewDuringAnimation=_parentInCollectionViewDuringAnimation;
@property(readonly, nonatomic) double endFraction; // @synthesize endFraction=_endFraction;
@property(readonly, nonatomic) double startFraction; // @synthesize startFraction=_startFraction;
@property(readonly, nonatomic) UICollectionViewLayoutAttributes *finalLayoutAttributes; // @synthesize finalLayoutAttributes=_finalLayoutAttributes;
@property(readonly, nonatomic) long long viewType; // @synthesize viewType=_viewType;
@property(readonly, nonatomic) UICollectionReusableView *view; // @synthesize view=_view;
- (void)addStartupHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000036a3c4
- (void)addCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000036a36c
- (void)startWithAnimator:(id)arg1;	// IMP=0x0000000000369334
- (void)start;	// IMP=0x0000000000369320
@property(nonatomic) _Bool resetRasterizationAfterAnimation;
@property(nonatomic) _Bool rasterizeAfterAnimation;
@property(readonly, nonatomic) _Bool updateZIndexAfterAnimation;
@property(readonly, nonatomic) _Bool deleteAfterAnimation;
@property(readonly, nonatomic) _Bool animateFromCurrentPosition;
- (id)description;	// IMP=0x000000000036923c
- (id)initWithView:(id)arg1 viewType:(long long)arg2 finalLayoutAttributes:(id)arg3 startFraction:(double)arg4 endFraction:(double)arg5 animateFromCurrentPostion:(_Bool)arg6 deleteAfterAnimation:(_Bool)arg7 customAnimations:(CDUnknownBlockType)arg8;	// IMP=0x0000000000368fcf

@end

