//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol HHATimerFactory;

__attribute__((visibility("hidden")))
@interface HHAEndpointDependencyFactory : NSObject
{
    id <HHATimerFactory> _timerFactory;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000d669
@property(readonly, nonatomic) id <HHATimerFactory> timerFactory; // @synthesize timerFactory=_timerFactory;
- (id)createHHATimerWithName:(id)arg1 duration:(unsigned long long)arg2 leeway:(unsigned long long)arg3 queue:(id)arg4 callback:(CDUnknownBlockType)arg5;	// IMP=0x000000000000d649
- (id)createQuarantinedHubsWithDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x000000000000d5c9
- (id)createEndpointAssignmentManagerWithDelegate:(id)arg1 queue:(id)arg2;	// IMP=0x000000000000d549
- (id)initWithTimerFactory:(id)arg1;	// IMP=0x000000000000d4de

@end

