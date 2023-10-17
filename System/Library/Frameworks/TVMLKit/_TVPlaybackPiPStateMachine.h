//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString, _TVPlaybackViewController;

__attribute__((visibility("hidden")))
@interface _TVPlaybackPiPStateMachine : NSObject
{
    NSHashTable *_playbackViewControllers;	// 8 = 0x8
    _Bool _shouldAutomaticallyDismissAtPictureInPictureStart;	// 16 = 0x10
    _TVPlaybackViewController *_fullScreenPlaybackViewController;	// 24 = 0x18
    _TVPlaybackViewController *_activePiPPlaybackViewController;	// 32 = 0x20
    _TVPlaybackViewController *_startingPiPPlaybackViewController;	// 40 = 0x28
    _TVPlaybackViewController *_stoppingPiPPlaybackViewController;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000014bb82
@property(readonly, nonatomic) _TVPlaybackViewController *stoppingPiPPlaybackViewController; // @synthesize stoppingPiPPlaybackViewController=_stoppingPiPPlaybackViewController;
@property(readonly, nonatomic) _TVPlaybackViewController *startingPiPPlaybackViewController; // @synthesize startingPiPPlaybackViewController=_startingPiPPlaybackViewController;
@property(readonly, nonatomic) _TVPlaybackViewController *activePiPPlaybackViewController; // @synthesize activePiPPlaybackViewController=_activePiPPlaybackViewController;
@property(nonatomic) __weak _TVPlaybackViewController *fullScreenPlaybackViewController; // @synthesize fullScreenPlaybackViewController=_fullScreenPlaybackViewController;
@property(readonly, nonatomic) NSHashTable *playbackViewControllers; // @synthesize playbackViewControllers=_playbackViewControllers;
@property(nonatomic) _Bool shouldAutomaticallyDismissAtPictureInPictureStart; // @synthesize shouldAutomaticallyDismissAtPictureInPictureStart=_shouldAutomaticallyDismissAtPictureInPictureStart;
- (void)playerViewControllerDidStopPictureInPicture:(id)arg1;	// IMP=0x000000000014bb2c
- (void)playerViewControllerWillStopPictureInPicture:(id)arg1;	// IMP=0x000000000014bb26
- (void)playerViewControllerDidStartPictureInPicture:(id)arg1;	// IMP=0x000000000014bb20
- (void)playerViewControllerWillStartPictureInPicture:(id)arg1;	// IMP=0x000000000014bb1a
- (void)playerViewController:(id)arg1 failedToStartPictureInPictureWithError:(id)arg2;	// IMP=0x000000000014ba99
- (void)playerViewController:(id)arg1 restoreUserInterfaceForPictureInPictureStopWithCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000014b9f4
- (_Bool)playerViewControllerShouldAutomaticallyDismissAtPictureInPictureStart:(id)arg1;	// IMP=0x000000000014b9ec
- (void)pipDidStop:(id)arg1;	// IMP=0x000000000014b946
- (void)pipWillStop:(id)arg1;	// IMP=0x000000000014b8a0
- (void)pipDidStart:(id)arg1;	// IMP=0x000000000014b7fa
- (void)pipWillStart:(id)arg1;	// IMP=0x000000000014b754
- (void)pictureInPictureDidStopForPlaybackViewController:(id)arg1;	// IMP=0x000000000014b743
- (void)pictureInPictureWillStopForPlaybackViewController:(id)arg1;	// IMP=0x000000000014b6d7
- (void)pictureInPictureDidStartForPlaybackViewController:(id)arg1;	// IMP=0x000000000014b5e0
- (void)pictureInPictureWillStartForPlaybackViewController:(id)arg1;	// IMP=0x000000000014b5cf
- (_Bool)isPiPEnabledForPlayer:(id)arg1;	// IMP=0x000000000014b51c
- (id)playbackViewControllerForPictureInPictureSource:(id)arg1;	// IMP=0x000000000014b2f4
- (id)playbackViewControllerPassingTest:(CDUnknownBlockType)arg1;	// IMP=0x000000000014b18f
- (void)dealloc;	// IMP=0x000000000014b0b3
@property(readonly, copy) NSString *description;
- (id)init;	// IMP=0x000000000014adff

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
