//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/NSObject-Protocol.h>

@class HFAudioPlayer, NSError, NSString;

@protocol HFAudioPlayerDelegate <NSObject>

@optional
- (void)audioPlayerDidFinishPlayback:(HFAudioPlayer *)arg1 withError:(NSError *)arg2;
- (void)audioPlayer:(HFAudioPlayer *)arg1 didUpdateAveragePower:(double)arg2;
- (void)audioPlayer:(HFAudioPlayer *)arg1 didUpdatePlaybackTime:(double)arg2;
- (void)audioPlayerDidResumePlayback:(HFAudioPlayer *)arg1;
- (void)audioPlayerDidStopPlayback:(HFAudioPlayer *)arg1;
- (void)audioPlayer:(HFAudioPlayer *)arg1 didPausePlaybackWithReason:(NSString *)arg2;
@end

