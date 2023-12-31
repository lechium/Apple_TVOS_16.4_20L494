//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GKReporter : NSObject
{
    double _authenticateResponseTimestamp;	// 8 = 0x8
    double _inviteeUILaunchTimestamp;	// 16 = 0x10
    double _connectingDevicesTimestamp;	// 24 = 0x18
    double _programaticInviteTimestamp;	// 32 = 0x20
    double _appLaunchTimestamp;	// 40 = 0x28
    double _totalInviteReceivedTimestamp;	// 48 = 0x30
    double _messageInviteProcessingTimestamp;	// 56 = 0x38
    double _currentRealtimeMatchPersistenceTimestamp;	// 64 = 0x40
}

+ (id)reporter;	// IMP=0x0040000000217559
@property(nonatomic) double currentRealtimeMatchPersistenceTimestamp; // @synthesize currentRealtimeMatchPersistenceTimestamp=_currentRealtimeMatchPersistenceTimestamp;
@property(nonatomic) double messageInviteProcessingTimestamp; // @synthesize messageInviteProcessingTimestamp=_messageInviteProcessingTimestamp;
@property(nonatomic) double totalInviteReceivedTimestamp; // @synthesize totalInviteReceivedTimestamp=_totalInviteReceivedTimestamp;
@property(nonatomic) double appLaunchTimestamp; // @synthesize appLaunchTimestamp=_appLaunchTimestamp;
@property(nonatomic) double programaticInviteTimestamp; // @synthesize programaticInviteTimestamp=_programaticInviteTimestamp;
@property(nonatomic) double connectingDevicesTimestamp; // @synthesize connectingDevicesTimestamp=_connectingDevicesTimestamp;
@property(nonatomic) double inviteeUILaunchTimestamp; // @synthesize inviteeUILaunchTimestamp=_inviteeUILaunchTimestamp;
@property(nonatomic) double authenticateResponseTimestamp; // @synthesize authenticateResponseTimestamp=_authenticateResponseTimestamp;
- (void)reportPlayerAuthenticationFailure:(id)arg1;	// IMP=0x0010000000218d3e
- (void)reportDurationForEvent:(id)arg1 eventType:(id)arg2 withStartTimestamp:(double)arg3;	// IMP=0x0010000000218bfa
- (void)reportEvent:(id)arg1 eventType:(id)arg2 duration:(double)arg3 refApp:(id)arg4;	// IMP=0x0010000000218ad1
- (void)reportOnboardingEventForType:(id)arg1 withStartTimestamp:(double)arg2 refApp:(id)arg3;	// IMP=0x0010000000218a31
- (void)reportScreenTimeEventForType:(id)arg1 withStartTimestamp:(double)arg2;	// IMP=0x0010000000218901
- (void)reportCurrentRealtimeMatchPersistenceDuration;	// IMP=0x0010000000218883
- (void)recordCurrentRealtimeMatchPersistenceTimestamp;	// IMP=0x001000000021885f
- (void)reportTotalInviteReceivedDuration;	// IMP=0x00100000002187e1
- (void)reportAppLaunchDuration;	// IMP=0x0010000000218763
- (void)recordAppLaunchAndTotalTimestamp;	// IMP=0x0010000000218728
- (void)reportProgramaticInviteDuration;	// IMP=0x00100000002186aa
- (void)recordProgramaticInviteTimestamp;	// IMP=0x0010000000218686
- (void)reportConnectingDevicesDuration;	// IMP=0x0010000000218608
- (void)recordConnectingDevicesTimestamp;	// IMP=0x00100000002185e4
- (void)reportMessageInviteProcessingDuration;	// IMP=0x0010000000218566
- (void)recordMessageInviteProcessingTimestamp;	// IMP=0x0010000000218542
- (void)reportInviteeUILaunchDuration;	// IMP=0x00100000002184c4
- (void)recordInviteeUILaunchTimestamp;	// IMP=0x00100000002184a0
- (void)reportAuthenticateResponseDuration;	// IMP=0x0010000000218422
- (void)recordAuthenticateResponseTimestamp;	// IMP=0x00100000002183fe
- (_Bool)isTimeSpanValid:(double)arg1 maxDuration:(double)arg2;	// IMP=0x00100000002183e0
- (void)reportEvent:(id)arg1 reportable:(id)arg2;	// IMP=0x0010000000218204
- (void)reportEvent:(id)arg1 target:(id)arg2 keyPath:(id)arg3;	// IMP=0x00100000002180f3
- (void)reportEvent:(id)arg1 type:(id)arg2 scoreRank:(id)arg3;	// IMP=0x0010000000217ff9
- (void)reportEvent:(id)arg1 type:(id)arg2 inboxFriendRequestCount:(long long)arg3;	// IMP=0x0010000000217ee9
- (void)reportEvent:(id)arg1 type:(id)arg2 count:(long long)arg3;	// IMP=0x0010000000217dd9
- (void)reportEvent:(id)arg1 type:(id)arg2 friendsPlayedThisGame:(id)arg3;	// IMP=0x0010000000217cdf
- (void)reportEvent:(id)arg1 type:(id)arg2 payload:(id)arg3;	// IMP=0x0010000000217bbf
- (void)reportEvent:(id)arg1 type:(id)arg2 adamID:(id)arg3;	// IMP=0x0010000000217a3a
- (void)reportEvent:(id)arg1 type:(id)arg2 bundleID:(id)arg3;	// IMP=0x001000000021794f
- (void)reportEvent:(id)arg1 type:(id)arg2 startTime:(id)arg3 refApp:(id)arg4;	// IMP=0x001000000021783f
- (void)reportEvent:(id)arg1 type:(id)arg2 startTime:(id)arg3;	// IMP=0x001000000021782a
- (void)reportEvent:(id)arg1 type:(id)arg2;	// IMP=0x0010000000217751
- (void)reportEvent:(id)arg1 payload:(id)arg2;	// IMP=0x00100000002175ae

@end

