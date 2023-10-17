//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DirectUploadSessionController, ISOperationQueue, MediaSocialAuthenticationCoordinator, MediaSocialErrorCoordinator, MediaSocialStatusPollingCoordinator, NSMutableArray, NSMutableDictionary, NSString, SSSQLiteDatabase;
@protocol OS_dispatch_queue;

@interface DirectUploadController : NSObject
{
    MediaSocialAuthenticationCoordinator *_authenticationCoordinator;	// 8 = 0x8
    id _backgroundTaskObserver;	// 16 = 0x10
    NSMutableArray *_clients;	// 24 = 0x18
    SSSQLiteDatabase *_database;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 40 = 0x28
    MediaSocialErrorCoordinator *_errorCoordinator;	// 48 = 0x30
    MediaSocialStatusPollingCoordinator *_pollingCoordinator;	// 56 = 0x38
    ISOperationQueue *_postOperationQueue;	// 64 = 0x40
    NSMutableDictionary *_progressDictionary;	// 72 = 0x48
    DirectUploadSessionController *_sessionController;	// 80 = 0x50
}

+ (void)_setupDatabase:(id)arg1;	// IMP=0x002000000005c71a
+ (void)_sendAccessDeniedErrorWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x001000000005c4c9
+ (id)_orderedUploadQueryWithDatabase:(id)arg1 predicate:(id)arg2;	// IMP=0x001000000005c3e0
+ (id)_orderedPostQueryWithDatabase:(id)arg1 predicate:(id)arg2;	// IMP=0x001000000005c2f7
+ (_Bool)_isConnectionEntitled:(id)arg1;	// IMP=0x001000000005c2a5
+ (id)_copyPersistentIdentifiersArrayWithXPCArray:(id)arg1;	// IMP=0x001000000005c184
+ (void)resumeUploadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000058903
+ (void)registerObserverWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000587a4
+ (void)pauseUploadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x00100000000583ae
+ (void)observeXPCServer:(id)arg1;	// IMP=0x00100000000582ec
+ (void)getUploadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000057ff3
+ (void)cancelUploadsWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000057b3b
+ (id)sharedController;	// IMP=0x0010000000056c56
- (void).cxx_destruct;	// IMP=0x0020000000062257
- (id)_sessionController;	// IMP=0x00100000000621f4
- (void)_sendRemoveUploadsMessageWithUploadIdentifiers:(id)arg1;	// IMP=0x0010000000061ff1
- (void)_sendChangeUploadsMessageWithUploads:(id)arg1;	// IMP=0x0010000000061dee
- (void)_retryFailedEntities;	// IMP=0x0010000000061748
- (_Bool)_resumeUploadsWithPredicate:(id)arg1 clientIdentifier:(id)arg2 resetFailureCount:(_Bool)arg3 error:(id *)arg4;	// IMP=0x001000000006105b
- (void)_registerObserverWithMessage:(id)arg1 connection:(id)arg2;	// IMP=0x0010000000060b39
- (id)_postOperationQueue;	// IMP=0x0010000000060ad0
- (id)_pollingCoordinator;	// IMP=0x0010000000060a6d
- (_Bool)_pauseUploadsWithPredicate:(id)arg1 clientIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x001000000006048f
- (void)_operationDidFinishForPostIdentifier:(long long)arg1 response:(id)arg2;	// IMP=0x001000000005f6a8
- (id)_newSSVDirectUploadWithProgress:(id)arg1 state:(long long)arg2;	// IMP=0x001000000005f5ed
- (id)_newAddUploadsMessageWithDatabase:(id)arg1 hydratedUploadIDs:(id)arg2;	// IMP=0x001000000005f2f3
- (id)_errorCoordinator;	// IMP=0x001000000005f290
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingReplyBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000005f099
- (void)_handleMessage:(id)arg1 connection:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000005ef63
- (void)_finishPostWithPostIdentifier:(long long)arg1 response:(id)arg2;	// IMP=0x001000000005e867
- (void)_enumerateSSVDirectUploadsWithQuery:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x001000000005e6e5
- (void)_enqueueNextReadyMediaSocialPostOperationWithDatabase:(id)arg1;	// IMP=0x001000000005dfdc
- (id)_databaseIfExists;	// IMP=0x001000000005df26
- (id)_database;	// IMP=0x001000000005dde1
- (void)_cleanupPendingUploads:(id)arg1 database:(id)arg2;	// IMP=0x001000000005d1b6
- (void)_cleanupSessionController;	// IMP=0x001000000005d156
- (_Bool)_cancelUploadsWithPredicate:(id)arg1 clientIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x001000000005c841
- (id)_authenticationCoordinator;	// IMP=0x001000000005c7de
- (void)_clientDisconnectNotification:(id)arg1;	// IMP=0x001000000005bdfd
- (void)pollingCoordinator:(id)arg1 didPollWithResponses:(id)arg2;	// IMP=0x001000000005b919
- (void)mediaSocialErrorCoordinator:(id)arg1 didFinishWithResult:(long long)arg2;	// IMP=0x001000000005a5e1
- (void)authenticationCoordinator:(id)arg1 didFinishAuthenticationWithResponse:(id)arg2;	// IMP=0x0010000000059acc
- (void)uploadSessionController:(id)arg1 uploadProgressDidChange:(id)arg2;	// IMP=0x001000000005980c
- (void)uploadSessionController:(id)arg1 uploadDidFinishWithDatabaseID:(long long)arg2 response:(id)arg3;	// IMP=0x001000000005959d
- (void)uploadSessionController:(id)arg1 uploadDidFailWithDatabaseID:(long long)arg2 error:(id)arg3;	// IMP=0x0010000000058ef1
- (void)uploadSessionController:(id)arg1 uploadDidBeginTransferWithDatabaseID:(long long)arg2;	// IMP=0x0010000000058d14
- (void)uploadSessionController:(id)arg1 taskDidStopWithDatabaseID:(long long)arg2;	// IMP=0x0010000000058d02
- (void)start;	// IMP=0x001000000005789b
- (void)addMediaSocialPostWithDescription:(id)arg1 client:(id)arg2;	// IMP=0x0010000000056cdb
- (void)dealloc;	// IMP=0x0010000000056b5c
- (id)init;	// IMP=0x0010000000056b04

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

