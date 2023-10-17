//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PBDialogContext, TVSBackgroundTask;

@interface PBWhatsNewService : NSObject
{
    _Bool _monitoringStarted;	// 8 = 0x8
    _Bool _shouldRetryShowingWhatsNew;	// 9 = 0x9
    _Bool _presentingWhatsNew;	// 10 = 0xa
    TVSBackgroundTask *_whatsNewCheckTask;	// 16 = 0x10
    double _checkTimeInterval;	// 24 = 0x18
    double _currentCheckTimeInterval;	// 32 = 0x20
    int _whatsNewNotifyToken;	// 40 = 0x28
    PBDialogContext *_dialogContext;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x0040000000094e0a
- (void).cxx_destruct;	// IMP=0x0020000000095a92
- (void)_presentWhatsNewDialog;	// IMP=0x001000000009556e
- (void)_scheduleWhatsNewCheckTaskWithInterval:(double)arg1;	// IMP=0x00100000000952ab
- (_Bool)_isHeadBoardAppFocused;	// IMP=0x0010000000095236
@property(nonatomic) double checkTimeInterval;
- (void)noteGoodTimeToShowWhatsNew;	// IMP=0x00100000000950e1
- (void)startWhatsNewMonitoring;	// IMP=0x0010000000094ea6
- (void)dealloc;	// IMP=0x0010000000094e61

@end

