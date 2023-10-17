//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VoiceShortcuts/VCPBMessageTyped-Protocol.h>

@class NSArray, NSDictionary;
@protocol VCShortcutSyncService;

@protocol VCOutgoingSyncDataHandling <VCPBMessageTyped>
- (_Bool)resetSyncStateForService:(id <VCShortcutSyncService>)arg1 error:(id *)arg2;
- (_Bool)markChangesAsSynced:(NSArray *)arg1 withSyncService:(id <VCShortcutSyncService>)arg2 metadata:(NSDictionary *)arg3 error:(id *)arg4;
- (NSArray *)unsyncedChangesForSyncService:(id <VCShortcutSyncService>)arg1 metadata:(id *)arg2 error:(id *)arg3;
@end

