//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _NSProgressSubscriber : NSObject
{
    CDUnknownBlockType _publishingHandler;	// 8 = 0x8
    NSString *_subscriberID;	// 16 = 0x10
    NSMutableDictionary *_proxiesByPublisherID;	// 24 = 0x18
    _Bool _started;	// 32 = 0x20
    NSLock *_lock;	// 40 = 0x28
}

- (oneway void)removePublisherForID:(id)arg1;	// IMP=0x00000000005f331f
- (oneway void)observePublisherForID:(id)arg1 values:(id)arg2 forKeys:(id)arg3;	// IMP=0x00000000005f3115
- (oneway void)observePublisherUserInfoForID:(id)arg1 value:(id)arg2 forKey:(id)arg3;	// IMP=0x00000000005f2f75
- (oneway void)addPublisher:(id)arg1 forID:(id)arg2 withValues:(id)arg3 isOld:(_Bool)arg4;	// IMP=0x00000000005f2cce
- (void)stop;	// IMP=0x00000000005f2b6f
- (void)startForFileURL:(id)arg1;	// IMP=0x00000000005f296d
- (void)startForCategory:(id)arg1;	// IMP=0x00000000005f2788
- (void)dealloc;	// IMP=0x00000000005f26d7
- (id)initWithPublishingHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000005f260a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
