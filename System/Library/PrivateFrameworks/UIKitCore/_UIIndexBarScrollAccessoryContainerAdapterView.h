//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class UIScrollView;
@protocol UIScrollAccessory;

__attribute__((visibility("hidden")))
@interface _UIIndexBarScrollAccessoryContainerAdapterView : UIView
{
    UIView<UIScrollAccessory> *_delegatedView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000111041a
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000011103fd
- (void)update;	// IMP=0x00000000011103e0
@property(readonly, nonatomic) _Bool overlay;
@property(nonatomic) long long edge;
@property(nonatomic) __weak UIScrollView *scrollView;
- (id)initWithContents:(id)arg1 delegatingToView:(id)arg2;	// IMP=0x0000000001110235

@end

