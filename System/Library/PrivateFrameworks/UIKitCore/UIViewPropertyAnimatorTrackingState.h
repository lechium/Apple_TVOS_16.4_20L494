//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID;

__attribute__((visibility("hidden")))
@interface UIViewPropertyAnimatorTrackingState : NSObject
{
    _Bool _startPaused;	// 8 = 0x8
    _Bool _scrubsLinearly;	// 9 = 0x9
    _Bool _userInteractionEnabled;	// 10 = 0xa
    _Bool _optimizationsEnabled;	// 11 = 0xb
    _Bool _shouldLayoutSubviews;	// 12 = 0xc
    NSUUID *_uuid;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000959d6
@property(nonatomic) _Bool shouldLayoutSubviews; // @synthesize shouldLayoutSubviews=_shouldLayoutSubviews;
@property(nonatomic) _Bool optimizationsEnabled; // @synthesize optimizationsEnabled=_optimizationsEnabled;
@property(nonatomic) _Bool userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
@property(nonatomic) _Bool scrubsLinearly; // @synthesize scrubsLinearly=_scrubsLinearly;
@property(nonatomic) _Bool startPaused; // @synthesize startPaused=_startPaused;
@property(readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)init;	// IMP=0x0000000000095911

@end

