//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IKAppDocument, IKAppPlayerBridge, NSArray, NSDate, NSDictionary, NSNumber, NSString, TVPMusicContextMenuData, UINavigationController;
@protocol IKAppMediaItem, IKAppPlaylist, TVPlaying;

__attribute__((visibility("hidden")))
@interface _TVPlayer : NSObject
{
    TVPMusicContextMenuData *_playbackViewControllerContextMenuData;	// 8 = 0x8
    struct {
        _Bool hasUserInfo;
        _Bool hasScanRate;
        _Bool hasMuted;
        _Bool hasShowsResumeMenu;
        _Bool hasNextMediaItem;
        _Bool hasPreviousMediaItem;
        _Bool hasPause;
        _Bool hasNext;
        _Bool hasPrevious;
        _Bool hasChangeToMediaItemAtIndex;
        _Bool hasStartObservingEvent;
        _Bool hasStopObservingEvent;
        _Bool hasCurrentMediaItemHasVideoContent;
        _Bool hasPreventsSleepDuringVideoPlayback;
        _Bool hasUpdatesMediaRemoteInfoAutomatically;
        _Bool hasPausesOnHDCPProtectionDown;
        _Bool hasReset;
        _Bool hasPlaybackDate;
        _Bool hasAccessLogs;
        _Bool hasErrorLogs;
        _Bool hasResumeBehavior;
    } _playerFlags;	// 16 = 0x10
    _Bool _interactiveOverlayDismissable;	// 37 = 0x25
    _Bool _isInternalPlayerImpl;	// 38 = 0x26
    _Bool _presentsImplicitlyOnPlay;	// 39 = 0x27
    id <IKAppPlaylist> _playlist;	// 40 = 0x28
    IKAppDocument *_overlayDocument;	// 48 = 0x30
    IKAppDocument *_interactiveOverlayDocument;	// 56 = 0x38
    NSDictionary *_contextMenuData;	// 64 = 0x40
    IKAppPlayerBridge *_bridge;	// 72 = 0x48
    UINavigationController *_navigationController;	// 80 = 0x50
    NSObject<TVPlaying> *_playerImpl;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x00000000000d7159
@property(nonatomic) _Bool presentsImplicitlyOnPlay; // @synthesize presentsImplicitlyOnPlay=_presentsImplicitlyOnPlay;
@property(readonly, nonatomic) _Bool isInternalPlayerImpl; // @synthesize isInternalPlayerImpl=_isInternalPlayerImpl;
@property(retain, nonatomic) NSObject<TVPlaying> *playerImpl; // @synthesize playerImpl=_playerImpl;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) IKAppPlayerBridge *bridge; // @synthesize bridge=_bridge;
@property(copy, nonatomic) NSDictionary *contextMenuData; // @synthesize contextMenuData=_contextMenuData;
@property(nonatomic) _Bool interactiveOverlayDismissable; // @synthesize interactiveOverlayDismissable=_interactiveOverlayDismissable;
@property(retain, nonatomic) IKAppDocument *interactiveOverlayDocument; // @synthesize interactiveOverlayDocument=_interactiveOverlayDocument;
@property(retain, nonatomic) IKAppDocument *overlayDocument; // @synthesize overlayDocument=_overlayDocument;
@property(retain, nonatomic) id <IKAppPlaylist> playlist; // @synthesize playlist=_playlist;
- (void)_present:(_Bool)arg1 andPlay:(_Bool)arg2;	// IMP=0x00000000000d6cc4
- (id)_ikMediaItemForPublicObj:(id)arg1;	// IMP=0x00000000000d6b2c
- (void)dispatchEvent:(id)arg1 userInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000000d6993
- (void)presentWithAnimation:(_Bool)arg1;	// IMP=0x00000000000d693b
- (void)stopObservingEvent:(id)arg1;	// IMP=0x00000000000d68c3
- (void)startObservingEvent:(id)arg1 extraInfo:(id)arg2;	// IMP=0x00000000000d6823
- (void)cleanup;	// IMP=0x00000000000d6811
- (void)scan:(double)arg1;	// IMP=0x00000000000d67b3
- (void)setElapsedTime:(double)arg1;	// IMP=0x00000000000d6764
@property(nonatomic) _Bool showsResumeMenu;
@property(nonatomic) _Bool muted;
@property(readonly, nonatomic) double scanRate;
@property(readonly, nonatomic) NSArray *currentMediaItemErrorLogs;
@property(readonly, nonatomic) NSArray *currentMediaItemAccessLogs;
@property(readonly, nonatomic) id <IKAppMediaItem> previousMediaItem;
@property(readonly, nonatomic) id <IKAppMediaItem> nextMediaItem;
@property(readonly, nonatomic) id <IKAppMediaItem> currentMediaItem;
@property(readonly, nonatomic) NSNumber *currentMediaItemDuration;
@property(readonly, nonatomic) NSDate *currentMediaItemDate;
- (void)changeToMediaAtIndex:(long long)arg1;	// IMP=0x00000000000d56c9
- (void)previous;	// IMP=0x00000000000d5681
- (void)next;	// IMP=0x00000000000d5639
- (void)stop;	// IMP=0x00000000000d55fc
- (void)pause;	// IMP=0x00000000000d55b4
- (void)play;	// IMP=0x00000000000d557e
- (void)present;	// IMP=0x00000000000d5565
@property(readonly, nonatomic) long long state;
@property(copy, nonatomic) NSDictionary *userInfo;
- (void)reset;	// IMP=0x00000000000d5406
@property(nonatomic) _Bool pausesOnHDCPProtectionDown;
@property(nonatomic) _Bool updatesMediaRemoteInfoAutomatically;
@property(nonatomic) _Bool preventsSleepDuringVideoPlayback;
@property(readonly, nonatomic) _Bool currentMediaItemHasVideoContent;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00000000000d50fc
- (void)dealloc;	// IMP=0x00000000000d50aa
- (id)initWithIKAppPlayer:(id)arg1 navigationController:(id)arg2;	// IMP=0x00000000000d4fab
- (id)initWithPlayer:(id)arg1;	// IMP=0x00000000000d4c82

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

