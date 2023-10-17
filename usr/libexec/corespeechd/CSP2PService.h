//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CSADCompanionServiceProvider, OS_dispatch_queue;

@interface CSP2PService : NSObject
{
    id <CSADCompanionServiceProvider> _adCompanionServiceProvider;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSString *_lastCommunicatedPeer;	// 24 = 0x18
    NSString *_voiceTriggerBatchId;	// 32 = 0x20
    NSString *_voiceIdentificationBatchId;	// 40 = 0x28
}

+ (id)sharedInstance;	// IMP=0x00400000000a7560
- (void).cxx_destruct;	// IMP=0x00200000000b4568
@property(retain, nonatomic) NSString *voiceIdentificationBatchId; // @synthesize voiceIdentificationBatchId=_voiceIdentificationBatchId;
@property(retain, nonatomic) NSString *voiceTriggerBatchId; // @synthesize voiceTriggerBatchId=_voiceTriggerBatchId;
@property(retain, nonatomic) NSString *lastCommunicatedPeer; // @synthesize lastCommunicatedPeer=_lastCommunicatedPeer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <CSADCompanionServiceProvider> adCompanionServiceProvider; // @synthesize adCompanionServiceProvider=_adCompanionServiceProvider;
- (id)_sha1:(id)arg1;	// IMP=0x00100000000b43e4
- (_Bool)isInternalWithoutProfile;	// IMP=0x00100000000b438d
- (_Bool)isHeadlessDeviceDataCollectionModeEnabled;	// IMP=0x00100000000b4335
- (id)_getContentsOfDirectory:(id)arg1;	// IMP=0x00100000000b418c
- (id)_spIdSiriDebugVoiceProfileCacheDirectoryForProfile:(id)arg1 locale:(id)arg2;	// IMP=0x00100000000b40df
- (id)_spIdSiriDebugVoiceProfileRootDirectoryForProfile:(id)arg1 locale:(id)arg2;	// IMP=0x00100000000b4056
- (id)_spIdSiriDebugTrainedUsersFilePathForLocale:(id)arg1;	// IMP=0x00100000000b3fff
- (id)_spIdSiriDebugVoiceProfileStoreRootDirectoryForLocale:(id)arg1;	// IMP=0x00100000000b3f7c
- (id)_spIdSiriDebugVoiceProfileStoreRootDirectory;	// IMP=0x00100000000b3f25
- (id)_spIdSiriDebugGradingDataRootDirectory;	// IMP=0x00100000000b3eb3
- (id)_spIdSiriDebugVTDataDirectory;	// IMP=0x00100000000b3e41
- (void)_createDirectoryIfDoesNotExist:(id)arg1;	// IMP=0x00100000000b3b9b
- (id)_speakerRecognitionAudioLogsGradingDir;	// IMP=0x00100000000b3a3c
- (void)_sendAcousticGradingDataToPeerId:(id)arg1;	// IMP=0x00100000000b3452
- (void)_sendVoiceProfileUpdateTriggerToPeerId:(id)arg1 forLocale:(id)arg2;	// IMP=0x00100000000b31ad
- (void)_processVoiceProfileUpdateTriggerFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b2dca
- (void)_processReverseTransferVoiceProfileCommandFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b1f9a
- (void)_sendVoiceProfile:(id)arg1 toPeerId:(id)arg2;	// IMP=0x00100000000b0afc
- (void)_processFetchVoiceProfileCommandFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000b05bc
- (void)_getHomeUserIdForSharedSiriId:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b003c
- (void)_processVoiceProfileListQueryCommandFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000af5b2
- (void)_processGradingDataFetchCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000af42d
- (void)_processVoiceProfileDeleteCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000aecc2
- (void)_receiveVoiceProfileFromPeerId:(id)arg1 voiceProfileInfo:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ad5b2
- (void)_receiveVoiceGradingDataFromPeerId:(id)arg1 requestInfo:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ac5fa
- (void)_receiveParallelRecordingFromPeerId:(id)arg1 recordingInfo:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ab7ef
- (id)_sendGradingData:(id)arg1 withFileName:(id)arg2 toPeerId:(id)arg3 withCompressedFlag:(_Bool)arg4 withUncompressedDataSize:(unsigned long long)arg5 withBatchId:(id)arg6 withRetainFileFlag:(_Bool)arg7 withFilePrefix:(id)arg8 withCompletion:(CDUnknownBlockType)arg9;	// IMP=0x00100000000aac57
- (void)_sendGradingData:(id)arg1 withFileName:(id)arg2 toPeerId:(id)arg3 withCompressedFlag:(_Bool)arg4 withUncompressedDataSize:(unsigned long long)arg5 withBatchId:(id)arg6 withRetainFileFlag:(_Bool)arg7 withFilePrefix:(id)arg8;	// IMP=0x00100000000aac0e
- (void)_sendCoreSpeechMagusGradingDataToPeerId:(id)arg1;	// IMP=0x00100000000aa5d1
- (void)_sendGeckoSpeechLogsToPeerId:(id)arg1;	// IMP=0x00100000000a9e31
- (void)_sendCoreSpeechGradingDataToPeerId:(id)arg1;	// IMP=0x00100000000a98ad
- (void)_sendVoiceTriggerGradingDataToPeerId:(id)arg1;	// IMP=0x00100000000a9282
- (void)_compressFilesInDirectory:(id)arg1 matchingPredicate:(id)arg2 sortedByCreationDate:(_Bool)arg3 compressedFileAvailable:(CDUnknownBlockType)arg4;	// IMP=0x00100000000a861b
- (void)_compressFilesInDirectory:(id)arg1 matchingPredicate:(id)arg2 compressedFileAvailable:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a8603
- (void)_processParallelRecordingCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a84f9
- (void)_processRemoteHeySiriCommandWithRequest:(id)arg1 fromSenderID:(id)arg2 withReply:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a8365
- (void)sendGeckoSpeechLogsToCompanion;	// IMP=0x00100000000a8237
- (void)sendAcousticGradingDataToNearbyPeer;	// IMP=0x00100000000a8118
- (void)sendVoiceProfileUpdatedMessageToNearbyPeerForLocale:(id)arg1;	// IMP=0x00100000000a7faa
- (void)sendVTNearMissGradingDataToCompanion;	// IMP=0x00100000000a7e7c
- (void)sendCoreSpeechGradingDataToNearbyPeer;	// IMP=0x00100000000a7d5d
- (void);	// IMP=0x00100000000a760d
- (id)init;	// IMP=0x00100000000a75b5

@end
