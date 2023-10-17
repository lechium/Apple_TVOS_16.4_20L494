//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol TVPPlayback;

__attribute__((visibility("hidden")))
@interface TVPPlayerBookmarkMonitor : NSObject
{
    _Bool _playerHasFinishedLoading;	// 8 = 0x8
    NSTimer *_bookmarkPeriodicSaveTimer;	// 16 = 0x10
    NSObject<TVPPlayback> *_player;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000e6c5d
@property(nonatomic) _Bool playerHasFinishedLoading; // @synthesize playerHasFinishedLoading=_playerHasFinishedLoading;
@property(nonatomic) __weak NSObject<TVPPlayback> *player; // @synthesize player=_player;
@property(retain, nonatomic) NSTimer *bookmarkPeriodicSaveTimer; // @synthesize bookmarkPeriodicSaveTimer=_bookmarkPeriodicSaveTimer;
- (void)_updatePlayCountForMediaItem:(id)arg1 player:(id)arg2;	// IMP=0x00000000000e6b3d
- (void)_updateBookmarkTimeForMediaItem:(id)arg1 player:(id)arg2 playbackOfMediaItemIsEnding:(_Bool)arg3;	// IMP=0x00000000000e6a05
- (void)_bookmarkPeriodicSaveTimerFired:(id)arg1;	// IMP=0x00000000000e696b
- (void)_playerErrorDidOccur:(id)arg1;	// IMP=0x00000000000e6899
- (void)_playerCurrentMediaItemWillChange:(id)arg1;	// IMP=0x00000000000e6760
- (void)_playerStateWillChange:(id)arg1;	// IMP=0x00000000000e638a
- (void)dealloc;	// IMP=0x00000000000e6315
- (id)initWithPlayer:(id)arg1;	// IMP=0x00000000000e620e

@end
