//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface MKTransitFilterCell : UICollectionViewCell
{
    UILabel *_label;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001569a8
- (void)setSelected:(_Bool)arg1;	// IMP=0x00000000001567b8
- (void)_contentSizeDidChange;	// IMP=0x000000000015668f
@property(retain, nonatomic) NSString *titleText;
- (void)_setupLabel;	// IMP=0x0000000000156278
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000155fe4

@end
