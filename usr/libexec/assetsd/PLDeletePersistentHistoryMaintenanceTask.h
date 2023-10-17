//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PLDeletePersistentHistoryMaintenanceTask
{
}

- (long long)historyPercentThreshold;	// IMP=0x0020000000010e73
- (long long)daysOfHistoryToKeep;	// IMP=0x0010000000010d8b
- (void)deletePersistentHistoryWithContext:(id)arg1;	// IMP=0x001000000001089a
- (_Bool)runTaskWithTransaction:(id)arg1;	// IMP=0x00100000000107fa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
