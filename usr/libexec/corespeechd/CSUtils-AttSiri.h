//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSUtils.h>

@interface CSUtils (AttSiri)
+ (id)timeStampString;	// IMP=0x0010000000017129
+ (void)logMitigationFeatures:(id)arg1 forTask:(id)arg2 withModelOutput:(id)arg3 forMHRequestId:(id)arg4;	// IMP=0x00100000000167cb
+ (_Bool)isRemoteDarwinWithDeviceId:(id)arg1;	// IMP=0x00100000000616a2
+ (_Bool)hasRemoteBuiltInMic;	// IMP=0x001000000006169a
+ (void)getTrialIdsForAssetType:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000616b2
+ (unsigned long long)getAssetTypeForNamespace:(id)arg1;	// IMP=0x00100000000616aa
+ (id)recordContextString:(id)arg1;	// IMP=0x001000000006db22
+ (_Bool)isValidRecordContext:(id)arg1;	// IMP=0x001000000006db1a
+ (_Bool)isRecordContextJarvisButtonPress:(id)arg1;	// IMP=0x001000000006daba
+ (_Bool)isRecordContextJarvisVoiceTrigger:(id)arg1;	// IMP=0x001000000006da5a
+ (_Bool)isRecordContextRaiseToSpeak:(id)arg1;	// IMP=0x001000000006d9fa
+ (_Bool)isRecordContextHearstDoubleTap:(id)arg1;	// IMP=0x001000000006d99a
+ (_Bool)isRecordContextHearstVoiceTrigger:(id)arg1;	// IMP=0x001000000006d93a
+ (_Bool)isRecordContextSpeakerIdTrainingTrigger:(id)arg1;	// IMP=0x001000000006d8da
+ (_Bool)isRecordContextAutoPrompt:(id)arg1;	// IMP=0x001000000006d87a
+ (_Bool)isRecordContextHomeButtonPress:(id)arg1;	// IMP=0x001000000006d81a
+ (_Bool)isRecordContextRemoraVoiceTrigger:(id)arg1;	// IMP=0x001000000006d7ba
+ (_Bool)isRecordContextDarwinVoiceTrigger:(id)arg1;	// IMP=0x001000000006d75a
+ (_Bool)isRecordContextBuiltInVoiceTrigger:(id)arg1;	// IMP=0x001000000006d6fa
+ (_Bool)isRecordContextVoiceTrigger:(id)arg1;	// IMP=0x001000000006d63c
+ (_Bool)extractArchiveFromDirectory:(id)arg1 toDir:(id)arg2;	// IMP=0x001000000007a700
+ (id)getSiriLanguageWithEndpointId:(id)arg1 fallbackLanguage:(id)arg2;	// IMP=0x001000000007b855
+ (id)getSiriLanguageWithFallback:(id)arg1;	// IMP=0x001000000007b77f
+ (_Bool)xpcConnection:(id)arg1 hasEntitlement:(id)arg2;	// IMP=0x00100000000a6fdb
+ (id)audioPortSubtypeAsString:(unsigned int)arg1;	// IMP=0x00100000000bb69e
+ (_Bool)isBluetoothVehicleOutput;	// IMP=0x00100000000bb470
+ (_Bool)isBluetoothAudioDeviceConnected;	// IMP=0x00100000000bb2b8
+ (_Bool)isHeadphoneDeviceWithRecordRoute:(id)arg1 playbackRoute:(id)arg2;	// IMP=0x00100000000baf6b
+ (_Bool)isHFPWithRecordRoute:(id)arg1;	// IMP=0x00100000000baf4c
+ (id)distributionDictionary:(id)arg1;	// IMP=0x00100000000d177f
+ (_Bool)readAudioChunksFrom:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00100000000d4e7a
+ (void)iterateBitset:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00100000000dd2f4
+ (unsigned int)getNumElementInBitset:(unsigned long long)arg1;	// IMP=0x00100000000dd23a
+ (_Bool)machXPCConnection:(id)arg1 hasEntitlement:(id)arg2;	// IMP=0x00100000000ddb9c
@end
