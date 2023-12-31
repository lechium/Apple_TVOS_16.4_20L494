//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SHAudioRecorderDelegate;

@interface SHSimulatorAudioRecorder : NSObject
{
    id <SHAudioRecorderDelegate> delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00200000000429ac
@property(nonatomic) __weak id <SHAudioRecorderDelegate> delegate; // @synthesize delegate;
@property(readonly, nonatomic) long long recordingSource;
- (_Bool)stopRecordingWithError:(id *)arg1;	// IMP=0x0010000000042972
- (void)startRecordingWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000004295d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

