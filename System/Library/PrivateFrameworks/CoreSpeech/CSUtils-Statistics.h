//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeechFoundation/CSUtils.h>

@interface CSUtils (Statistics)
+ (id)distributionDictionary:(id)arg1;	// IMP=0x0080000000001f10
+ (id)getSiriLanguageWithEndpointId:(id)arg1 fallbackLanguage:(id)arg2;	// IMP=0x0080000000029e1b
+ (id)getSiriLanguageWithFallback:(id)arg1;	// IMP=0x0080000000029d45
+ (_Bool)isRemoteDarwinWithDeviceId:(id)arg1;	// IMP=0x008000000006e26d
+ (_Bool)hasRemoteBuiltInMic;	// IMP=0x008000000006e265
+ (_Bool)readAudioChunksFrom:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00800000000ab586
+ (void)iterateBitset:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00800000000cd62c
+ (unsigned int)getNumElementInBitset:(unsigned long long)arg1;	// IMP=0x00800000000cd572
+ (_Bool)xpcConnection:(id)arg1 hasEntitlement:(id)arg2;	// IMP=0x00800000000dd03d
+ (void)getTrialIdsForAssetType:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00800000000fee47
+ (unsigned long long)getAssetTypeForNamespace:(id)arg1;	// IMP=0x00800000000fee3f
+ (id)recordContextString:(id)arg1;	// IMP=0x00800000000ff54c
+ (_Bool)isValidRecordContext:(id)arg1;	// IMP=0x00800000000ff544
+ (_Bool)isRecordContextJarvisButtonPress:(id)arg1;	// IMP=0x00800000000ff4e4
+ (_Bool)isRecordContextJarvisVoiceTrigger:(id)arg1;	// IMP=0x00800000000ff484
+ (_Bool)isRecordContextRaiseToSpeak:(id)arg1;	// IMP=0x00800000000ff424
+ (_Bool)isRecordContextHearstDoubleTap:(id)arg1;	// IMP=0x00800000000ff3c4
+ (_Bool)isRecordContextHearstVoiceTrigger:(id)arg1;	// IMP=0x00800000000ff364
+ (_Bool)isRecordContextSpeakerIdTrainingTrigger:(id)arg1;	// IMP=0x00800000000ff304
+ (_Bool)isRecordContextAutoPrompt:(id)arg1;	// IMP=0x00800000000ff2a4
+ (_Bool)isRecordContextHomeButtonPress:(id)arg1;	// IMP=0x00800000000ff244
+ (_Bool)isRecordContextRemoraVoiceTrigger:(id)arg1;	// IMP=0x00800000000ff1e4
+ (_Bool)isRecordContextDarwinVoiceTrigger:(id)arg1;	// IMP=0x00800000000ff184
+ (_Bool)isRecordContextBuiltInVoiceTrigger:(id)arg1;	// IMP=0x00800000000ff124
+ (_Bool)isRecordContextVoiceTrigger:(id)arg1;	// IMP=0x00800000000ff066
@end

