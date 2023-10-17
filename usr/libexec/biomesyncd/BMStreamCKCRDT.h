//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMStoreConfig, BMStreamCRDTLocationBuilder, BMSyncDatabase, BMSyncPolicy, BMSyncSessionMetricsCollector, BMSyncStreamID, NSCache, NSString;

@interface BMStreamCKCRDT : NSObject
{
    NSString *_localSiteIdentifier;	// 8 = 0x8
    BMStoreConfig *_config;	// 16 = 0x10
    BMSyncPolicy *_policy;	// 24 = 0x18
    BMStreamCRDTLocationBuilder *_locationBuilder;	// 32 = 0x20
    NSCache *_locationRowCache;	// 40 = 0x28
    BMSyncDatabase *_db;	// 48 = 0x30
    BMSyncStreamID *_streamID;	// 56 = 0x38
    BMSyncSessionMetricsCollector *_metricsCollector;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000000174ab
@property(retain, nonatomic) BMSyncSessionMetricsCollector *metricsCollector; // @synthesize metricsCollector=_metricsCollector;
@property(readonly, nonatomic) BMSyncStreamID *streamID; // @synthesize streamID=_streamID;
- (id)clockVector;	// IMP=0x0010000000017422
- (void)mergeAtomBatches:(id)arg1 sessionContext:(id)arg2 forLocation:(id)arg3;	// IMP=0x0010000000014c5e
- (void)mergeAtomBatch:(id)arg1 sessionContext:(id)arg2;	// IMP=0x0010000000014b06
- (void)handleDeletedLocation:(id)arg1 deleteCKRecord:(_Bool)arg2;	// IMP=0x0010000000014351
- (void)atomsInClockVector:(id)arg1 ckFormatVersion:(unsigned char)arg2 chunker:(id)arg3 transportType:(unsigned long long)arg4 enumerateWithBlock:(CDUnknownBlockType)arg5;	// IMP=0x0010000000013e52
- (void)populateAtomBatch:(id)arg1 withAtomsInClockVector:(id)arg2 forLocation:(id)arg3 ckFormatVersion:(unsigned char)arg4 valueVersion:(long long)arg5 chunker:(id)arg6;	// IMP=0x0010000000013312
- (_Bool)deleteAtOrBeforeHighestDeletedLocation:(id)arg1;	// IMP=0x00100000000131c9
- (_Bool)deletedExpiredBufferedLocationsForSiteIdentifier:(id)arg1;	// IMP=0x0010000000013085
- (_Bool)deleteLocationsUpToTTLAtTombstone:(id)arg1 siteIdentifier:(id)arg2;	// IMP=0x0010000000012e87
- (void)ingestNewChangesForSite:(id)arg1 transportType:(unsigned long long)arg2;	// IMP=0x0010000000011aa3
- (void)ingestNewChangesFromAllSitesInVectorClock:(id)arg1 transportType:(unsigned long long)arg2;	// IMP=0x0010000000011859
- (id)readerForSiteIdentifier:(id)arg1;	// IMP=0x00100000000116d7
- (void)addAtomWithValueData:(id)arg1 toAtomBatch:(id)arg2 fromAtomTableRecord:(id)arg3 version:(unsigned char)arg4 atomValueVersion:(long long)arg5;	// IMP=0x0010000000010ae4
- (_Bool)addAtomToAtomBatch:(id)arg1 ifChunkerAllows:(id)arg2 fromAtomTableRecord:(id)arg3 atomValueData:(id)arg4 version:(unsigned char)arg5 atomValueVersion:(long long)arg6;	// IMP=0x0010000000010a18
- (_Bool)writeAtomValue:(id)arg1 fromAtomRow:(id)arg2 usingWriter:(id)arg3 outBookmark:(id *)arg4;	// IMP=0x00100000000107a6
- (_Bool)handleDeleteAtomRow:(id)arg1 usingPruner:(id)arg2 outBookmark:(id *)arg3 outTombstoneBookmark:(id *)arg4;	// IMP=0x00100000000103fb
- (id)atomValueFromEvent:(id)arg1 ofType:(unsigned long long)arg2 version:(long long)arg3;	// IMP=0x0010000000010072
- (id)ckAtomTableRecordForEvent:(id)arg1 ofType:(unsigned long long)arg2 atBookmark:(id)arg3 previousTableRecord:(id)arg4 siteIdentifier:(id)arg5;	// IMP=0x001000000000f8e4
- (id)newTombstoneEnumeratorFromBookmark:(id)arg1 reader:(id)arg2;	// IMP=0x001000000000f646
- (id)newEnumeratorFromBookmark:(id)arg1 reader:(id)arg2;	// IMP=0x001000000000f611
- (id)initWithStreamID:(id)arg1 config:(id)arg2 policy:(id)arg3 locationAssignerPolicy:(id)arg4 localSiteIdentifier:(id)arg5 database:(id)arg6;	// IMP=0x001000000000f32a

@end

