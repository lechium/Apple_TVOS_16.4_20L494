//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface ADSystemMuteModeObserver : NSObject
{
    int _ringerStateToken;	// 8 = 0x8
    long long _muteMode;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x00400000001ac3fa
- (void).cxx_destruct;	// IMP=0x00200000001ac89b
- (void)_unregisterForRingerMuteStateNotifications;	// IMP=0x00100000001ac86f
- (void)_registerForRingerMuteStateNotifications;	// IMP=0x00100000001ac749
- (int)_ringerStateToken;	// IMP=0x00100000001ac71c
- (void)_updateRingerMuteState:(int)arg1;	// IMP=0x00100000001ac661
- (long long)muteMode;	// IMP=0x00100000001ac5bd
- (void)dealloc;	// IMP=0x00100000001ac57f
- (id)init;	// IMP=0x00100000001ac44f

@end

