//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC24RequestDispatcherBridges40DictationSpeechRecognizerResponseHandler
{
    MISSING_TYPE *dictationOptions;	// 0 = 0x0
}

- (void).cxx_destruct;	// IMP=0x0000000000097c70
- (void)localSpeechRecognizerClient:(id)arg1 didCompletionRecognitionWithStatistics:(id)arg2 requestId:(id)arg3 endpointMode:(long long)arg4 error:(id)arg5;	// IMP=0x0000000000096e30
- (void)localSpeechRecognizerClient:(id)arg1 receivedEagerRecognitionCandidateWithRequestId:(id)arg2 rcId:(unsigned long long)arg3 speechPackage:(id)arg4 duration:(double)arg5 metadata:(id)arg6;	// IMP=0x0000000000096d80
- (void)localSpeechRecognizerClient:(id)arg1 receivedEagerRecognitionCandidateWithRequestId:(id)arg2 rcId:(unsigned long long)arg3 speechPackage:(id)arg4 duration:(double)arg5;	// IMP=0x0000000000096cf0
- (void)localSpeechRecognizerClient:(id)arg1 receivedFinalResultWithRequestId:(id)arg2 speechPackage:(id)arg3 metadata:(id)arg4;	// IMP=0x0000000000096c40
- (void)localSpeechRecognizerClient:(id)arg1 receivedFinalResultWithRequestId:(id)arg2 speechPackage:(id)arg3;	// IMP=0x0000000000096ba0
- (void)localSpeechRecognizerClient:(id)arg1 receivedFinalResultCandidateWithRequestId:(id)arg2 speechPackage:(id)arg3;	// IMP=0x0000000000096b90
- (void)localSpeechRecognizerClient:(id)arg1 receivedPartialResultWithRequestId:(id)arg2 language:(id)arg3 tokens:(id)arg4 metadata:(id)arg5;	// IMP=0x0000000000096ac0
- (void)localSpeechRecognizerClient:(id)arg1 receivedPartialResultWithRequestId:(id)arg2 language:(id)arg3 tokens:(id)arg4;	// IMP=0x0000000000096a20

@end

