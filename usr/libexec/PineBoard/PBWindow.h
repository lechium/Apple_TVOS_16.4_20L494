//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIWindow.h>

@class NSString;

@interface PBWindow : UIWindow
{
    _Bool _shouldOcclude;	// 8 = 0x8
    _Bool _occluding;	// 9 = 0x9
    NSString *_name;	// 16 = 0x10
}

+ (void)_decrementOcclusionCounter;	// IMP=0x00400000000d8129
+ (void)_incrementOcclusionCounter;	// IMP=0x00100000000d7d9e
- (void).cxx_destruct;	// IMP=0x00200000000d835a
@property(nonatomic, getter=isOccluding) _Bool occluding; // @synthesize occluding=_occluding;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) _Bool shouldOcclude; // @synthesize shouldOcclude=_shouldOcclude;
- (void)_updateOccludingState;	// IMP=0x00100000000d7d37
- (void)setHidden:(_Bool)arg1;	// IMP=0x00100000000d7b0a
- (void)setWindowLevel:(double)arg1;	// IMP=0x00100000000d7a0a
- (id)description;	// IMP=0x00100000000d794f
- (void)dealloc;	// IMP=0x00100000000d7882
- (id)initWithFrame:(struct CGRect)arg1 name:(id)arg2;	// IMP=0x00100000000d77a6
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000d7772
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00100000000d7744

@end

