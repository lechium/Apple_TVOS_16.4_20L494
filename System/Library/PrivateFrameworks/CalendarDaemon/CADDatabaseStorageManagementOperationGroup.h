//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CADOperationGroup.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface CADDatabaseStorageManagementOperationGroup : CADOperationGroup
{
}

+ (_Bool)requiresEventAccess;	// IMP=0x001000000001fbba
- (unsigned long long)sizeDirectoryAtPath:(id)arg1 excludingDirectory:(id)arg2;	// IMP=0x0000000000020228
- (unsigned long long)sizeAttachmentsForDatabase:(struct CalDatabase *)arg1;	// IMP=0x000000000001ff33
- (unsigned long long)sizeCalendarDirectoryForDatabase:(struct CalDatabase *)arg1;	// IMP=0x000000000001feed
- (void)CADDatabaseGetStorageUsage:(CDUnknownBlockType)arg1;	// IMP=0x000000000001fc9d
- (_Bool)storageManagementAccessGranted;	// IMP=0x000000000001fc0b
- (_Bool)accessGranted;	// IMP=0x000000000001fbc2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
