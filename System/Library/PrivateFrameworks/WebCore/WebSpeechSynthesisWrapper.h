//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebSpeechSynthesisWrapper : NSObject
{
    void *m_synthesizerObject;	// 8 = 0x8
    struct RefPtr<WebCore::PlatformSpeechSynthesisUtterance, WTF::RawPtrTraits<WebCore::PlatformSpeechSynthesisUtterance>, WTF::DefaultRefDerefTraits<WebCore::PlatformSpeechSynthesisUtterance>> m_utterance;	// 16 = 0x10
    struct RetainPtr<AVSpeechSynthesizer> m_synthesizer;	// 24 = 0x18
}

- (id).cxx_construct;	// IMP=0x0000000000162350
- (void).cxx_destruct;	// IMP=0x0000000000162300
- (void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(struct _NSRange)arg2 utterance:(id)arg3;	// IMP=0x00000000001622d0
- (void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2;	// IMP=0x0000000000162230
- (void)speechSynthesizer:(id)arg1 didContinueSpeechUtterance:(id)arg2;	// IMP=0x0000000000162200
- (void)speechSynthesizer:(id)arg1 didPauseSpeechUtterance:(id)arg2;	// IMP=0x00000000001621d0
- (void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;	// IMP=0x0000000000162130
- (void)speechSynthesizer:(id)arg1 didStartSpeechUtterance:(id)arg2;	// IMP=0x0000000000162100
- (void)cancel;	// IMP=0x00000000001620a0
- (void)resetState;	// IMP=0x0000000000162050
- (void)resume;	// IMP=0x0000000000161ff0
- (void)pause;	// IMP=0x0000000000161f90
- (void)speakUtterance:(void *)arg1;	// IMP=0x0000000000161cc0
- (float)mapSpeechRateToPlatformRate:(float)arg1;	// IMP=0x0000000000161bc0
- (id)initWithSpeechSynthesizer:(void *)arg1;	// IMP=0x0000000000161b70

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
