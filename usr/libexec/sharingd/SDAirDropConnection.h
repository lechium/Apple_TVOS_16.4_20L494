//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableData, NSMutableDictionary, NSProgress, NSString, NSURL, SDAirDropFileZipper, SDStatusMonitor;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_os_transaction, SDAirDropConnectionDelegate;

@interface SDAirDropConnection : NSObject
{
    _Bool _discover;	// 8 = 0x8
    _Bool _personAdded;	// 9 = 0x9
    _Bool _stopDeferred;	// 10 = 0xa
    _Bool _userAccepted;	// 11 = 0xb
    _Bool _senderTrusted;	// 12 = 0xc
    _Bool _delayedFinish;	// 13 = 0xd
    _Bool _queueSuspended;	// 14 = 0xe
    _Bool _endEncountered;	// 15 = 0xf
    _Bool _connectionClosed;	// 16 = 0x10
    _Bool _transactionStarted;	// 17 = 0x11
    struct __SFNode *_person;	// 24 = 0x18
    NSURL *_destination;	// 32 = 0x20
    char *_requestBuffer;	// 40 = 0x28
    NSProgress *_progress;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    struct __SecTrust *_clientTrust;	// 64 = 0x40
    double _startTime;	// 72 = 0x48
    SDStatusMonitor *_monitor;	// 80 = 0x50
    long long _lastEvent;	// 88 = 0x58
    NSMutableData *_requestData;	// 96 = 0x60
    struct __CFReadStream *_readStream;	// 104 = 0x68
    SDAirDropFileZipper *_zipper;	// 112 = 0x70
    NSMutableDictionary *_properties;	// 120 = 0x78
    unsigned int _powerAssertionID;	// 128 = 0x80
    NSObject<OS_dispatch_semaphore> *_askSemaphore;	// 136 = 0x88
    struct _CFHTTPServerRequest *_askRequest;	// 144 = 0x90
    struct _CFHTTPServerRequest *_uploadRequest;	// 152 = 0x98
    struct _CFHTTPServerRequest *_discoverRequest;	// 160 = 0xa0
    struct _CFHTTPServerConnection *_connection;	// 168 = 0xa8
    NSData *_mediaCapabilities;	// 176 = 0xb0
    NSObject<OS_os_transaction> *_transaction;	// 184 = 0xb8
    _Bool _contactsOnly;	// 192 = 0xc0
    _Bool _shouldExtractMediaFromPhotosBundles;	// 193 = 0xc1
    NSString *_sessionID;	// 200 = 0xc8
    id <SDAirDropConnectionDelegate> _delegate;	// 208 = 0xd0
}

+ (id)disambiguatedModelName;	// IMP=0x002000000013ac0c
+ (id)validatedItemsArray:(id)arg1;	// IMP=0x001000000013542f
+ (id)validatedFilesArray:(id)arg1;	// IMP=0x001000000013515f
+ (id)validatedFileInfo:(id)arg1;	// IMP=0x0010000000134d69
+ (id)fileInfoExpectedClassForKeyMap;	// IMP=0x0010000000134c0c
- (void).cxx_destruct;	// IMP=0x002000000013b3bf
@property __weak id <SDAirDropConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property _Bool shouldExtractMediaFromPhotosBundles; // @synthesize shouldExtractMediaFromPhotosBundles=_shouldExtractMediaFromPhotosBundles;
@property(copy) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(copy) NSURL *destination; // @synthesize destination=_destination;
@property _Bool contactsOnly; // @synthesize contactsOnly=_contactsOnly;
- (void)stop;	// IMP=0x001000000013b062
- (_Bool)accept;	// IMP=0x001000000013af46
- (void)start;	// IMP=0x001000000013ad94
- (void)startPublishingProgressForPlaceholderFiles:(id)arg1;	// IMP=0x001000000013ad8e
- (void)schedule;	// IMP=0x001000000013ad61
- (void)fileZipper:(id)arg1 event:(long long)arg2 withProperty:(void *)arg3;	// IMP=0x001000000013aa7c
- (_Bool)transferIsOverPrebufferLimit;	// IMP=0x001000000013aa1d
- (void)setCombinedFileURLsAndItems:(id)arg1;	// IMP=0x001000000013a94b
- (void)setSpotlightMetadata:(id)arg1;	// IMP=0x001000000013a945
- (id)whereFromInfo;	// IMP=0x001000000013a8a6
- (void);	// IMP=0x001000000013a6c8
- (void)didFailToSendResponse:(struct _CFHTTPServerResponse *)arg1;	// IMP=0x001000000013a60e
- (void)didSendResponse:(struct _CFHTTPServerResponse *)arg1 forRequest:(struct _CFHTTPServerRequest *)arg2;	// IMP=0x001000000013a280
- (void)finishOperation;	// IMP=0x0010000000139e9d
- (void)notifyClientOfBytesCopied:(id)arg1 timeRemaining:(id)arg2;	// IMP=0x0010000000139d62
- (long long)getStatusCode:(struct _CFHTTPServerResponse *)arg1;	// IMP=0x0010000000139d1d
- (void)didReceiveRequest:(struct _CFHTTPServerRequest *)arg1;	// IMP=0x0010000000139253
- (void)enqueueBadResponseForRequest:(struct _CFHTTPServerRequest *)arg1;	// IMP=0x00100000001390c5
- (void)makeDestinationDirectory;	// IMP=0x0010000000138ed4
- (_Bool)oneHundredContinue:(struct _CFHTTPServerRequest *)arg1;	// IMP=0x0010000000138e86
- (void)enqueueResponse:(struct _CFHTTPServerRequest *)arg1 code:(long long)arg2 body:(struct __CFData *)arg3;	// IMP=0x0010000000138e11
- (void)silentlyCancelRequest;	// IMP=0x0010000000138d38
- (_Bool)senderInfoAvailable;	// IMP=0x0010000000138cb5
- (_Bool)thereIsEnoughFreeSpace;	// IMP=0x0010000000138b89
- (_Bool)startReceivingFile:(struct _CFHTTPServerRequest *)arg1 error:(id *)arg2;	// IMP=0x00100000001387aa
- (id)compressionType;	// IMP=0x00100000001386e2
- (_Bool)startReceivingBody:(struct _CFHTTPServerRequest *)arg1 error:(id *)arg2;	// IMP=0x001000000013853e
- (void)handleReadStreamEvent:(struct __CFReadStream *)arg1 event:(unsigned long long)arg2;	// IMP=0x00100000001383b6
- (void)processRequest;	// IMP=0x00100000001382f4
- (void)cancelAndDecline;	// IMP=0x0010000000138240
- (void)handleAskRequest;	// IMP=0x0010000000137da0
- (void)adjustPropertiesForPhotosBundles;	// IMP=0x0010000000137a9c
- (void)adjustPropertiesForAutoAcceptSenderIsMe:(_Bool)arg1;	// IMP=0x0010000000137993
- (_Bool)transferContainsPhotosAssetBundles;	// IMP=0x00100000001377f0
- (_Bool)allowAskRequestFromPerson:(struct __SFNode *)arg1;	// IMP=0x001000000013771d
- (void)parseAskRequest;	// IMP=0x0010000000137502
- (void)handleDiscoverRequest;	// IMP=0x001000000013736e
- (void)parseDiscoverRequest;	// IMP=0x0010000000137234
- (void)convertURLStringsToURLs;	// IMP=0x0010000000137079
- (void)silentlyCancelRequestOnMainThread;	// IMP=0x0010000000137018
- (_Bool)senderIsMe;	// IMP=0x0010000000136ded
- (_Bool)senderIsTrusted:(id)arg1;	// IMP=0x0010000000136c2f
- (_Bool)senderIsBlocked;	// IMP=0x0010000000136c27
- (void)logSenderIsBlocked;	// IMP=0x0010000000136bca
- (struct __SFNode *)createPersonForAskRequest;	// IMP=0x0010000000136750
- (void)sendUploadResponse:(long long)arg1;	// IMP=0x0010000000136555
- (void)releaseIdleSleepAssertion;	// IMP=0x001000000013644c
- (void)sendAskResponse:(long long)arg1;	// IMP=0x00100000001360bc
- (void)sendDiscoverResponse:(long long)arg1 forKnownAlias:(id)arg2;	// IMP=0x0010000000135b79
- (void)storeIconValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x0010000000135a9d
- (void)storeBooleanValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x0010000000135a06
- (void)storeNumberValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x001000000013596f
- (void)storeStringValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x00100000001358d8
- (void)storeDataValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x0010000000135841
- (void)storeRequestValue:(struct _CFHTTPServerRequest *)arg1 forKey:(struct __CFString *)arg2 convertToNumber:(_Bool)arg3;	// IMP=0x00100000001356da
- (void)storeArrayValue:(struct __CFDictionary *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x0010000000135542
- (void)setProperty:(void *)arg1 forKey:(struct __CFString *)arg2;	// IMP=0x0010000000134bf0
- (void)didReceiveError:(struct __CFError *)arg1;	// IMP=0x0010000000134b03
- (void)notifyClientForEvent:(long long)arg1;	// IMP=0x001000000013420f
- (void)performBlockForAllProgresses:(CDUnknownBlockType)arg1;	// IMP=0x00100000001341fd
- (double)getTransferSize;	// IMP=0x0010000000134198
- (double)getTransferRate;	// IMP=0x0010000000134106
- (void)notifyClient:(long long)arg1 withResults:(id)arg2;	// IMP=0x001000000013407c
- (void)handleTerminalCallBack;	// IMP=0x0010000000134015
- (void)removeObservers;	// IMP=0x0010000000133fc2
- (void)addObservers;	// IMP=0x0010000000133f5b
- (void)wirelessPowerChanged:(id)arg1;	// IMP=0x0010000000133e72
- (void)systemWillSleep:(id)arg1;	// IMP=0x0010000000133da2
- (void)didCloseConnection;	// IMP=0x0010000000133d39
- (void)dealloc;	// IMP=0x0010000000133c0a
- (id)initWithConnection:(struct _CFHTTPServerConnection *)arg1;	// IMP=0x0010000000133a88

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

