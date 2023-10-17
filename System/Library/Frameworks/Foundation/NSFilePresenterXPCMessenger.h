//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFilePresenterProxy, NSString;
@protocol NSFilePresenter, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface NSFilePresenterXPCMessenger : NSObject
{
    id <NSFilePresenter> _filePresenter;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSFilePresenterProxy *_filePresenterProxy;	// 24 = 0x18
}

- (void)_makePresenter:(id)arg1 validateRelinquishmentToSubitemAtURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000005b2979
- (void)_makePresenter:(id)arg1 relinquishToWritingClaimWithID:(id)arg2 options:(unsigned long long)arg3 purposeID:(id)arg4 subitemURL:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000005b2414
- (void)_makePresenter:(id)arg1 relinquishToReadingClaimWithID:(id)arg2 purposeID:(id)arg3 options:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000005b2194
- (void)_makePresenter:(id)arg1 relinquishToAccessClaimWithID:(id)arg2 purposeID:(id)arg3 ifNecessaryUsingSelector:(SEL)arg4 recordingRelinquishment:(id)arg5 continuer:(CDUnknownBlockType)arg6;	// IMP=0x00000000005b175b
- (id)_writeRelinquishment;	// IMP=0x00000000005b16eb
- (id)_readRelinquishment;	// IMP=0x00000000005b167b
- (void)_makePresenter:(id)arg1 setProviderPurposeIdentifier:(id)arg2;	// IMP=0x00000000005b1542
- (void)_makePresenter:(id)arg1 setLastPresentedItemEventIdentifier:(unsigned long long)arg2;	// IMP=0x00000000005b13fd
- (void)_makePresenter:(id)arg1 observeVersionChangeOfKind:(id)arg2 withClientID:(id)arg3 name:(id)arg4 subitemURL:(id)arg5;	// IMP=0x00000000005b0e97
- (void)_makePresenter:(id)arg1 observeChangeOfUbiquityAttributes:(id)arg2;	// IMP=0x00000000005b0daa
- (void)_makePresenter:(id)arg1 observeSharingChangeWithSubitemURL:(id)arg2;	// IMP=0x00000000005b0b3a
- (void)_makePresenter:(id)arg1 observeUbiquityChangeWithSubitemURL:(id)arg2;	// IMP=0x00000000005b08ca
- (void)_makePresenterObserveReconnection:(id)arg1;	// IMP=0x00000000005b074f
- (void)_makePresenterObserveDisconnection:(id)arg1;	// IMP=0x00000000005b05d4
- (void)_makePresenter:(id)arg1 observeMoveToURL:(id)arg2 withSubitemURL:(id)arg3;	// IMP=0x00000000005b0267
- (void)_makePresenter:(id)arg1 observeChangeWithSubitemURL:(id)arg2;	// IMP=0x00000000005afffd
- (void)_makePresenter:(id)arg1 accommodateDisconnectionWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000005afcb3
- (void)_makePresenter:(id)arg1 accommodateDeletionWithSubitemURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000005af67e
- (void)_makePresenter:(id)arg1 validateRemoteDeletionRecordingRelinquishment:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000005af28d
- (void)_makePresenter:(id)arg1 reportUnsavedChangesWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000005aef0c
- (void)_makePresenter:(id)arg1 saveChangesWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000005aebac
- (oneway void)logSuspensionWarning;	// IMP=0x00000000005aeb30
- (void)collectDebuggingInformationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000005aeb01
- (oneway void)setProviderPurposeIdentifier:(id)arg1;	// IMP=0x00000000005aea50
- (oneway void)updateLastEventID:(unsigned long long)arg1;	// IMP=0x00000000005ae99f
- (oneway void)observePresenterChange:(_Bool)arg1 forSubitemAtURL:(id)arg2;	// IMP=0x00000000005ae772
- (oneway void)observeVersionChangeOfKind:(id)arg1 toItemAtURL:(id)arg2 withClientID:(id)arg3 name:(id)arg4;	// IMP=0x00000000005ae699
- (oneway void)observeChangeOfUbiquityAttributes:(id)arg1;	// IMP=0x00000000005ae5e8
- (oneway void)observeSharingChangeWithSubitemURL:(id)arg1;	// IMP=0x00000000005ae509
- (oneway void)observeUbiquityChangeWithSubitemURL:(id)arg1;	// IMP=0x00000000005ae42a
- (oneway void)observeReconnection;	// IMP=0x00000000005ae37c
- (oneway void)observeDisconnection;	// IMP=0x00000000005ae2ce
- (oneway void)observeMoveToURL:(id)arg1 withSubitemURL:(id)arg2 byWriterWithPurposeID:(id)arg3;	// IMP=0x00000000005ae15f
- (oneway void)observeChangeWithSubitemURL:(id)arg1;	// IMP=0x00000000005ae080
- (void)accommodateDeletionOfSubitemAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000005adece
- (void)saveChangesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000005add4b
- (void)reacquireFromWritingClaimForID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000005adbda
- (oneway void)reacquireFromReadingClaimForID:(id)arg1;	// IMP=0x00000000005ada7d
- (void)relinquishToWritingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 subitemURL:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000005ad6de
- (void)relinquishToReadingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000005ad470
- (void)invalidate;	// IMP=0x00000000005ad438
- (void)dealloc;	// IMP=0x00000000005ad3c2
- (id)initWithFilePresenterProxy:(id)arg1;	// IMP=0x00000000005ad34f
- (id)initWithFilePresenter:(id)arg1 queue:(id)arg2;	// IMP=0x00000000005ad2c9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

