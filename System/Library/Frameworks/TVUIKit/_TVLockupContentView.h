//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _TVLockupContentView : UIView
{
    struct CGSize _explicitContentSize;	// 8 = 0x8
}

@property(nonatomic) struct CGSize explicitContentSize; // @synthesize explicitContentSize=_explicitContentSize;
- (void)updateAppearanceForLockupViewState:(unsigned long long)arg1;	// IMP=0x00000000000389bb
- (id)effectiveContentView;	// IMP=0x00000000000389b2
- (void)addSubview:(id)arg1;	// IMP=0x0000000000038971
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000003871d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000386ee
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000038692
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000038625

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
