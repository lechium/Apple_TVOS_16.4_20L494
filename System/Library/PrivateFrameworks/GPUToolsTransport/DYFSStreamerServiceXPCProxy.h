//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol GTXPCConnection;

__attribute__((visibility("hidden")))
@interface DYFSStreamerServiceXPCProxy : NSObject
{
    id <GTXPCConnection> _connection;	// 8 = 0x8
    NSSet *_ignoreMethods;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000b7f9
- (void)streamAbort;	// IMP=0x000000000000b7a0
- (void)finishedSending;	// IMP=0x000000000000b747
- (void)itemData:(id)arg1 attributes:(id)arg2;	// IMP=0x000000000000b694
- (void)initializeTransfer;	// IMP=0x000000000000b63b
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000000b5b9
- (id)initWithConnection:(id)arg1 remoteProperties:(id)arg2;	// IMP=0x000000000000b43d

@end
