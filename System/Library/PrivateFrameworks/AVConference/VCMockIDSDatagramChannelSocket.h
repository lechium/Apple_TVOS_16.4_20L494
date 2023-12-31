//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface VCMockIDSDatagramChannelSocket
{
    struct sockaddr_in _remoteAddress;	// 3322324 = 0x32b1d4
    struct sockaddr_in _localAddress;	// 3322340 = 0x32b1e4
}

- (void)setIsHopByHopEncryptedOnOptions:(CDStruct_9bf45fcd *)arg1;	// IMP=0x000000000031608d
- (void)setAllSubscribedStreamIDsOnOptions:(CDStruct_9bf45fcd *)arg1;	// IMP=0x0000000000315dcf
- (int)readyToRead;	// IMP=0x0000000000315c48
- (void)writeDatagram:(const void *)arg1 datagramSize:(unsigned int)arg2;	// IMP=0x0000000000315ac0
- (void)writeDatagrams:(const void **)arg1 datagramsSize:(unsigned int *)arg2 datagramsInfo:(CDStruct_4aae7d13 *)arg3 datagramsCount:(int)arg4 options:(struct **)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0000000000315a37
- (void)writeDatagram:(const void *)arg1 datagramSize:(unsigned int)arg2 datagramInfo:(CDStruct_4aae7d13)arg3 options:(CDStruct_9bf45fcd *)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000003159f3
- (void)writeDatagram:(const void *)arg1 datagramSize:(unsigned int)arg2 flags:(CDStruct_4aae7d13)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000003159d7
- (void)dealloc;	// IMP=0x0000000000315985
- (id)initRequiresOptions:(_Bool)arg1 localIP:(id)arg2 localPort:(short)arg3 remoteIP:(id)arg4 remotePort:(short)arg5;	// IMP=0x00000000003155b5

@end

