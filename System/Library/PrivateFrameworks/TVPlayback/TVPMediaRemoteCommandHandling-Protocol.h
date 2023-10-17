//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVPlayback/NSObject-Protocol.h>

@class MPChangePlaybackRateCommandEvent, MPRemoteCommandEvent, MPSeekCommandEvent, MPSkipIntervalCommandEvent;

@protocol TVPMediaRemoteCommandHandling <NSObject>
- (long long)_handleChangePlaybackRateCommand:(MPChangePlaybackRateCommandEvent *)arg1;
- (long long)_handleSkipBackwardCommand:(MPSkipIntervalCommandEvent *)arg1;
- (long long)_handleSkipForwardCommand:(MPSkipIntervalCommandEvent *)arg1;
- (long long)_handleSeekBackwardCommand:(MPSeekCommandEvent *)arg1;
- (long long)_handleSeekForwardCommand:(MPSeekCommandEvent *)arg1;
- (long long)_handlePreviousTrackCommand:(MPRemoteCommandEvent *)arg1;
- (long long)_handleNextTrackCommand:(MPRemoteCommandEvent *)arg1;
- (long long)_handleStopCommand:(MPRemoteCommandEvent *)arg1;
- (long long)_handleTogglePlayPauseCommand:(MPRemoteCommandEvent *)arg1;
- (long long)_handlePlayCommand:(MPRemoteCommandEvent *)arg1;
- (long long)_handlePauseCommand:(MPRemoteCommandEvent *)arg1;
@end
