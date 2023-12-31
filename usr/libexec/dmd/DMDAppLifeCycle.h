//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CATStateMachine, NSDate, NSOperationQueue, NSPointerArray, NSProgress, NSString;

@interface DMDAppLifeCycle : NSObject
{
    NSString *_bundleIdentifier;	// 8 = 0x8
    NSProgress *_progress;	// 16 = 0x10
    NSPointerArray *_observers;	// 24 = 0x18
    NSOperationQueue *_queue;	// 32 = 0x20
    CATStateMachine *_stateMachine;	// 40 = 0x28
    NSDate *_lastModified;	// 48 = 0x30
}

+ (id)_lifeCycleByBundleIdentifier;	// IMP=0x004000000001e1a4
+ (void)_removeLifeCycleForBundleIdentifier:(id)arg1;	// IMP=0x001000000001e107
+ (id)lifeCycleForBundleIdentifier:(id)arg1;	// IMP=0x001000000001de31
- (void).cxx_destruct;	// IMP=0x0020000000022901
@property(retain, nonatomic) NSDate *lastModified; // @synthesize lastModified=_lastModified;
@property(retain, nonatomic) CATStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSPointerArray *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void)cancelAndWaitUntilAllOperationsAreFinished;	// IMP=0x0010000000022837
- (void)didResetState;	// IMP=0x001000000002255d
- (void)didChangeUpdatingProgress;	// IMP=0x001000000002237f
- (void)didChangeInstallingProgress;	// IMP=0x00100000000221a1
- (void)removeObserver:(id)arg1;	// IMP=0x0010000000021fec
- (void)addObserver:(id)arg1;	// IMP=0x0010000000021edc
- (void)didFinishUninstalling;	// IMP=0x0010000000021c36
- (void)didFailUninstalling;	// IMP=0x0010000000021990
- (void)willStartUninstalling;	// IMP=0x00100000000216ea
- (void)didFinishUpdating;	// IMP=0x0010000000021444
- (void)didFailUpdating;	// IMP=0x001000000002119e
- (void)didCancelUpdating;	// IMP=0x0010000000020ef8
- (void)didResumeUpdating;	// IMP=0x0010000000020c52
- (void)didPauseUpdating;	// IMP=0x00100000000209ac
- (void)didStartUpdating;	// IMP=0x0010000000020706
- (void)willStartUpdating;	// IMP=0x0010000000020460
- (void)didFinishInstalling;	// IMP=0x00100000000201ba
- (void)didFailInstalling;	// IMP=0x001000000001ff14
- (void)didCancelInstalling;	// IMP=0x001000000001fc6e
- (void)didResumeInstalling;	// IMP=0x001000000001f9c8
- (void)didPauseInstalling;	// IMP=0x001000000001f722
- (void)didStartInstalling;	// IMP=0x001000000001f47c
- (void)willStartInstalling;	// IMP=0x001000000001f1d6
@property(readonly, nonatomic) NSString *currentStateName;
@property(readonly, nonatomic) unsigned long long currentState;
- (void)_updateLastModified;	// IMP=0x001000000001ea10
- (_Bool)_isUnchangedForInterval:(double)arg1;	// IMP=0x001000000001e9ad
- (_Bool)_isInTransitoryState;	// IMP=0x001000000001e991
- (_Bool)_isStale;	// IMP=0x001000000001e94b
- (id)initWithBundleIdentifier:(id)arg1 currentState:(unsigned long long)arg2;	// IMP=0x001000000001e2a3
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x001000000001e1f9

@end

