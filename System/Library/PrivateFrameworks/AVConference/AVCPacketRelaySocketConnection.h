//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCPacketFilter;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVCPacketRelaySocketConnection : NSObject
{
    unsigned char _type;	// 8 = 0x8
    _Bool _isDemuxNeeded;	// 9 = 0x9
    int _unixSocket;	// 12 = 0xc
    _Bool _isConnectedSocket;	// 16 = 0x10
    struct sockaddr _remoteIPPort;	// 17 = 0x11
    unsigned int _remoteIPPortLength;	// 36 = 0x24
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
    char *dataBuffer;	// 48 = 0x30
    CDUnknownBlockType _readHandler;	// 56 = 0x38
    AVCPacketFilter *_packetFilter;	// 64 = 0x40
}

@property(retain) AVCPacketFilter *packetFilter; // @synthesize packetFilter=_packetFilter;
@property _Bool isDemuxNeeded; // @synthesize isDemuxNeeded=_isDemuxNeeded;
@property(copy) CDUnknownBlockType readHandler; // @synthesize readHandler=_readHandler;
@property(readonly) unsigned char type; // @synthesize type=_type;
- (void)dealloc;	// IMP=0x000000000032e42a
- (id)description;	// IMP=0x000000000032e35e
- (_Bool)sendData:(const void *)arg1 size:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x000000000032e0bc
- (void)receiveDataOnSocket:(unsigned short)arg1;	// IMP=0x000000000032de65
- (void)readyToRead;	// IMP=0x000000000032de4f
- (int)stop;	// IMP=0x000000000032dd52
- (int)start;	// IMP=0x000000000032dbfd
- (id)initWithSocket:(unsigned short)arg1 remoteAddress:(id)arg2 packetFilter:(id)arg3;	// IMP=0x000000000032d7fb

@end
