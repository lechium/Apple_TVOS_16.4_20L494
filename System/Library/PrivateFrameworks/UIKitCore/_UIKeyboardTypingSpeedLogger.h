//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIKeyboardTypingSpeedLogger : NSObject
{
    long long _typingDelaySamples[7];	// 8 = 0x8
    long long _typingDelaySampleCount;	// 64 = 0x40
}

- (void)logToAggregate;	// IMP=0x0000000000ad75a7
- (void)recordTypingDelay:(double)arg1;	// IMP=0x0000000000ad744d
- (id)init;	// IMP=0x0000000000ad7406

@end

