//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue, OS_xpc_object;

@interface CSVoiceIdXPCListener : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSObject<OS_xpc_object> *_listener;	// 16 = 0x10
    NSMutableArray *_connections;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000cdbc0
@property(retain, nonatomic) NSMutableArray *connections; // @synthesize connections=_connections;
@property(retain, nonatomic) NSObject<OS_xpc_object> *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_handleNewRemoteConnection:(id)arg1;	// IMP=0x00100000000cda27
- (void)_handleListenerError:(id)arg1;	// IMP=0x00100000000cd9f0
- (void)_handleListenerEvent:(id)arg1;	// IMP=0x00100000000cd8f2
- (void)listen;	// IMP=0x00100000000cd77a
- (id)init;	// IMP=0x00100000000cd69b

@end

