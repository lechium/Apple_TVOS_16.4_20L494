//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreServices/LSApplicationWorkspaceObserver.h>

@class NSObject;
@protocol LSApplicationWorkspaceObserverProtocol;

@interface WorkspaceDownloadObserver : LSApplicationWorkspaceObserver
{
    NSObject<LSApplicationWorkspaceObserverProtocol> *_delegate;	// 8 = 0x8
}

- (void)applicationInstallsDidPrioritize:(id)arg1;	// IMP=0x00200000001cecbb
- (void)applicationInstallsDidCancel:(id)arg1;	// IMP=0x00100000001cec9e
- (void)applicationInstallsDidResume:(id)arg1;	// IMP=0x00100000001cec81
- (void)applicationInstallsDidPause:(id)arg1;	// IMP=0x00100000001cec64
- (void)applicationInstallsArePrioritized:(id)arg1 arePaused:(id)arg2;	// IMP=0x00100000001cec47
- (void)applicationsDidUninstall:(id)arg1;	// IMP=0x00100000001cec2a
- (void)applicationsDidInstall:(id)arg1;	// IMP=0x00100000001cec0d
- (void)applicationInstallsDidChange:(id)arg1;	// IMP=0x00100000001cebf0
- (void)applicationInstallsDidStart:(id)arg1;	// IMP=0x00100000001cebd3
@property(nonatomic) NSObject<LSApplicationWorkspaceObserverProtocol> *delegate;
- (void)stopObserving;	// IMP=0x00100000001ceb79
- (void)startObserving;	// IMP=0x00100000001ceb41

@end

