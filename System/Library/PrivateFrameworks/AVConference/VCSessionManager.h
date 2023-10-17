//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCSessionManager : NSObject
{
    NSMutableDictionary *_sessions;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_sessionQueue;	// 24 = 0x18
    _Bool _sharingEnabled;	// 32 = 0x20
}

+ (void)addNSError:(id)arg1 toXPCArgumentDictionary:(id)arg2;	// IMP=0x0010000000126452
+ (id)sharedInstance;	// IMP=0x0010000000126403
@property(nonatomic) _Bool sharingEnabled; // @synthesize sharingEnabled=_sharingEnabled;
@property(readonly, nonatomic) NSMutableDictionary *sessions; // @synthesize sessions=_sessions;
- (void)releaseSession:(id)arg1;	// IMP=0x000000000012a64c
- (id)participantConfigFromXPCDictionary:(id)arg1;	// IMP=0x000000000012a366
- (void)deregisterBlocksForService;	// IMP=0x000000000012a16f
- (void)registerBlocksForService;	// IMP=0x00000000001281c8
- (void)vcSession:(id)arg1 participantID:(id)arg2 didDetectError:(id)arg3;	// IMP=0x000000000012813e
- (void)vcSession:(id)arg1 participantID:(id)arg2 didChangeMediaPriority:(unsigned char)arg3 description:(id)arg4;	// IMP=0x0000000000128052
- (void)vcSessionShouldReconnect:(id)arg1;	// IMP=0x000000000012800c
- (void)vcSession:(id)arg1 participantID:(id)arg2 remoteMediaStateDidChange:(unsigned int)arg3 forMediaType:(unsigned int)arg4;	// IMP=0x0000000000127f30
- (void)vcSession:(id)arg1 participantID:(id)arg2 mediaStateDidChange:(unsigned int)arg3 forMediaType:(unsigned int)arg4 didSucceed:(_Bool)arg5 error:(id)arg6;	// IMP=0x0000000000127e0b
- (void)vcSession:(id)arg1 participantID:(id)arg2 remoteVideoPausedDidChange:(_Bool)arg3;	// IMP=0x0000000000127d59
- (void)vcSession:(id)arg1 participantID:(id)arg2 remoteAudioPausedDidChange:(_Bool)arg3;	// IMP=0x0000000000127ca7
- (void)vcSession:(id)arg1 participantID:(id)arg2 videoPaused:(_Bool)arg3 didSucceed:(_Bool)arg4 error:(id)arg5;	// IMP=0x0000000000127bab
- (void)vcSession:(id)arg1 participantID:(id)arg2 audioPaused:(_Bool)arg3 didSucceed:(_Bool)arg4 error:(id)arg5;	// IMP=0x0000000000127aaf
- (void)vcSession:(id)arg1 participantID:(id)arg2 remoteScreenEnabledDidChange:(_Bool)arg3;	// IMP=0x00000000001279fd
- (void)vcSession:(id)arg1 participantID:(id)arg2 remoteVideoEnabledDidChange:(_Bool)arg3;	// IMP=0x000000000012794b
- (void)vcSession:(id)arg1 participantID:(id)arg2 remoteAudioEnabledDidChange:(_Bool)arg3;	// IMP=0x0000000000127899
- (void)vcSession:(id)arg1 participantID:(id)arg2 screenEnabled:(_Bool)arg3 didSucceed:(_Bool)arg4 error:(id)arg5;	// IMP=0x000000000012779d
- (void)vcSession:(id)arg1 participantID:(id)arg2 videoEnabled:(_Bool)arg3 didSucceed:(_Bool)arg4 error:(id)arg5;	// IMP=0x00000000001276a1
- (void)vcSession:(id)arg1 participantID:(id)arg2 audioEnabled:(_Bool)arg3 didSucceed:(_Bool)arg4 error:(id)arg5;	// IMP=0x00000000001275a5
- (void)vcSession:(id)arg1 oneToOneModeEnabled:(_Bool)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x00000000001274d1
- (void)vcSession:(id)arg1 updateConfiguration:(id)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x0000000000127418
- (void)vcSession:(id)arg1 removeParticipantWithID:(id)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x000000000012735f
- (void)vcSession:(id)arg1 addParticipantWithID:(id)arg2 didSucceed:(_Bool)arg3 error:(id)arg4;	// IMP=0x0000000000127187
- (void)vcSession:(id)arg1 downlinkRateAdaptationDidChangeWithInfo:(id)arg2;	// IMP=0x0000000000127116
- (void)vcSession:(id)arg1 uplinkRateAdaptationDidChangeWithInfo:(id)arg2;	// IMP=0x00000000001270a5
- (void)vcSession:(id)arg1 didStopWithError:(id)arg2;	// IMP=0x0000000000126fe5
- (void)vcSession:(id)arg1 didStart:(_Bool)arg2 error:(id)arg3;	// IMP=0x0000000000126f25
- (id)sessionForStreamToken:(unsigned int)arg1;	// IMP=0x00000000001267ef
- (id)sessionForUUID:(id)arg1;	// IMP=0x00000000001266c7
- (void)dealloc;	// IMP=0x0000000000126630
- (id)init;	// IMP=0x000000000012657a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
