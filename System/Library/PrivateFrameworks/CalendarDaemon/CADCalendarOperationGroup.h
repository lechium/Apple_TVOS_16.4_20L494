//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CADOperationGroup.h"

__attribute__((visibility("hidden")))
@interface CADCalendarOperationGroup : CADOperationGroup
{
}

+ (_Bool)requiresEventAccess;	// IMP=0x001000000004a02f
- (int)_tryPerformBlockWithCalendarID:(id)arg1 forAction:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000004a6e1
- (void)CADCalendar:(id)arg1 hasEvents:(CDUnknownBlockType)arg2;	// IMP=0x000000000004a5d2
- (void)CADDatabaseGetCalendarsWithFaultedProperties:(id)arg1 reply:(CDUnknownBlockType)arg2;	// IMP=0x000000000004a037

@end

