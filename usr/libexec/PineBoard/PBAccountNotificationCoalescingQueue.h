//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface PBAccountNotificationCoalescingQueue : NSObject
{
    NSMutableArray *_allNotifications;	// 8 = 0x8
    NSMutableSet *_coalescedSet;	// 16 = 0x10
    NSMutableDictionary *_notificationByIdentifier;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000006de6c
@property(readonly, nonatomic) NSMutableDictionary *notificationByIdentifier; // @synthesize notificationByIdentifier=_notificationByIdentifier;
@property(readonly, nonatomic) NSMutableSet *coalescedSet; // @synthesize coalescedSet=_coalescedSet;
@property(readonly, nonatomic) NSMutableArray *allNotifications; // @synthesize allNotifications=_allNotifications;
- (void)_keepNotification:(id)arg1 forAccountIdentifier:(id)arg2 removingNotification:(id)arg3;	// IMP=0x001000000006ddb9
- (id)coalescedNotifications;	// IMP=0x001000000006d952
- (void)addNotification:(id)arg1;	// IMP=0x001000000006d5e2
- (id)init;	// IMP=0x001000000006d556

@end

