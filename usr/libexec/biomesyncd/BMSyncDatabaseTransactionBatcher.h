//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMSyncDatabase;

@interface BMSyncDatabaseTransactionBatcher : NSObject
{
    BMSyncDatabase *_database;	// 8 = 0x8
    unsigned long long _batchSize;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000040008
- (_Bool)executeOperationWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000003fe70
- (id)initWithDatabase:(id)arg1 transcationBatchSize:(unsigned long long)arg2;	// IMP=0x001000000003fdfa

@end

