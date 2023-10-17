//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioFormat, AVAudioSession, NSArray, NSData, NSDictionary, NSURL;
@protocol AVAudioPlayerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AudioPlayerImpl : NSObject
{
    id <AVAudioPlayerDelegate> _delegate;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    NSURL *_url;	// 24 = 0x18
    NSDictionary *_actualSettings;	// 32 = 0x20
    AVAudioFormat *_format;	// 40 = 0x28
    _Bool _playRetain;	// 48 = 0x30
    NSArray *_channelAssignments;	// 56 = 0x38
    AVAudioSession *_audioSession;	// 64 = 0x40
    _Bool _sessionListenerWasSet;	// 72 = 0x48
    unsigned long long _endInterruptionFlags;	// 80 = 0x50
    void *_localPlayer;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_gcd;	// 96 = 0x60
}

- (void)dealloc;	// IMP=0x0000000000037d2c
- (id)init;	// IMP=0x0000000000037ca3

@end

