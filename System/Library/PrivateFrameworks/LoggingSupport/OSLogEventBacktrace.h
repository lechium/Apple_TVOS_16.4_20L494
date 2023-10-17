//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface OSLogEventBacktrace : NSObject
{
    NSArray *_frames;	// 8 = 0x8
}

@property(readonly, nonatomic) NSArray *frames; // @synthesize frames=_frames;
- (void)dealloc;	// IMP=0x000000000000c480
- (id)initWithFrames:(id)arg1;	// IMP=0x000000000000c430
- (id)initWithSingleFrame:(id)arg1;	// IMP=0x000000000000c3c6
- (id)initWithBacktrace:(struct os_log_backtrace_s *)arg1;	// IMP=0x000000000000c2d7

@end

