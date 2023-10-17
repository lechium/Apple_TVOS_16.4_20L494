//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSRecursiveLock, NSString;
@protocol SHAudioRecordingManager, SHMatcherDelegate;

@interface SHMultipleConcurrentMatcher : NSObject
{
    id <SHMatcherDelegate> delegate;	// 8 = 0x8
    NSArray *_matchers;	// 16 = 0x10
    id <SHAudioRecordingManager> _audioRecordingManager;	// 24 = 0x18
    NSRecursiveLock *_lock;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000002bb1e
@property(readonly, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) id <SHAudioRecordingManager> audioRecordingManager; // @synthesize audioRecordingManager=_audioRecordingManager;
@property(readonly, nonatomic) NSArray *matchers; // @synthesize matchers=_matchers;
@property(nonatomic) __weak id <SHMatcherDelegate> delegate; // @synthesize delegate;
- (void)matcher:(id)arg1 didProduceResponse:(id)arg2;	// IMP=0x001000000002b9b9
- (_Bool)session:(id)arg1 shouldAttemptToMatchSignature:(id)arg2;	// IMP=0x001000000002b7fc
- (void)stopRecognition;	// IMP=0x001000000002b5e3
- (void)stopRecognitionForRequestID:(id)arg1;	// IMP=0x001000000002b3a6
- (void)startRecognitionForRequest:(id)arg1;	// IMP=0x001000000002b1e5
- (id)initWithMatchers:(id)arg1 audioRecordingManager:(id)arg2;	// IMP=0x001000000002afe3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
