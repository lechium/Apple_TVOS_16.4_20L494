//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MRPlayerPath;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRNowPlayingPlayerPathInvalidationHandler : NSObject
{
    MRPlayerPath *_playerPath;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    CDUnknownBlockType _callback;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001e591f
@property(readonly, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) MRPlayerPath *playerPath; // @synthesize playerPath=_playerPath;
- (id)description;	// IMP=0x00000000001e58eb
- (id)initWithPlayerPath:(id)arg1 queue:(id)arg2 invalidationCallback:(CDUnknownBlockType)arg3;	// IMP=0x00000000001e57cc

@end

