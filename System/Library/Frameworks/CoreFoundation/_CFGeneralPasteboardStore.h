//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString, _CFRemotePasteboardCache;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _CFGeneralPasteboardStore
{
    long long _localOnlyGeneration;	// 112 = 0x70
    _CFRemotePasteboardCache *_remotePasteboardCache;	// 120 = 0x78
    NSObject<OS_dispatch_queue> *_remotePasteboardNotificationQueue;	// 128 = 0x80
    unsigned long long _lastAccessTimestamp;	// 136 = 0x88
    unsigned long long _lastRemoteAvailableTimestamp;	// 144 = 0x90
    unsigned long long _timeout;	// 152 = 0x98
}

+ (id)generalPasteboard;	// IMP=0x001000000008ed42
- (void)pasteboardWillBeFetched:(CDUnknownBlockType)arg1;	// IMP=0x000000000008fd0c
- (void)remotePasteboardAvailable:(_Bool)arg1;	// IMP=0x000000000008fcff
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x000000000008fc7d
- (void)dealloc;	// IMP=0x000000000008fc08
- (void)_onqueue_handleNewEntries:(struct __CFArray *)arg1 forMessage:(id)arg2 shouldInvalidateClientMetadata:(_Bool *)arg3;	// IMP=0x000000000008f841
- (id)_onqueue_cacheForGeneration:(long long)arg1;	// IMP=0x000000000008f72d
- (long long)_onqueue_nextGenerationCount;	// IMP=0x000000000008f672
- (void)notifyRemoteGenerationBecameAvailable:(unsigned char)arg1;	// IMP=0x000000000008f4b3
- (void)_onqueue_notifyRemoteGenerationBecameAvailable:(unsigned char)arg1;	// IMP=0x000000000008f34b
- (void)handleRequestData:(id)arg1;	// IMP=0x000000000008f22e
- (void)handleRefreshCache:(id)arg1;	// IMP=0x000000000008f088
- (void)setTimeout:(unsigned long long)arg1;	// IMP=0x000000000008f07c
- (void)handlePasteNotification;	// IMP=0x000000000008f057
- (void)handleRegisterEntries:(id)arg1;	// IMP=0x000000000008efe4
- (void)handleNotifyHasEntries:(id)arg1;	// IMP=0x000000000008ef71
- (void)handleMakeGenerationLocal:(id)arg1;	// IMP=0x000000000008ee8c
- (id)_initWithName:(struct __CFString *)arg1;	// IMP=0x000000000008eda3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

