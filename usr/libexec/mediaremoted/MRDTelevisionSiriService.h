//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MRDTelevisionSiriService : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;	// 8 = 0x8
    NSMutableDictionary *_clientIDsToContexts;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000004b495
- (void)_endSiriRecordingWithContext:(id)arg1;	// IMP=0x001000000004b405
- (void)_activateSiriWithContext:(id)arg1 andBeginRecording:(_Bool)arg2;	// IMP=0x001000000004b376
- (id)_pineboardInterface;	// IMP=0x001000000004b310
- (void)handleClientDisconnect:(id)arg1;	// IMP=0x001000000004b1d4
- (void)handleMicrophoneButtonUpFromClient:(id)arg1;	// IMP=0x001000000004af00
- (void)handleMicrophoneButtonDownFromClient:(id)arg1;	// IMP=0x001000000004ab18
- (id)init;	// IMP=0x001000000004aa70

@end
