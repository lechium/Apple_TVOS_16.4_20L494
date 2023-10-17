//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class KVDatasetInfo, NSData, NSString;

@interface KVEmbeddedDatasetReader : NSObject
{
    NSData *_data;	// 8 = 0x8
    const struct Dataset *_dataset;	// 16 = 0x10
    KVDatasetInfo *_datasetInfo;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000023fdf
@property(readonly, copy) NSString *description;
- (id)datasetInfo;	// IMP=0x0000000000023f62
- (_Bool)enumerateItemsWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000023da1
- (id)initWithData:(id)arg1 dataset:(const struct Dataset *)arg2 error:(id *)arg3;	// IMP=0x0000000000023c33

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

