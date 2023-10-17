//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSProgress, NSString, NSTimer, UIAlertController, UIWindow, UIWindowScene, _UIProgressView;

__attribute__((visibility("hidden")))
@interface _UIApplicationModalProgressController : NSObject
{
    _Bool _disableButtonAction;	// 8 = 0x8
    _UIProgressView *_progressView;	// 16 = 0x10
    UIWindowScene *_weakScene;	// 24 = 0x18
    double _displayDelaySeconds;	// 32 = 0x20
    UIWindow *_window;	// 40 = 0x28
    UIAlertController *_alertController;	// 48 = 0x30
    CDUnknownBlockType _dismissalHandler;	// 56 = 0x38
    CDUnknownBlockType _preDisplayTestBlock;	// 64 = 0x40
    NSProgress *_progress;	// 72 = 0x48
    NSTimer *_showTimer;	// 80 = 0x50
    NSTimer *_hideTimer;	// 88 = 0x58
    double _displayStartTime;	// 96 = 0x60
    NSProgress *_urlProgress;	// 104 = 0x68
}

+ (id)instanceForScene:(id)arg1;	// IMP=0x006000000050ce6d
+ (id)sharedInstance;	// IMP=0x006000000050cde8
- (void).cxx_destruct;	// IMP=0x000000000050f570
@property(retain, nonatomic) NSProgress *urlProgress; // @synthesize urlProgress=_urlProgress;
@property(nonatomic, getter=_displayStartTime, setter=_setDisplayStartTime:) double displayStartTime; // @synthesize displayStartTime=_displayStartTime;
@property(retain, nonatomic, getter=_hideTimer, setter=_setHideTimer:) NSTimer *hideTimer; // @synthesize hideTimer=_hideTimer;
@property(retain, nonatomic, getter=_showTimer, setter=_setShowTimer:) NSTimer *showTimer; // @synthesize showTimer=_showTimer;
@property(retain, nonatomic, getter=_progress, setter=_setProgress:) NSProgress *progress; // @synthesize progress=_progress;
@property(copy, nonatomic, getter=_preDisplaySetBlock, setter=_setPreDisplayTestBlock:) CDUnknownBlockType preDisplayTestBlock; // @synthesize preDisplayTestBlock=_preDisplayTestBlock;
@property(copy, nonatomic, getter=_dismissalHandler, setter=_setDismissalHandler:) CDUnknownBlockType dismissalHandler; // @synthesize dismissalHandler=_dismissalHandler;
@property(retain, nonatomic, getter=_alertController, setter=_setAlertController:) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic, getter=_window, setter=_setWindow:) UIWindow *window; // @synthesize window=_window;
@property(nonatomic) double displayDelaySeconds; // @synthesize displayDelaySeconds=_displayDelaySeconds;
- (void)displayForDownloadingURL:(id)arg1 copyToURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000050e222
- (void)displayForCopyingFileAtURL:(id)arg1 toURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000050e210
- (void)displayForDownloadingURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000050e1f9
- (void)displayWithTitle:(id)arg1 message:(id)arg2 progress:(id)arg3 buttonTitle:(id)arg4 preDisplayTestBlock:(CDUnknownBlockType)arg5 dismissalHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000050dddf
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSString *title;
- (void)reconfigureWithTitle:(id)arg1 message:(id)arg2 progress:(id)arg3 buttonTitle:(id)arg4 dismissalHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000050d741
- (void)hideAfterDelay:(double)arg1 forceCompletion:(_Bool)arg2 replacementDismissalHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000050d5d3
- (void)hideAfterMinimumUptimeWithDismissalHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000050d497
- (void)_dismissButtonAction:(id)arg1;	// IMP=0x000000000050d478
- (void)_hideTimerAction:(id)arg1;	// IMP=0x000000000050d43b
- (void)_showTimerAction:(id)arg1;	// IMP=0x000000000050d36b
- (void)_hideImmediatelyWasDismissedByUser:(_Bool)arg1;	// IMP=0x000000000050d31b
- (void)_reset;	// IMP=0x000000000050d297
- (void)_callAndClearDismissalHandlerWasDismissedByUser:(_Bool)arg1;	// IMP=0x000000000050d247
- (id)init;	// IMP=0x000000000050d135

@end
