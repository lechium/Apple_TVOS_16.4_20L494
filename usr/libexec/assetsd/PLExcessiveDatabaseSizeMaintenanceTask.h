//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface PLExcessiveDatabaseSizeMaintenanceTask
{
}

- (_Bool)isOrphanedSceneClassificationsCountExcessiveWithPathManager:(id)arg1;	// IMP=0x00200000000121e5
- (id)isHistorySizeExcessiveWithPathManager:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000011bc9
- (_Bool)isHistorySizeExcessiveWithPathManager:(id)arg1;	// IMP=0x0010000000011a50
- (void)_forceRebuildWithReason:(long long)arg1 pathManager:(id)arg2 transaction:(id)arg3;	// IMP=0x001000000001182e
- (_Bool)runTaskWithTransaction:(id)arg1;	// IMP=0x00100000000116d5

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
