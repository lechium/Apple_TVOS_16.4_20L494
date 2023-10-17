//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GTBaseStreamTransport_capture, NSMutableArray, NSURL;

@interface GTSharedMemoryTransport_capture
{
    void *_outgoingShmem;	// 232 = 0xe8
    void *_incomingShmem;	// 240 = 0xf0
    void *_masterSMRegion;	// 248 = 0xf8
    void *_outgoingBuffer;	// 256 = 0x100
    void *_incomingBuffer;	// 264 = 0x108
    GTBaseStreamTransport_capture *_relayTransport;	// 272 = 0x110
    CDUnknownFunctionPointerType _consumeBytesIMP;	// 280 = 0x118
    SEL _consumeBytesSEL;	// 288 = 0x120
    unsigned int _currentPacketBytesLeft;	// 296 = 0x128
    int _mode;	// 300 = 0x12c
    _Bool _deferred;	// 304 = 0x130
    NSMutableArray *_bufferedMessages;	// 312 = 0x138
    char _sendName[64];	// 320 = 0x140
    char _receiveName[64];	// 384 = 0x180
    unsigned long long _sm_region_size_small;	// 448 = 0x1c0
    unsigned long long _sm_region_size_large;	// 456 = 0x1c8
}

@property(readonly, nonatomic) _Bool deferred; // @synthesize deferred=_deferred;
- (void)_dequeueIncomingMessages;	// IMP=0x000000000000b789
- (void)_dequeuePacket;	// IMP=0x000000000000b68c
- (void)_relayPacket;	// IMP=0x000000000000b615
- (void)_accumulateMessageBytes;	// IMP=0x000000000000b5d4
- (long long)_read:(void *)arg1 size:(unsigned long long)arg2;	// IMP=0x000000000000b56b
- (void)_copyFromSM:(void *)arg1 size:(unsigned long long)arg2;	// IMP=0x000000000000b514
- (void)_updateReaderOffset:(unsigned long long)arg1;	// IMP=0x000000000000b4f3
- (unsigned int)_nextMessageSerial;	// IMP=0x000000000000b4d6
- (long long)_write:(const void *)arg1 size:(unsigned long long)arg2;	// IMP=0x000000000000b418
- (void)_waitEAGAIN;	// IMP=0x000000000000b3ce
- (void)_copyToSM:(const void *)arg1 size:(long long)arg2;	// IMP=0x000000000000b376
- (unsigned long long)_computeBytesAvailableToRead;	// IMP=0x000000000000b321
- (unsigned long long)_computeBytesAvailableToWrite;	// IMP=0x000000000000b2ce
- (void)_invalidate;	// IMP=0x000000000000b27d
- (_Bool)connected;	// IMP=0x000000000000b268
- (id)connect;	// IMP=0x000000000000b1f9
- (_Bool)_clientConnect:(id *)arg1;	// IMP=0x000000000000b0c8
- (_Bool)_serverConnect:(id *)arg1;	// IMP=0x000000000000af9d
- (_Bool)_createAndRunSources:(id *)arg1;	// IMP=0x000000000000ae58
- (void)_setupIOBuffers;	// IMP=0x000000000000ae1e
- (_Bool)_openSMRegion:(struct sm_region_header **)arg1 size:(unsigned long long)arg2 name:(const char *)arg3 error:(id *)arg4;	// IMP=0x000000000000acb8
- (_Bool)_initializeSMRegion:(struct sm_region_header **)arg1 size:(unsigned long long)arg2 name:(const char *)arg3 error:(id *)arg4;	// IMP=0x000000000000ab81
- (void)_tearDownSharedMemory;	// IMP=0x000000000000aaa3
- (void *)_mapSharedMemoryFile:(int)arg1 size:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000000a91c
- (unsigned long long)_calculateVMRegionMapSize:(unsigned long long)arg1;	// IMP=0x000000000000a912
- (id)_getSharedMemoryNameWithSuffix:(id)arg1;	// IMP=0x000000000000a8ae
- (_Bool)send:(id)arg1 inReplyTo:(id)arg2 error:(id *)arg3 replyQueue:(id)arg4 timeout:(unsigned long long)arg5 handler:(CDUnknownBlockType)arg6;	// IMP=0x000000000000a7cf
- (void)setRelayTransport:(id)arg1;	// IMP=0x000000000000a780
@property(retain, nonatomic) NSURL *url; // @dynamic url;
- (void)dealloc;	// IMP=0x000000000000a4fa
- (id)initWithMode:(int)arg1 initialMessageSerial:(unsigned int)arg2;	// IMP=0x000000000000a37a
- (id)initWithMode:(int)arg1;	// IMP=0x000000000000a366
- (id)init;	// IMP=0x000000000000a33b

@end

