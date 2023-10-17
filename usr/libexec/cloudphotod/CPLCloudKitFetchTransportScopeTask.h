//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLCloudKitScope, CPLEngineScope, CPLEngineScopeFlagsUpdate, NSString;
@protocol CPLEngineStoreUserIdentifier, CPLEngineTransportGroup;

@interface CPLCloudKitFetchTransportScopeTask
{
    CDUnknownBlockType _completionHandler;	// 8 = 0x8
    CPLEngineScopeFlagsUpdate *_fetchedFlags;	// 16 = 0x10
    long long _options;	// 24 = 0x18
    CPLCloudKitScope *_cloudKitScope;	// 32 = 0x20
    CPLEngineScope *_scope;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000abcb8
@property(readonly, nonatomic) CPLEngineScope *scope; // @synthesize scope=_scope;
@property(readonly, nonatomic) CPLCloudKitScope *cloudKitScope; // @synthesize cloudKitScope=_cloudKitScope;
- (void)runOperations;	// IMP=0x00100000000aa21d
- (void)createRecordZoneWithID:(id)arg1;	// IMP=0x00100000000a9bd5
- (void)_callCompletionWithZone:(id)arg1;	// IMP=0x00100000000a9a2a
- (void)_updateCloudKitScopeWithZone:(id)arg1;	// IMP=0x00100000000a990a
- (id)initWithController:(id)arg1 scope:(id)arg2 cloudKitScope:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000a97f7

// Remaining properties
@property(nonatomic) _Bool allowsFetchCache;
@property(nonatomic, getter=isBackgroundTask) _Bool backgroundTask;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) id fetchCache;
@property(nonatomic, getter=isForcedTask) _Bool forcedTask;
@property(nonatomic) _Bool foreground;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighPriorityBackground) _Bool highPriorityBackground;
@property(readonly) Class superclass;
@property(retain, nonatomic) id <CPLEngineTransportGroup> transportGroup;
@property(retain, nonatomic) id <CPLEngineStoreUserIdentifier> transportUserIdentifier;

@end

