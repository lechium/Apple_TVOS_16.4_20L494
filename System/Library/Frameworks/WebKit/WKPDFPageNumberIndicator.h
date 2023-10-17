//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface WKPDFPageNumberIndicator : UIView
{
    struct RetainPtr<UILabel> _label;	// 8 = 0x8
    struct RetainPtr<_UIBackdropView> _backdropView;	// 16 = 0x10
    struct RetainPtr<NSTimer> _timer;	// 24 = 0x18
    _Bool _hasValidPageCountAndCurrentPage;	// 32 = 0x20
    unsigned int _currentPageNumber;	// 36 = 0x24
    unsigned int _pageCount;	// 40 = 0x28
}

- (id).cxx_construct;	// IMP=0x00000000003704ac
- (void).cxx_destruct;	// IMP=0x0000000000370443
@property(nonatomic) unsigned int pageCount; // @synthesize pageCount=_pageCount;
@property(nonatomic) unsigned int currentPageNumber; // @synthesize currentPageNumber=_currentPageNumber;
- (void)_makeRoundedCorners;	// IMP=0x00000000003701b2
- (void)_updateLabel;	// IMP=0x00000000003700b7
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000037006f
- (void)moveToPoint:(struct CGPoint)arg1 animated:(_Bool)arg2;	// IMP=0x000000000036ffc4
- (void)hide:(id)arg1;	// IMP=0x000000000036ff14
- (void)hide;	// IMP=0x000000000036ff00
- (void)show;	// IMP=0x000000000036fe33
- (void)dealloc;	// IMP=0x000000000036fda4
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000036fb19

@end

