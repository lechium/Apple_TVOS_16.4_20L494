//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIMotionEffectEvent : NSObject
{
    double _timestamp;	// 8 = 0x8
}

@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
- (double)velocityRelativeToPreviousEvent:(id)arg1;	// IMP=0x0000000000baa061
- (id)copyWithTimestamp:(double)arg1;	// IMP=0x0000000000baa059
- (id)initWithTimestamp:(double)arg1;	// IMP=0x0000000000baa016

@end

