//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CALayer, UIView, UIWebOverflowScrollView;

__attribute__((visibility("hidden")))
@interface UIWebOverflowScrollViewInfo : NSObject
{
    UIWebOverflowScrollView *_scrollView;	// 8 = 0x8
    CALayer *_scrollViewLayer;	// 16 = 0x10
    UIView *_oldSuperview;	// 24 = 0x18
}

@property(retain, nonatomic) UIView *oldSuperview; // @synthesize oldSuperview=_oldSuperview;
@property(retain, nonatomic) UIWebOverflowScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)dealloc;	// IMP=0x00000000012083ac
- (id)initWithScrollView:(id)arg1;	// IMP=0x000000000120831b

@end

