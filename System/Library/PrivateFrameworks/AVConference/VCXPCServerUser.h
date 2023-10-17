//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCXPCServerUser : NSObject
{
    NSObject<OS_dispatch_queue> *queue;	// 8 = 0x8
    CDUnknownBlockType block;	// 16 = 0x10
    int _eventLogLevel;	// 24 = 0x18
}

@property(nonatomic) int eventLogLevel; // @synthesize eventLogLevel=_eventLogLevel;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue;
- (void)dealloc;	// IMP=0x00000000002dad8d
- (id)init;	// IMP=0x00000000002dad2f

@end

