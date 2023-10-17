//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CADOperationGroup.h"

__attribute__((visibility("hidden")))
@interface CADNotificationMonitorOperationGroup : CADOperationGroup
{
}

+ (id)whitelistedBundles;	// IMP=0x001000000000c21a
+ (_Bool)requiresEventAccess;	// IMP=0x001000000000c212
- (void)CADEventSetInvitationStatus:(int)arg1 forEvents:(id)arg2 error:(CDUnknownBlockType)arg3;	// IMP=0x000000000000dc37
- (void)CADResourceChange:(id)arg1 setAlertedWithError:(CDUnknownBlockType)arg2;	// IMP=0x000000000000d9e2
- (void)CADDatabaseGetInboxRepliedSectionItems:(CDUnknownBlockType)arg1;	// IMP=0x000000000000d00b
- (void)CADDatabaseGetNotificationCountForSourceWithExternalIdentifier:(id)arg1 excludingDelegateSources:(_Bool)arg2 filteredByShowsNotificationsFlag:(_Bool)arg3 expanded:(_Bool)arg4 reply:(CDUnknownBlockType)arg5;	// IMP=0x000000000000ced2
- (void)CADDatabaseGetEventNotificationItemsAfterDate:(id)arg1 excludingUncheckedCalendars:(_Bool)arg2 filteredByShowsNotificationsFlag:(_Bool)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000000000cd8c
- (void)CADDatabaseGetInviteReplyNotifications:(CDUnknownBlockType)arg1;	// IMP=0x000000000000ca9b
- (void)CADDatabaseGetResourceChanges:(CDUnknownBlockType)arg1;	// IMP=0x000000000000c76e
- (void)CADCalendarSetClearedFromNotificationCenter:(id)arg1 error:(CDUnknownBlockType)arg2;	// IMP=0x000000000000c46b
- (void)CADDatabaseGetSharedCalendarInvitationsWithReply:(CDUnknownBlockType)arg1;	// IMP=0x000000000000c227

@end

