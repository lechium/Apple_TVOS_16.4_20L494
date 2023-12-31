//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UISystemNavigationAction;

__attribute__((visibility("hidden")))
@interface UIStatusBarBreadcrumbItemView
{
    UISystemNavigationAction *_systemNavigationAction;	// 8 = 0x8
    NSString *_destinationText;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000d22abb
@property(retain, nonatomic) NSString *destinationText; // @synthesize destinationText=_destinationText;
@property(retain, nonatomic) UISystemNavigationAction *systemNavigationAction; // @synthesize systemNavigationAction=_systemNavigationAction;
- (double)extraRightPadding;	// IMP=0x0000000000d22a4e
- (id)shortenedTitleWithCompressionLevel:(int)arg1;	// IMP=0x0000000000d229a8
- (void)userDidActivateButton:(id)arg1;	// IMP=0x0000000000d22911
- (long long)labelLineBreakMode;	// IMP=0x0000000000d22906
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;	// IMP=0x0000000000d226f9

@end

