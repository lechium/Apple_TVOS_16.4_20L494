//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString, NSUUID;

@interface _IDSDataChannelLinkContext : NSObject
{
    BOOL _linkID;	// 8 = 0x8
    unsigned char _networkType;	// 9 = 0x9
    long long _connectionType;	// 16 = 0x10
    unsigned int _RATType;	// 24 = 0x18
    unsigned short _maxMTU;	// 28 = 0x1c
    unsigned char _remoteNetworkType;	// 30 = 0x1e
    long long _remoteConnectionType;	// 32 = 0x20
    unsigned int _remoteRATType;	// 40 = 0x28
    unsigned int _maxBitrate;	// 44 = 0x2c
    NSUUID *_linkUUID;	// 48 = 0x30
    NSUUID *_QRSessionID;	// 56 = 0x38
    long long _relayServerProvider;	// 64 = 0x40
    NSData *_relaySessionToken;	// 72 = 0x48
    NSData *_relaySessionKey;	// 80 = 0x50
    _Bool _serverIsDegraded;	// 88 = 0x58
    unsigned short _localLinkFlags;	// 90 = 0x5a
    unsigned short _remoteLinkFlags;	// 92 = 0x5c
    unsigned int _localDataSoMask;	// 96 = 0x60
    unsigned int _remoteDataSoMask;	// 100 = 0x64
    _Bool _isVirtualRelayLink;	// 104 = 0x68
    NSString *_localInterfaceName;	// 112 = 0x70
    unsigned short _channelNumber;	// 120 = 0x78
    NSData *_hbhEncryptionkey;	// 128 = 0x80
    NSData *_hbhDecryptionkey;	// 136 = 0x88
    NSUUID *_childConnectionID;	// 144 = 0x90
    unsigned long long _parentUniquePID;	// 152 = 0x98
    BOOL _delegatedLinkID;	// 160 = 0xa0
    unsigned short _localRelayLinkID;	// 162 = 0xa2
    unsigned short _remoteRelayLinkID;	// 164 = 0xa4
    _Bool _directConnectionIsReady;	// 166 = 0xa6
}

- (void).cxx_destruct;	// IMP=0x00000000000ef478
- (id)description;	// IMP=0x00000000000ef29c

@end

