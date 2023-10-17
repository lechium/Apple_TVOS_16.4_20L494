//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MusicLibrary/ML3MusicLibrary.h>

@interface ML3MusicLibrary (SBDML3UbiquitousDatabase)
- (_Bool)supportsUPP;	// IMP=0x001000000000b614
- (id)uppDatabase;	// IMP=0x001000000000b5a9
- (void)SBKCommitUniversalPlaybackPositionTransaction:(id)arg1 domainVersion:(id)arg2 metadataEnumerationBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000000c865
- (void)SBKCancelUniversalPlaybackPositionTransaction:(id)arg1;	// IMP=0x001000000000c85f
- (id)SBKBeginTransactionWithItemsToSyncEnumerationBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000000c74f
- (id)SBKSQLQueryStringForItemsNeedingPush;	// IMP=0x001000000000c72d
- (id)SBKQueryForTracksNeedingPushWithEntityRevisionAnchor:(unsigned long long)arg1 orderingTerms:(id)arg2;	// IMP=0x001000000000c540
@end

