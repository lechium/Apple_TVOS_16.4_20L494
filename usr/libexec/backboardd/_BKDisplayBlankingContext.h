//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CAContext, CAWindowServerDisplay;

@interface _BKDisplayBlankingContext : NSObject
{
    CAWindowServerDisplay *_display;	// 8 = 0x8
    CAContext *_blankingContext;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000122fd
- (void)_wrapInCATransaction:(CDUnknownBlockType)arg1;	// IMP=0x0010000000012298
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000012254
- (void)_updateBounds;	// IMP=0x00100000000121d1
- (void)clear;	// IMP=0x00100000000120e8
- (void)blank;	// IMP=0x0010000000011ecd
- (void)dealloc;	// IMP=0x0010000000011e8f
- (id)initForDisplay:(id)arg1;	// IMP=0x0010000000011e24

@end
