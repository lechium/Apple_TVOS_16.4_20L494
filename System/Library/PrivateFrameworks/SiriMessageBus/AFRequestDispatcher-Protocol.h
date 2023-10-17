//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriMessageBus/NSObject-Protocol.h>

@class AFCommandExecutionInfo, AFDictationOptions, AFSpeechRecognition, CLLocation, NSArray, NSDateInterval, NSDictionary, NSString, SABaseClientBoundCommand;
@protocol AFRequestDispatcherServiceHelper;

@protocol AFRequestDispatcher <NSObject>
- (void)postTestResultSelectedWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2 rcId:(NSString *)arg3;
- (void)postTestResultCandidateWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2 rcId:(NSString *)arg3 recognitionSausage:(AFSpeechRecognition *)arg4;
- (void)startTestSpeechRequestWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2 enableASR:(_Bool)arg3 inputOrigin:(NSString *)arg4 location:(CLLocation *)arg5 jitContext:(NSArray *)arg6 overrideModelPath:(NSString *)arg7;
- (void)startSessionWithAssistantId:(NSString *)arg1 languageCode:(NSString *)arg2 understandingOnDevice:(_Bool)arg3;
- (void)sendRequestContextWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2 audioSource:(NSString *)arg3 audioDestination:(NSString *)arg4 responseMode:(NSString *)arg5 isEyesFree:(_Bool)arg6 isVoiceTriggerEnabled:(_Bool)arg7 isTextToSpeechEnabled:(_Bool)arg8 isTriggerlessFollowup:(_Bool)arg9 bargeInModes:(NSArray *)arg10 approximatePreviousTTSInterval:(NSDateInterval *)arg11 deviceRestrictions:(NSArray *)arg12 voiceTriggerEventInfo:(NSDictionary *)arg13;
- (void)startTextRequestWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2 inputOrigin:(NSString *)arg3 utterance:(NSString *)arg4;
- (void)startDirectActionRequestWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2 inputOrigin:(NSString *)arg3 directAction:(NSString *)arg4 requestExecutionParameters:(NSDictionary *)arg5;
- (void)startUnderstandingOnServerRequestWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2 inputOrigin:(NSString *)arg3;
- (void)startCorrectionSpeechRequestWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2 inputOrigin:(NSString *)arg3 utterance:(NSString *)arg4 previousUtterance:(NSString *)arg5;
- (void)startLocalRequestWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2 inputOrigin:(NSString *)arg3;
- (void)startSpeechRequestWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2 inputOrigin:(NSString *)arg3 location:(CLLocation *)arg4 asrOnServer:(_Bool)arg5;
- (void)startSpeechRequestWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2 inputOrigin:(NSString *)arg3 location:(CLLocation *)arg4;
- (void)cancelRequestWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2;
- (void)requestCompletedWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2;
- (void)handleCommand:(SABaseClientBoundCommand *)arg1 executionContextInfo:(AFCommandExecutionInfo *)arg2 reply:(void (^)(id <SAAceCommand>, NSError *))arg3;
- (_Bool)implementsCommand:(NSString *)arg1 forDomain:(NSString *)arg2;
- (NSArray *)commandsForDomain:(NSString *)arg1;
- (NSArray *)domains;
- (id)initWithRequestDispatcherServiceHelper:(id <AFRequestDispatcherServiceHelper>)arg1;

@optional
- (_Bool)sessionExistsForAssistantId:(NSString *)arg1;
- (void)endSessionWithAssistantId:(NSString *)arg1;
- (void)resumeDictationRecognitionWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2 prefixText:(NSString *)arg3 postfixText:(NSString *)arg4 selectedText:(NSString *)arg5;
- (void)pauseDictationRecognitionWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2;
- (void)startSessionWithAssistantId:(NSString *)arg1 languageCode:(NSString *)arg2 understandingOnDevice:(_Bool)arg3 sharedUserId:(NSString *)arg4;
- (void)prewarmWithAssistantId:(NSString *)arg1 languageCode:(NSString *)arg2 prewarmOptions:(unsigned long long)arg3 sharedUserId:(NSString *)arg4;
- (void)endDictationSessionWithAssistantId:(NSString *)arg1;
- (void)startUnderstandingDictationRequestWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2 inputOrigin:(NSString *)arg3 dictationOptions:(AFDictationOptions *)arg4;
- (void)startUnderstandingDictationSessionWithAssistantId:(NSString *)arg1 languageCode:(NSString *)arg2 understandingOnDevice:(_Bool)arg3;
- (void)startSpeechDictationRequestWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2 inputOrigin:(NSString *)arg3 dictationOptions:(AFDictationOptions *)arg4;
- (void)startSpeechDictationSessionWithAssistantId:(NSString *)arg1 languageCode:(NSString *)arg2 recognitionOnDevice:(_Bool)arg3;
- (void)startUnderstandingOnServerTextRequestWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2 inputOrigin:(NSString *)arg3 utterance:(NSString *)arg4;
- (void)sendRequestContextWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2 audioSource:(NSString *)arg3 audioDestination:(NSString *)arg4 responseMode:(NSString *)arg5 isEyesFree:(_Bool)arg6 isVoiceTriggerEnabled:(_Bool)arg7 isTextToSpeechEnabled:(_Bool)arg8 isTriggerlessFollowup:(_Bool)arg9 bargeInModes:(NSArray *)arg10 approximatePreviousTTSInterval:(NSDateInterval *)arg11 deviceRestrictions:(NSArray *)arg12 voiceTriggerEventInfo:(NSDictionary *)arg13 voiceAudioSessionId:(unsigned int)arg14;
- (void)requestFailedWithAssistantId:(NSString *)arg1 requestId:(NSString *)arg2;
@end

