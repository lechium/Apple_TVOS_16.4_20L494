//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPLEngineParametersStorage, NSArray, NSMutableArray, NSMutableDictionary, NSString;
@protocol CPLEngineWrapperArrayDelegate, OS_dispatch_queue;

@interface CPLEngineWrapperArray : NSObject
{
    NSMutableDictionary *_wrappers;	// 8 = 0x8
    NSMutableDictionary *_unopenedWrappers;	// 16 = 0x10
    NSMutableDictionary *_previousOpenErrors;	// 24 = 0x18
    NSMutableArray *_stopAllBlocks;	// 32 = 0x20
    CPLEngineParametersStorage *_parametersStorage;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_queue;	// 48 = 0x30
    id <CPLEngineWrapperArrayDelegate> _delegate;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000000d7f1
@property(nonatomic) __weak id <CPLEngineWrapperArrayDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) CPLEngineParametersStorage *parametersStorage; // @synthesize parametersStorage=_parametersStorage;
- (void)wrapperShouldBeDropped:(id)arg1;	// IMP=0x001000000000d600
- (void)wrapper:(id)arg1 getStatusDictionaryWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000d57c
- (void)wrapper:(id)arg1 getStatusWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000000d4f8
- (void)wrapperLibraryDidClose:(id)arg1;	// IMP=0x001000000000d2dc
- (void)wrapper:(id)arg1 libraryDidOpenWithError:(id)arg2;	// IMP=0x001000000000d100
- (void)wrapperEmergencyExit:(id)arg1;	// IMP=0x001000000000ceb0
- (void)_dropWrapper:(id)arg1;	// IMP=0x001000000000cd7b
- (void)forceBackupWithActivity:(id)arg1 forceClientPush:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000000cc45
- (void)_forceBackupWithActivity:(id)arg1 forceClientPush:(_Bool)arg2 enumerator:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000000c601
- (_Bool)isWrapperOpened:(id)arg1;	// IMP=0x001000000000c594
- (void)enumerateOpenedWrappersWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000c464
- (void)enumerateWrappersWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000c3bb
- (id)registeredWrapperWithLibraryIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000c2cf
- (id)registeredWrapperCreateIfNecessaryWithParameters:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000bf18
@property(readonly, nonatomic) NSArray *registeredLibraryIdentifiers;
@property(readonly, nonatomic) unsigned long long unopenedCount;
@property(readonly, nonatomic) unsigned long long count;
- (void)emergencyStop;	// IMP=0x001000000000bdfd
- (void)stopAllWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x001000000000bbeb
- (void)_callStopAllBlocks;	// IMP=0x001000000000bac1
- (id)_instantiateWrapperWithParameters:(id)arg1 createIfNecessary:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000000b6a0
- (id)_loadWrapperWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000b4b2
- (id)initWithParametersStorage:(id)arg1 queue:(id)arg2;	// IMP=0x001000000000b10a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
