//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImageView.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface SFAirDropActiveIconView : UIImageView
{
    UIView *_circleMaskView;	// 8 = 0x8
    _Bool _masked;	// 16 = 0x10
}

+ (id)baseImage;	// IMP=0x0060000000020202
- (void).cxx_destruct;	// IMP=0x00000000000206c6
@property(nonatomic, getter=isMasked) _Bool masked; // @synthesize masked=_masked;
- (void)layoutSubviews;	// IMP=0x0000000000020436
- (id)initWithFrame:(struct CGRect)arg1 grayscale:(_Bool)arg2;	// IMP=0x0000000000020331

@end

