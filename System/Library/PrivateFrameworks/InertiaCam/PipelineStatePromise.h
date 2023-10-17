//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol OS_dispatch_group;

@interface PipelineStatePromise : NSObject
{
    NSMapTable *pipelineStates;	// 8 = 0x8
    NSMapTable *errors;	// 16 = 0x10
    NSObject<OS_dispatch_group> *group;	// 24 = 0x18
    _Atomic _Bool initialization_completed;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000017ea9
- (id)errorForFunction:(id)arg1;	// IMP=0x0000000000017e3b
- (id)pipelineStateForFunction:(id)arg1;	// IMP=0x0000000000017dcd
- (_Bool)groupWasSuccessful;	// IMP=0x0000000000017d91
- (_Bool)timesOutWaitingForPipelineStates:(double)arg1;	// IMP=0x0000000000017d41
- (id)initWithDispatchGroup:(id)arg1 pipelineStates:(id)arg2 errors:(id)arg3;	// IMP=0x0000000000017c8a

@end
