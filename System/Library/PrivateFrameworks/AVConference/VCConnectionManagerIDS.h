//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VCBitrateArbiter, VCSessionBitrateArbiter;

__attribute__((visibility("hidden")))
@interface VCConnectionManagerIDS
{
    double _lastTimestampForRemoteSendingFromNonPrimary;	// 736 = 0x2e0
    double _lastTimestampPreferredRemoteInterfaceUpdated;	// 744 = 0x2e8
    unsigned int _sentPacketCount[256];	// 752 = 0x2f0
    unsigned int _sentByteCount[256];	// 1776 = 0x6f0
    unsigned int _receivedPacketCount[256];	// 2800 = 0xaf0
    unsigned int _receivedByteCount[256];	// 3824 = 0xef0
    VCSessionBitrateArbiter *_multiwayBitrateArbiter;	// 4848 = 0x12f0
    VCBitrateArbiter *_oneToOneBitrateArbiter;	// 4856 = 0x12f8
    _Bool _isMultiwaySession;	// 4864 = 0x1300
    _Bool _optIntoExistingSubscribedStreams;	// 4865 = 0x1301
}

- (_Bool)optIntoExistingSubscribedStreams;	// IMP=0x00000000002ad098
- (void)setOptIntoExistingSubscribedStreams:(_Bool)arg1;	// IMP=0x00000000002acdf9
- (void)setLastPrimaryConnectionInUse:(id)arg1;	// IMP=0x00000000002acdd9
- (void)setConnectionForDuplication:(id)arg1;	// IMP=0x00000000002acdb9
- (void)setSecondaryConnection:(id)arg1;	// IMP=0x00000000002acd99
- (void)setPrimaryConnection:(id)arg1;	// IMP=0x00000000002acd79
- (id)lastPrimaryConnectionInUse;	// IMP=0x00000000002acd59
- (id)connectionForDuplication;	// IMP=0x00000000002acd39
- (id)secondaryConnection;	// IMP=0x00000000002acd19
- (id)primaryConnection;	// IMP=0x00000000002accf9
- (void)updateConnectionSelectionPolicyWithPreferE2E:(_Bool)arg1;	// IMP=0x00000000002acc72
- (CDStruct_155bd25f *)getConnectionSelectionPolicy;	// IMP=0x00000000002acc52
- (void)didLinkProbingLockdownEnd;	// IMP=0x00000000002acc16
- (void)didUpdateLinkPreferenceOrder:(id)arg1;	// IMP=0x00000000002acab7
- (void)flushLinkProbingStatusWithOptions:(id)arg1;	// IMP=0x00000000002ac9ea
- (void)queryProbingResultsWithOptions:(id)arg1;	// IMP=0x00000000002ac91d
- (void)stopActiveProbingWithOptions:(id)arg1;	// IMP=0x00000000002ac850
- (void)startActiveProbingWithOptions:(id)arg1;	// IMP=0x00000000002ac783
- (_Bool)canOptOutAllStreamsForConnection:(id)arg1;	// IMP=0x00000000002ac74d
- (_Bool)shouldUpdateServerBasedConnection:(id)arg1;	// IMP=0x00000000002ac724
- (_Bool)shouldDropCurrentPrimaryConnectionWithConnectionStats:(CDStruct_50492349 *)arg1;	// IMP=0x00000000002ac577
- (void)useConnectionAsPrimary:(id)arg1;	// IMP=0x00000000002ac557
- (void)reportCurrentPrimaryConnection;	// IMP=0x00000000002ac4fa
- (void)reportConnection:(id)arg1 isInitialConnection:(_Bool)arg2;	// IMP=0x00000000002abfa8
- (void)sourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1 isSourceOnCellular:(_Bool *)arg2 isSourceIPv6:(_Bool *)arg3;	// IMP=0x00000000002abdb5
- (void)updateNegotiatedSettingsOnetoOne:(id)arg1;	// IMP=0x00000000002abd98
- (void)updateDuplicationStateWithConnectionOperation:(int)arg1 isLocalOnWiFi:(_Bool)arg2 isRemoteOnWiFi:(_Bool)arg3;	// IMP=0x00000000002abd2b
- (void)removeFromConnectionArray:(id)arg1;	// IMP=0x00000000002abc0e
- (_Bool)addConnectionToConnectionArray:(id)arg1;	// IMP=0x00000000002ab482
- (_Bool)shouldReplaceConnection:(id)arg1 withConnection:(id)arg2;	// IMP=0x00000000002ab34b
- (_Bool)shouldKeepAllConnections;	// IMP=0x00000000002ab32f
- (void)resetPacketCountAndByteCountWithConnection:(id)arg1;	// IMP=0x00000000002ab2d9
- (void)addLinkProbingTelemetry:(id)arg1;	// IMP=0x00000000002ab05a
- (void)addDuplicationConnectionUpdateTelemetryWithSuggestedLinkTypeCombo:(id)arg1 payload:(id)arg2;	// IMP=0x00000000002aafe9
- (void)updateConnectionForDuplication;	// IMP=0x00000000002aac72
- (void)updateSessionStats:(unsigned short)arg1;	// IMP=0x00000000002aab67
- (id)copyConnectionWithSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1 isPrimary:(_Bool *)arg2;	// IMP=0x00000000002aa86a
- (_Bool)shouldAcceptDataFromSourceDestinationInfo:(struct tagVCSourceDestinationInfo *)arg1;	// IMP=0x00000000002aa7ff
- (void)setPreferredRemoteInterfaceForDuplication:(unsigned char)arg1;	// IMP=0x00000000002aa69e
- (void)setPreferredLocalInterfaceForDuplication:(unsigned char)arg1;	// IMP=0x00000000002aa53d
- (void)internalUpdateOneToOneBitrateCapsForConnection:(id)arg1;	// IMP=0x00000000002aa4e2
- (void)updateOneToOneBitrateCapsForConnection:(id)arg1;	// IMP=0x00000000002aa498
- (void)updateCellularTech:(int)arg1 forLocalInterface:(_Bool)arg2;	// IMP=0x00000000002aa2ef
- (void)updateAllBitrateCapsForConnectionInternal:(id)arg1;	// IMP=0x00000000002aa256
- (void)updateAllBitrateCapsForConnection:(id)arg1;	// IMP=0x00000000002aa20c
- (void)updateCellularMTU:(int)arg1;	// IMP=0x00000000002aa0da
- (id)getSecondaryConnectionToBeCompared;	// IMP=0x00000000002aa0c8
- (id)getPrimaryConnectionToBeCompared;	// IMP=0x00000000002aa0b6
- (unsigned int)getByteCountWithIndex:(unsigned char)arg1 isOutgoing:(_Bool)arg2;	// IMP=0x00000000002aa05c
- (unsigned int)getPacketCountWithIndex:(unsigned char)arg1 isOutgoing:(_Bool)arg2;	// IMP=0x00000000002aa002
- (void)optOutAllStreamsForNonPrimaryConnections;	// IMP=0x00000000002a9d90
- (void)resetParticipantGenerationCounter;	// IMP=0x00000000002a9ce9
- (void)synchronizeParticipantGenerationCounter:(unsigned char)arg1;	// IMP=0x00000000002a9c38
- (void)updatePacketCountAndByteCountWithIndex:(unsigned char)arg1 packetSize:(int)arg2 numOfStreamId:(int)arg3 isPriorityIncluded:(_Bool)arg4 isOutgoing:(_Bool)arg5;	// IMP=0x00000000002a9b7d
- (int)removeConnection:(id)arg1;	// IMP=0x00000000002a9757
- (void)handleSecondaryConnectionRemoved;	// IMP=0x00000000002a93f5
- (void)reselectPrimaryConnection;	// IMP=0x00000000002a8fca
- (void)handlePrimaryConnectionRemoved;	// IMP=0x00000000002a8fb8
- (int)addConnection:(id)arg1;	// IMP=0x00000000002a8638
- (unsigned int)downlinkBitrateCapForConnection:(id)arg1;	// IMP=0x00000000002a8574
- (unsigned int)uplinkBitrateCapForConnection:(id)arg1;	// IMP=0x00000000002a84af
- (unsigned int)oneToOneBitrateCapForConnectionWithType:(unsigned int)arg1;	// IMP=0x00000000002a830d
- (unsigned int)uplinkBitrateCapOneToOne:(id)arg1;	// IMP=0x00000000002a8271
- (unsigned int)uplinkAudioOnlyBitrateCapOneToOne:(id)arg1;	// IMP=0x00000000002a81e0
- (void)reportFirstActiveConnectionOneToOne:(id)arg1 remoteOSVersion:(id)arg2 redState:(_Bool)arg3 isAudioOnly:(_Bool)arg4;	// IMP=0x00000000002a7fb9
- (void)reportActiveConnectionOneToOne:(id)arg1 isAudioOnly:(_Bool)arg2;	// IMP=0x00000000002a7e42
- (void)dealloc;	// IMP=0x00000000002a7da5
- (id)initWithMultiwayEnabled:(_Bool)arg1;	// IMP=0x00000000002a7c9c

@end
