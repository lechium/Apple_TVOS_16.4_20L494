//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class FLItemStoreDecorator;
@protocol NotificationProvider;

@interface NotificationController : NSObject
{
    FLItemStoreDecorator *_itemStoreDecorator;	// 8 = 0x8
    id <NotificationProvider> _notificationProvider;	// 16 = 0x10
}

+ (id)sharedController;	// IMP=0x002000000000a0eb
- (void).cxx_destruct;	// IMP=0x002000000000d09d
@property(retain, nonatomic) id <NotificationProvider> notificationProvider; // @synthesize notificationProvider=_notificationProvider;
- (id)xpcConnectionForClientWithMachServiceName:(id)arg1;	// IMP=0x001000000000cfd4
- (void)didActivateHSA2LoginNotificationNotification:(id)arg1;	// IMP=0x001000000000cea6
- (void)updateNotificationDeliveryDateForItem:(id)arg1;	// IMP=0x001000000000cd8a
- (void)_processFollowUpItemNotificationWithExtension:(id)arg1 activatedAction:(id)arg2;	// IMP=0x001000000000ccbb
- (void)_handleExtensionAction:(id)arg1 forItem:(id)arg2;	// IMP=0x001000000000c951
- (void)_handleNotificationAction:(id)arg1 forItem:(id)arg2 activationSource:(unsigned long long)arg3;	// IMP=0x001000000000c416
- (void)provider:(id)arg1 didDismissNotificationForFollowUpItemWithIdentifier:(id)arg2 activationSource:(unsigned long long)arg3;	// IMP=0x001000000000c218
- (void)provider:(id)arg1 didClearNotificationsForFollowUpItemsWithIdentifiers:(id)arg2 activationSource:(unsigned long long)arg3;	// IMP=0x001000000000c01a
- (void)_handleActivateActionFromSource:(unsigned long long)arg1 item:(id)arg2;	// IMP=0x001000000000bec5
- (void)provider:(id)arg1 didActivateNotificationForFollowUpItemWithIdentifier:(id)arg2 activationSource:(unsigned long long)arg3;	// IMP=0x001000000000bd1c
- (void)provider:(id)arg1 didActivateNotification:(id)arg2 forFollowUpItemWithIdentifier:(id)arg3 activationSource:(unsigned long long)arg4;	// IMP=0x001000000000b92c
- (id)providerForFollowUpItem:(id)arg1;	// IMP=0x001000000000b91e
- (void)tearDownNotificationForItem:(id)arg1;	// IMP=0x001000000000b8b2
- (void)_deliverNotificationsForItem:(id)arg1 forceDelivery:(_Bool)arg2;	// IMP=0x001000000000b622
- (void)deliverNotificationsForItem:(id)arg1;	// IMP=0x001000000000b60e
- (void)_processPendingItem:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000b4a9
- (void)_processPendingNotifications:(CDUnknownBlockType)arg1;	// IMP=0x001000000000b430
- (id)_activityCriteriaWithFrequency:(double)arg1;	// IMP=0x001000000000b30f
- (void)_registerActivityForItems:(id)arg1;	// IMP=0x001000000000ae6b
- (double)_timeTilNextActivityForItems:(id)arg1;	// IMP=0x001000000000a719
- (id)_itemsWithEligibleNotifications;	// IMP=0x001000000000a582
- (void)updateRepeatingActivityState;	// IMP=0x001000000000a4b4
- (void)_monitorUnlockEvents;	// IMP=0x001000000000a2ec
- (void)start;	// IMP=0x001000000000a16a

@end

