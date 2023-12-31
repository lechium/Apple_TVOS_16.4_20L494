//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface AMSMetricsMemoryDataSource : NSObject
{
    NSMutableDictionary *_batches;	// 8 = 0x8
}

+ (id)batchesFromEvents:(id)arg1;	// IMP=0x00100000002a73b5
- (void).cxx_destruct;	// IMP=0x00000000002a8069
@property(retain, nonatomic) NSMutableDictionary *batches; // @synthesize batches=_batches;
- (_Bool)willStartBatchingWithLogKey:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002a8046
- (_Bool)skipEvents:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002a8034
- (_Bool)removeEvents:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002a7c05
- (void)enumerateSortedEventsForTopic:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000002a791b
- (void)didFinishBatching;	// IMP=0x00000000002a7915
- (void)cancel;	// IMP=0x00000000002a790f
- (id)initWithEvents:(id)arg1;	// IMP=0x00000000002a730d

@end

