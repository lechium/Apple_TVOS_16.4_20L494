//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BaseBoard/BSTransaction.h>

@class PBScreenSaverContentPresentingViewController;

@interface _PBScreenSaverDismissalScreenshotTransaction : BSTransaction
{
    _Bool _shouldUpdateWallpaper;	// 8 = 0x8
    PBScreenSaverContentPresentingViewController *_screenSaverViewController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000012639c
@property(retain, nonatomic) PBScreenSaverContentPresentingViewController *screenSaverViewController; // @synthesize screenSaverViewController=_screenSaverViewController;
@property(nonatomic) _Bool shouldUpdateWallpaper; // @synthesize shouldUpdateWallpaper=_shouldUpdateWallpaper;
- (void)_begin;	// IMP=0x0010000000126105
- (_Bool)_canBeInterrupted;	// IMP=0x00100000001260fd

@end

