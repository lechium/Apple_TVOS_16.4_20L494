//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <IMSharedUtilities/NSObject-Protocol.h>

@class CNChangeHistoryAddContactEvent, CNChangeHistoryAddGroupEvent, CNChangeHistoryAddMemberToGroupEvent, CNChangeHistoryAddSubgroupToGroupEvent, CNChangeHistoryDeleteContactEvent, CNChangeHistoryDeleteGroupEvent, CNChangeHistoryDropEverythingEvent, CNChangeHistoryRemoveMemberFromGroupEvent, CNChangeHistoryRemoveSubgroupFromGroupEvent, CNChangeHistoryUpdateContactEvent, CNChangeHistoryUpdateGroupEvent;

@protocol CNChangeHistoryEventVisitor <NSObject>
- (void)visitDeleteContactEvent:(CNChangeHistoryDeleteContactEvent *)arg1;
- (void)visitUpdateContactEvent:(CNChangeHistoryUpdateContactEvent *)arg1;
- (void)visitAddContactEvent:(CNChangeHistoryAddContactEvent *)arg1;
- (void)visitDropEverythingEvent:(CNChangeHistoryDropEverythingEvent *)arg1;

@optional
- (void)visitRemoveSubgroupFromGroupEvent:(CNChangeHistoryRemoveSubgroupFromGroupEvent *)arg1;
- (void)visitAddSubgroupToGroupEvent:(CNChangeHistoryAddSubgroupToGroupEvent *)arg1;
- (void)visitRemoveMemberFromGroupEvent:(CNChangeHistoryRemoveMemberFromGroupEvent *)arg1;
- (void)visitAddMemberToGroupEvent:(CNChangeHistoryAddMemberToGroupEvent *)arg1;
- (void)visitDeleteGroupEvent:(CNChangeHistoryDeleteGroupEvent *)arg1;
- (void)visitUpdateGroupEvent:(CNChangeHistoryUpdateGroupEvent *)arg1;
- (void)visitAddGroupEvent:(CNChangeHistoryAddGroupEvent *)arg1;
@end

