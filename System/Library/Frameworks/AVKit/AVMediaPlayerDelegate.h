//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVPlayerViewController, MPRemoteCommandCenter;

__attribute__((visibility("hidden")))
@interface AVMediaPlayerDelegate : NSObject
{
    _Bool _areCommandHandlersInstalled;	// 8 = 0x8
    void *_mediaRemoteCommandHandlerRef;	// 16 = 0x10
    MPRemoteCommandCenter *_commandCenter;	// 24 = 0x18
    AVPlayerViewController *_playerViewController;	// 32 = 0x20
}

+ (_Bool)_isThirdPartyPIPSupported;	// IMP=0x006000000011676e
- (void).cxx_destruct;	// IMP=0x00000000001163da
@property(nonatomic) __weak AVPlayerViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
@property(retain, nonatomic) MPRemoteCommandCenter *commandCenter; // @synthesize commandCenter=_commandCenter;
- (long long)_handleDisableLegibleLanguageOptionCommand;	// IMP=0x0000000000116242
- (long long)_handleEnableLanguageOptionCommandWithLegibleOption:(id)arg1;	// IMP=0x0000000000115d88
- (long long)_handleDisableAudibleLanguageOptionCommand;	// IMP=0x0000000000115c37
- (long long)_handleEnableLanguageOptionCommandWithAudibleOption:(id)arg1;	// IMP=0x0000000000115720
- (long long)handleSpecialSeekBackward:(id)arg1;	// IMP=0x0000000000115589
- (long long)handleSpecialSeekForward:(id)arg1;	// IMP=0x0000000000115462
- (long long)handleChangePlaybackPosition:(id)arg1;	// IMP=0x000000000011530f
- (long long)handleDisableLanguageOption:(id)arg1;	// IMP=0x00000000001151d1
- (long long)handleEnableLanguageOption:(id)arg1;	// IMP=0x0000000000115025
- (long long)handleChangePlaybackRate:(id)arg1;	// IMP=0x0000000000114c94
- (long long)handleSeekBackward:(id)arg1;	// IMP=0x0000000000114aa0
- (long long)handleSeekForward:(id)arg1;	// IMP=0x00000000001148ae
- (long long)handleSkipBackward:(id)arg1;	// IMP=0x0000000000114764
- (long long)handleSkipForward:(id)arg1;	// IMP=0x000000000011461a
- (long long)handleStopCommand:(id)arg1;	// IMP=0x000000000011452e
- (long long)handlePlayPauseCommand:(id)arg1;	// IMP=0x0000000000114442
- (long long)handlePauseCommand:(id)arg1;	// IMP=0x0000000000114356
- (long long)handlePlayCommand:(id)arg1;	// IMP=0x000000000011426a
- (void)enableCommandsForUserInteraction;	// IMP=0x00000000001140f7
- (id)mediaRemoteManager;	// IMP=0x000000000011407e
- (void)invalidate;	// IMP=0x0000000000113f86
- (void)removeCommandHandlers;	// IMP=0x0000000000113c1d
- (void)installCommandHandlers;	// IMP=0x00000000001134ed
- (id)description;	// IMP=0x00000000001133ac
- (void)dealloc;	// IMP=0x000000000011336e
- (id)initWithPlayerViewController:(id)arg1 commandCenter:(id)arg2;	// IMP=0x0000000000112ba6
- (id)initWithPlayerViewController:(id)arg1;	// IMP=0x00000000001128e8

@end

