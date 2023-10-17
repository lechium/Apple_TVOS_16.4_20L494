//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol IMPerfProfilerBehavior, IMPerfProfilerSink;

@interface IMPerfSinkPair : NSObject
{
    id <IMPerfProfilerBehavior> _behavior;	// 8 = 0x8
    id <IMPerfProfilerSink> _sink;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000022ace
@property(readonly, nonatomic) id <IMPerfProfilerSink> sink; // @synthesize sink=_sink;
@property(readonly, nonatomic) id <IMPerfProfilerBehavior> behavior; // @synthesize behavior=_behavior;
- (id)initWithBehavior:(id)arg1 sink:(id)arg2;	// IMP=0x0000000000022a21

@end

