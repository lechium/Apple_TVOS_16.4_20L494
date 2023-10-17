//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOActiveTileGroup, GEOActiveTileGroupMigrationTaskOptions, GEOReportedProgress, GEOSearchAttributionManifest, GEOSearchAttributionManifestVersionMigrator, NSProgress, NSString, NSURL, NSURLSession, NSURLSessionDataTask;
@protocol GEORequestCounterTicket, NSObject, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEOSearchAttributionManifestVersionMigrationTask : NSObject
{
    GEOSearchAttributionManifestVersionMigrator *_migrator;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    _Bool _running;	// 24 = 0x18
    NSURL *_newSearchAttributionManifestURL;	// 32 = 0x20
    GEOActiveTileGroup *_oldTileGroup;	// 40 = 0x28
    CDUnknownBlockType _completionHandler;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 56 = 0x38
    GEOReportedProgress *_progress;	// 64 = 0x40
    NSURLSession *_urlSession;	// 72 = 0x48
    NSURLSessionDataTask *_downloadTask;	// 80 = 0x50
    id <GEORequestCounterTicket> _requestCounterTicket;	// 88 = 0x58
    GEOSearchAttributionManifest *_attributionManifest;	// 96 = 0x60
    id <NSObject> _transaction;	// 104 = 0x68
    GEOActiveTileGroupMigrationTaskOptions *_options;	// 112 = 0x70
}

- (void).cxx_destruct;	// IMP=0x0000000001293ead
@property(retain, nonatomic) GEOActiveTileGroupMigrationTaskOptions *options; // @synthesize options=_options;
@property(retain, nonatomic) id <NSObject> transaction; // @synthesize transaction=_transaction;
- (void)removeOldData:(id)arg1;	// IMP=0x000000000129363c
- (void)_completeWithError:(id)arg1;	// IMP=0x00000000012934f2
- (void)populateTileGroup:(id)arg1;	// IMP=0x00000000012934ec
- (void)cancel;	// IMP=0x000000000129345e
- (void)_handleResponse:(id)arg1 withData:(id)arg2 error:(id)arg3;	// IMP=0x0000000001292ecf
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2;	// IMP=0x00000000012926ba
@property(readonly) NSProgress *progress;
@property(readonly, nonatomic) long long estimatedWeight;
- (void)dealloc;	// IMP=0x0000000001292657
- (id)initWithMigrator:(id)arg1 newSearchAttributionManifestURL:(id)arg2 oldTileGroup:(id)arg3;	// IMP=0x0000000001292441
- (id)init;	// IMP=0x0000000001292417

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

