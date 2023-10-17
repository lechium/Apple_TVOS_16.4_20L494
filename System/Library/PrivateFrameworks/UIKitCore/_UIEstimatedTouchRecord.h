//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSNumber, UITouch;

__attribute__((visibility("hidden")))
@interface _UIEstimatedTouchRecord : NSObject
{
    NSMutableArray *_touchables;	// 8 = 0x8
    UITouch *_liveTouch;	// 16 = 0x10
    UITouch *_frozenTouch;	// 24 = 0x18
    NSNumber *_contextID;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000cffd46
@property(readonly, nonatomic) NSNumber *contextID; // @synthesize contextID=_contextID;
@property(readonly, nonatomic) NSArray *touchables; // @synthesize touchables=_touchables;
@property(readonly, nonatomic) UITouch *frozenTouch; // @synthesize frozenTouch=_frozenTouch;
@property(readonly, nonatomic) UITouch *liveTouch; // @synthesize liveTouch=_liveTouch;
- (void)dispatchUpdateWithPressure:(double)arg1 stillEstimated:(_Bool)arg2;	// IMP=0x0000000000cffaed
- (void)removeTouchable:(id)arg1;	// IMP=0x0000000000cffad7
- (void)addTouchable:(id)arg1;	// IMP=0x0000000000cffa7d
- (id)initWithLiveTouch:(id)arg1 freezeTouch:(id)arg2 contextID:(id)arg3;	// IMP=0x0000000000cff9c6

@end

