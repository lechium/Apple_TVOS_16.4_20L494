//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IMPerfProfiler : NSObject
{
    NSMutableArray *_sinks;	// 8 = 0x8
}

+ (id)instance;	// IMP=0x0060000000022af6
- (void).cxx_destruct;	// IMP=0x0000000000022ec0
- (void)logMeasurement:(struct IMPerfMeasurement_t *)arg1;	// IMP=0x0000000000022ca8
- (void)addSink:(id)arg1 withBehavior:(id)arg2;	// IMP=0x0000000000022c12
- (id)init;	// IMP=0x0000000000022b4b

@end

