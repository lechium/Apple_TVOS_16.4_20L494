//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface _DRCConnectionState : NSObject
{
    _Bool _isClosed;	// 8 = 0x8
    NSObject<OS_xpc_object> *_connection;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_connectionQueue;	// 24 = 0x18
}

+ (id)sharedConnectionState;	// IMP=0x006000000000a666
- (void).cxx_destruct;	// IMP=0x000000000000ae13
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue; // @synthesize connectionQueue=_connectionQueue;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) _Bool isClosed; // @synthesize isClosed=_isClosed;
- (id)sendMessageWithReplySync:(id)arg1;	// IMP=0x000000000000ad8d
- (_Bool)sendMessage:(id)arg1;	// IMP=0x000000000000ac20
- (id)init;	// IMP=0x000000000000a733
- (void)cleanupState;	// IMP=0x000000000000a6bb

@end

