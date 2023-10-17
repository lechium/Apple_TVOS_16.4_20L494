//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSMapTable, NSMutableDictionary, NSOperationQueue;

@interface InAppDownloadManager : NSObject
{
    NSLock *_downloadLock;	// 8 = 0x8
    NSOperationQueue *_downloadQueue;	// 16 = 0x10
    NSMapTable *_observers;	// 24 = 0x18
    NSMutableDictionary *_pendingDownloads;	// 32 = 0x20
}

+ (id)manager;	// IMP=0x004000000000c4d7
- (void).cxx_destruct;	// IMP=0x002000000000e700
- (void)_notifyObserversDownloadStatusChanged:(id)arg1;	// IMP=0x001000000000e54f
- (id)processDownloadsForTransactions:(id)arg1;	// IMP=0x001000000000de58
- (void)removeDownloadsForTransactionID:(id)arg1;	// IMP=0x001000000000d4aa
- (void)pauseDownloadWithID:(id)arg1;	// IMP=0x001000000000d146
- (void)cancelDownloadWithID:(id)arg1;	// IMP=0x001000000000cde2
- (_Bool)startDownloadWithID:(id)arg1 client:(id)arg2 auditToken:(CDStruct_4c969caf)arg3;	// IMP=0x001000000000c783
- (void)removeDownloadObserver:(id)arg1;	// IMP=0x001000000000c708
- (id)addDownloadObserver:(id)arg1;	// IMP=0x001000000000c638
- (id)init;	// IMP=0x001000000000c55c

@end
