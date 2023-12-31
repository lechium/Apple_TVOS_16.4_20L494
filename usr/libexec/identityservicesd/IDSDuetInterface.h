//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol IDSDuetInterfaceDelegate;

@interface IDSDuetInterface : NSObject
{
    id <IDSDuetInterfaceDelegate> _delegate;	// 8 = 0x8
    NSMutableSet *_initialSyncClientIDs;	// 16 = 0x10
    NSMutableSet *_reunionSyncClientIDs;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x004000000001f310
- (void).cxx_destruct;	// IMP=0x002000000001ff80
@property(retain, nonatomic) NSMutableSet *reunionSyncClientIDs; // @synthesize reunionSyncClientIDs=_reunionSyncClientIDs;
@property(retain, nonatomic) NSMutableSet *initialSyncClientIDs; // @synthesize initialSyncClientIDs=_initialSyncClientIDs;
@property(nonatomic) __weak id <IDSDuetInterfaceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)clearAdmissionCheckCache;	// IMP=0x001000000001fe70
- (void)checkAvailabilityForValues:(id)arg1 priority:(long long)arg2 logString:(id)arg3 fromQueue:(id)arg4 withCompletionBlock:(CDUnknownBlockType)arg5;	// IMP=0x001000000001fba0
- (void)forceCheckAvailabilityForValues:(id)arg1 priority:(long long)arg2 logString:(id)arg3 fromQueue:(id)arg4 withCompletionBlock:(CDUnknownBlockType)arg5;	// IMP=0x001000000001f890
- (void)_checkAvailabilityForValues:(id)arg1 priority:(long long)arg2 logString:(id)arg3 fromQueue:(id)arg4 withCompletionBlock:(CDUnknownBlockType)arg5;	// IMP=0x001000000001f7c0
- (id)_newKeyForValues:(id)arg1 priority:(long long)arg2;	// IMP=0x001000000001f5f0
- (_Bool)reunionSyncInProgress;	// IMP=0x001000000001f5d0
- (void)setReunionSyncInProgress:(_Bool)arg1 forClientID:(id)arg2;	// IMP=0x001000000001f580
- (_Bool)initialSyncInProgress;	// IMP=0x001000000001f560
- (void)setInitialSyncInProgress:(_Bool)arg1 forClientID:(id)arg2;	// IMP=0x001000000001f510
- (void)_resourceAvailabilityChangedForIdentifiers:(id)arg1;	// IMP=0x001000000001f4d0
- (void)dealloc;	// IMP=0x001000000001f490
- (id)init;	// IMP=0x001000000001f410
- (void)_setupPairedSystemContext;	// IMP=0x001000000001f400

@end

