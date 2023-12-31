//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSDataChannelLinkContext, NSData, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue, OS_nw_connection, OS_nw_context, OS_nw_path_evaluator;

@interface _IDSDatagramChannel : NSObject
{
    _Bool _verboseFunctionalLogging;	// 8 = 0x8
    int _socketDescriptor;	// 12 = 0xc
    CDUnknownBlockType _eventHandler;	// 16 = 0x10
    CDUnknownBlockType _readHandler;	// 24 = 0x18
    CDUnknownBlockType _readHandlerWithOptions;	// 32 = 0x20
    CDUnknownBlockType _writeHandler;	// 40 = 0x28
    _Bool _connected;	// 48 = 0x30
    struct os_unfair_lock_s _writeLock;	// 52 = 0x34
    struct os_unfair_lock_s _readLock;	// 56 = 0x38
    _Bool _isInvalidated;	// 60 = 0x3c
    long long _operationMode;	// 64 = 0x40
    long long _preferredDataPathType;	// 72 = 0x48
    NSObject<OS_nw_connection> *_connection;	// 80 = 0x50
    NSObject<OS_nw_context> *_context;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_queue;	// 96 = 0x60
    _Bool _hasMetadata;	// 104 = 0x68
    _Bool _sentFirstReadLinkInfo;	// 105 = 0x69
    _Bool _receivedPreConnectionData;	// 106 = 0x6a
    _Bool _waitForPreConnectionDataForConnected;	// 107 = 0x6b
    _Bool _startCalled;	// 108 = 0x6c
    _Bool _startAutomatically;	// 109 = 0x6d
    int _osChannelFD;	// 112 = 0x70
    NSObject<OS_nw_path_evaluator> *_pathEvaluator;	// 120 = 0x78
    IDSDataChannelLinkContext *_cellularLink;	// 128 = 0x80
    NSMutableDictionary *_linkContexts;	// 136 = 0x88
    BOOL _defaultLinkID;	// 144 = 0x90
    NSData *_preConnectionData;	// 152 = 0x98
    NSMutableArray *_sendingMetadata;	// 160 = 0xa0
    _Bool _needsMediaEncryptionInfo;	// 168 = 0xa8
    unsigned long long _outgoingBytes;	// 176 = 0xb0
    unsigned long long _incomingBytes;	// 184 = 0xb8
    unsigned long long _outgoingPackets;	// 192 = 0xc0
    unsigned long long _incomingPackets;	// 200 = 0xc8
    double _lastOutgoingStatReport;	// 208 = 0xd0
    double _lastIncomingStatReport;	// 216 = 0xd8
    NSMutableDictionary *_MKIArrivalTime;	// 224 = 0xe0
    NSMutableDictionary *_firstPacketArrivalTimeForMKI;	// 232 = 0xe8
    NSMutableDictionary *_probingDict;	// 240 = 0xf0
    NSObject<OS_nw_connection> *_directConnectionsByLinkID[256];	// 248 = 0xf8
    IDSDataChannelLinkContext *_linkContextsByLinkID[256];	// 2296 = 0x8f8
    NSMutableDictionary *_linkIDToParticipantMap;	// 4344 = 0x10f8
    NSMutableDictionary *_localRemoteRelayLinkIDToVirtualLinkIDMap;	// 4352 = 0x1100
}

- (void).cxx_destruct;	// IMP=0x00000000000efce0
- (id)init;	// IMP=0x00000000000efc7c

@end

