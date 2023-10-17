//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GTTransport_replayer, MTLCommandBufferDescriptor;

@interface GTAccelerationStructureServerSession : NSObject
{
    struct GTMTLReplayClient *_clientContext;	// 8 = 0x8
    unsigned long long _functionIndex;	// 16 = 0x10
    GTTransport_replayer *_transport;	// 24 = 0x18
    CDUnknownBlockType _dataHandler;	// 32 = 0x20
    MTLCommandBufferDescriptor *_commandBufferDescriptor;	// 40 = 0x28
    unsigned long long sessionID;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x0020000000020e22
@property unsigned long long sessionID; // @synthesize sessionID;
- (void)nextSample:(unsigned long long)arg1;	// IMP=0x0010000000020e08
- (void)receiveData:(id)arg1;	// IMP=0x0010000000020e02
- (void)dealloc;	// IMP=0x0010000000020d80

@end

