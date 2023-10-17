//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ASCRebootstrapNotifier : NSObject
{
    int _token;	// 8 = 0x8
    unsigned long long _rebootstrapCounterSnapshot;	// 16 = 0x10
}

+ (id)sharedNotifier;	// IMP=0x004000000003f952
@property(nonatomic) unsigned long long rebootstrapCounterSnapshot; // @synthesize rebootstrapCounterSnapshot=_rebootstrapCounterSnapshot;
@property(readonly, nonatomic) int token; // @synthesize token=_token;
- (void)postLocalNotification;	// IMP=0x000000000003fd78
- (void)postLocalNotificationIfNeeded;	// IMP=0x000000000003fcdd
- (void)dealloc;	// IMP=0x000000000003fc81
- (id)_initSingleton;	// IMP=0x000000000003f9b7

@end

